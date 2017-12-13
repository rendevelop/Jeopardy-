#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
#include "QuizBoardControl.h"

using namespace msclr::interop;

System::Void Jeopardy::QuizBoardControl::cellBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	Int32 index = safe_cast<Int32>(button->Tag);
	CQuestion quest = quiz->getQuestion(index);

	label1->Hide();
	// hide all buttons
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			buttons[i, j]->Hide();
		}
	}
	Category1Button->Hide();
	Category2Button->Hide();
	Category3Button->Hide();
	Category4Button->Hide();
	Category5Button->Hide();
	Category6Button->Hide();

	QuestionTitleLabel->Text = marshal_as<String^>(quest.getTitle());
	QuestionTitleLabel->Show();

	// show answer choices
	choices = gcnew array<Button^>(quest.getNumOfOption());
	int x = 20;
	int y = 212;
	for (int i = 0; i < quest.getNumOfOption(); i++)
	{
		choices[i] = gcnew Button();
		choices[i]->FlatAppearance->BorderColor = System::Drawing::Color::Black;
		choices[i]->FlatAppearance->BorderSize = 4;
		choices[i]->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
		choices[i]->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
		choices[i]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		choices[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		choices[i]->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
			static_cast<System::Int32>(static_cast<System::Byte>(9)));
		choices[i]->Size = System::Drawing::Size(719, 41);
		choices[i]->Left = x;
		choices[i]->Top = y;
		choices[i]->TabIndex = 12;
		choices[i]->Text = marshal_as<String^>(quest.getOption(i));
		choices[i]->UseVisualStyleBackColor = true;
		choices[i]->Tag = gcnew Int32(index);
		choices[i]->Click += gcnew System::EventHandler(this, &QuizBoardControl::choiceBtn_Click);
		if (quest.getOption(i) == quest.getAnswer()) {
			choices[i]->Name = L"Correct";
		}
		this->Controls->Add(choices[i]);
		y += 47;
	}
}

System::Void Jeopardy::QuizBoardControl::choiceBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Button^ button = safe_cast<Button^>(sender);
	Int32 index = safe_cast<Int32>(button->Tag);
	CQuestion quest = quiz->getQuestion(index);
	String^ answer = marshal_as<String^>(quest.getAnswer());

	if (!button->Text->Equals(answer)) {
		// find correct_button
		/*Button^ correct_button;
		for (int i = 0; i < quest.getNumOfOption(); i++)
		{
			if (quest.getOption(i) == quest.getAnswer())
			{
				correct_button = choices[i];
			}
		}*/
		MessageBox::Show("Wrong! You have loss $" + Convert::ToString(quest.getPoints()) + ". Correct Answer: " + answer, "Wrong Answer");
		this->points -= quest.getPoints();
	}
	else {
		MessageBox::Show("Correct! You have gained $" + Convert::ToString(quest.getPoints()) + ".", "Correct Answer");
		this->points += quest.getPoints();
	}

	PointsValueLabel->Text = L"$" + Convert::ToString(this->points);
	QuestionTitleLabel->Hide();
		
	for (int i = 0; i < quest.getNumOfOption(); i++)
	{
		this->Controls->Remove(choices[i]);
		choices[i] = nullptr;
	}
		
	label1->Show();

	Category1Button->Show();
	Category2Button->Show();
	Category3Button->Show();
	Category4Button->Show();
	Category5Button->Show();
	Category6Button->Show();

	// show all buttons except original button pressed
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			int current_index = i * ROWS + j;
			if (current_index == index)
			{
				buttons[i, j]->Hide();
				buttons_visibility[i, j] = false;
			}
			else
			{
				if (buttons_visibility[i, j])
				{
					buttons[i, j]->Show();
				}
			}
		}
	}
}

System::Void Jeopardy::QuizBoardControl::PointsValueLabel_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
{
	Label^ label = safe_cast<Label^>(sender);
	String^ text = label->Text->Trim();
	Int32 cash = Convert::ToInt32(text->Substring(1));
	if (cash < 0)
	{
		label->ForeColor = System::Drawing::Color::Red;
	}
	else
	{
		label->ForeColor = System::Drawing::Color::Green;
	}
}
