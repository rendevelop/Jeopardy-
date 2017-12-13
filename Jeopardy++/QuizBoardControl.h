#pragma once

#include "CQuiz.h"
#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Jeopardy {
	/// <summary>
	/// Summary for QuizBoardControl
	/// </summary>
	public ref class QuizBoardControl : public System::Windows::Forms::UserControl
	{
	public:
		QuizBoardControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			// set up quiz
			quiz = new CQuiz();
			quiz->setTitle("Random Quiz");

			for (int i = 0; i < COLS; i++)
			{
				int points = 100;
				for (int j = 0; j < ROWS; j++)
				{
					CQuestion question;
					question.setTitle(std::string("Question Title"));
					question.setAnswer(std::string("Answer"));
					question.setPoints(points);
					question.setQuestionType(i+1);
					question.setID(std::rand() % 1000);
					question.addOption(std::string("Random"));
					question.addOption(std::string("Answer"));
					question.addOption(std::string("Option"));
					question.addOption(std::string("Choice"));
					// add to quiz
					quiz->addQuestion(question);
					points *= 2;
				}
			}

			// set up the buttons
			buttons = gcnew cli::array<Button ^, 2>(COLS, ROWS);
			buttons_visibility = gcnew cli::array<bool, 2>(COLS, ROWS);
			int x = 3;
			for (int i = 0; i < COLS; i++)
			{
				int y = 71;
				for (int j = 0; j < ROWS; j++) {
					System::Diagnostics::Debug::WriteLine("ROW: " + j + " COL: " + i + " INDEX: " + (i*ROWS + j));
					CQuestion question = quiz->getQuestion(i * ROWS + j);
					Int32 cash = Convert::ToInt32(question.getPoints());
					// Create buttons
					buttons[i, j] = gcnew System::Windows::Forms::Button();
					buttons[i, j]->FlatAppearance->BorderColor = System::Drawing::Color::Black;
					buttons[i, j]->FlatAppearance->BorderSize = 4;
					buttons[i, j]->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
					buttons[i, j]->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
					buttons[i, j]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					buttons[i, j]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					buttons[i, j]->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
						static_cast<System::Int32>(static_cast<System::Byte>(9)));
					buttons[i, j]->Size = System::Drawing::Size(130, 77);
					buttons[i, j]->Left = x;
					buttons[i, j]->Top = y;
					buttons[i, j]->TabIndex = 12;
					buttons[i, j]->Text = L"$" + Convert::ToString(cash);
					buttons[i, j]->UseVisualStyleBackColor = true;
					buttons[i, j]->Tag = gcnew Int32(i * ROWS + j);
					buttons[i, j]->Click += gcnew System::EventHandler(this, &QuizBoardControl::cellBtn_Click);
					buttons_visibility[i, j] = true; // set all visibility to true by default
					this->Controls->Add(buttons[i, j]);
					y += 71;
				}
				x += 126;
			}

		}

		QuizBoardControl(CQuiz quiz)
		{
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QuizBoardControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		const int ROWS = 5;
		const int COLS = 6;
		int points = 0;
		array<Button^>^ choices;
	private: CQuiz *quiz;
	private: cli::array<Button ^, 2>^ buttons;
			 cli::array<bool, 2>^ buttons_visibility;
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  PointsValueLabel;
	private: System::Windows::Forms::Button^  Category1Button;
	private: System::Windows::Forms::Button^  Category2Button;
	private: System::Windows::Forms::Button^  Category3Button;
	private: System::Windows::Forms::Button^  Category4Button;
	private: System::Windows::Forms::Button^  Category5Button;
	private: System::Windows::Forms::Button^  Category6Button;
	private: System::Windows::Forms::Label^  QuestionTitleLabel;



















	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(QuizBoardControl::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PointsValueLabel = (gcnew System::Windows::Forms::Label());
			this->Category1Button = (gcnew System::Windows::Forms::Button());
			this->Category2Button = (gcnew System::Windows::Forms::Button());
			this->Category3Button = (gcnew System::Windows::Forms::Button());
			this->Category4Button = (gcnew System::Windows::Forms::Button());
			this->Category5Button = (gcnew System::Windows::Forms::Button());
			this->Category6Button = (gcnew System::Windows::Forms::Button());
			this->QuestionTitleLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(754, 77);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(0, 444);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(754, 46);
			this->label2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(469, 444);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(14, 450);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Cash:";
			// 
			// PointsValueLabel
			// 
			this->PointsValueLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->PointsValueLabel->AutoSize = true;
			this->PointsValueLabel->BackColor = System::Drawing::Color::Black;
			this->PointsValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PointsValueLabel->ForeColor = System::Drawing::Color::Green;
			this->PointsValueLabel->Location = System::Drawing::Point(106, 450);
			this->PointsValueLabel->Name = L"PointsValueLabel";
			this->PointsValueLabel->Size = System::Drawing::Size(44, 31);
			this->PointsValueLabel->TabIndex = 4;
			this->PointsValueLabel->Text = L"$0";
			this->PointsValueLabel->TextChanged += gcnew System::EventHandler(this, &QuizBoardControl::PointsValueLabel_TextChanged);
			// 
			// Category1Button
			// 
			this->Category1Button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Category1Button->FlatAppearance->BorderSize = 4;
			this->Category1Button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Category1Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Category1Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Category1Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->Category1Button->Location = System::Drawing::Point(3, 0);
			this->Category1Button->Name = L"Category1Button";
			this->Category1Button->Size = System::Drawing::Size(130, 77);
			this->Category1Button->TabIndex = 5;
			this->Category1Button->Text = L"CATEGORY1";
			this->Category1Button->UseVisualStyleBackColor = true;
			// 
			// Category2Button
			// 
			this->Category2Button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Category2Button->FlatAppearance->BorderSize = 4;
			this->Category2Button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Category2Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Category2Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Category2Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->Category2Button->Location = System::Drawing::Point(129, 0);
			this->Category2Button->Name = L"Category2Button";
			this->Category2Button->Size = System::Drawing::Size(130, 77);
			this->Category2Button->TabIndex = 6;
			this->Category2Button->Text = L"CATEGORY2";
			this->Category2Button->UseVisualStyleBackColor = true;
			// 
			// Category3Button
			// 
			this->Category3Button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Category3Button->FlatAppearance->BorderSize = 4;
			this->Category3Button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Category3Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Category3Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Category3Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->Category3Button->Location = System::Drawing::Point(255, 0);
			this->Category3Button->Name = L"Category3Button";
			this->Category3Button->Size = System::Drawing::Size(130, 77);
			this->Category3Button->TabIndex = 7;
			this->Category3Button->Text = L"CATEGORY3";
			this->Category3Button->UseVisualStyleBackColor = true;
			// 
			// Category4Button
			// 
			this->Category4Button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Category4Button->FlatAppearance->BorderSize = 4;
			this->Category4Button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Category4Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Category4Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Category4Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->Category4Button->Location = System::Drawing::Point(381, 0);
			this->Category4Button->Name = L"Category4Button";
			this->Category4Button->Size = System::Drawing::Size(130, 77);
			this->Category4Button->TabIndex = 8;
			this->Category4Button->Text = L"CATEGORY4";
			this->Category4Button->UseVisualStyleBackColor = true;
			// 
			// Category5Button
			// 
			this->Category5Button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Category5Button->FlatAppearance->BorderSize = 4;
			this->Category5Button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Category5Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Category5Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Category5Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->Category5Button->Location = System::Drawing::Point(507, 0);
			this->Category5Button->Name = L"Category5Button";
			this->Category5Button->Size = System::Drawing::Size(130, 77);
			this->Category5Button->TabIndex = 9;
			this->Category5Button->Text = L"CATEGORY5";
			this->Category5Button->UseVisualStyleBackColor = true;
			// 
			// Category6Button
			// 
			this->Category6Button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Category6Button->FlatAppearance->BorderSize = 4;
			this->Category6Button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Category6Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Category6Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Category6Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->Category6Button->Location = System::Drawing::Point(633, 0);
			this->Category6Button->Name = L"Category6Button";
			this->Category6Button->Size = System::Drawing::Size(130, 77);
			this->Category6Button->TabIndex = 10;
			this->Category6Button->Text = L"CATEGORY6";
			this->Category6Button->UseVisualStyleBackColor = true;
			// 
			// QuestionTitleLabel
			// 
			this->QuestionTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuestionTitleLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->QuestionTitleLabel->Location = System::Drawing::Point(0, 0);
			this->QuestionTitleLabel->MaximumSize = System::Drawing::Size(751, 200);
			this->QuestionTitleLabel->MinimumSize = System::Drawing::Size(751, 77);
			this->QuestionTitleLabel->Name = L"QuestionTitleLabel";
			this->QuestionTitleLabel->Size = System::Drawing::Size(751, 200);
			this->QuestionTitleLabel->TabIndex = 11;
			this->QuestionTitleLabel->Text = L"What is the Name of\?What is the Name of\?What is the Name of\?What is the Name of\?W"
				L"hat is the Name of\?What is the Name of\?";
			this->QuestionTitleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->QuestionTitleLabel->Visible = false;
			// 
			// QuizBoardControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Controls->Add(this->QuestionTitleLabel);
			this->Controls->Add(this->Category6Button);
			this->Controls->Add(this->Category5Button);
			this->Controls->Add(this->Category4Button);
			this->Controls->Add(this->Category3Button);
			this->Controls->Add(this->Category2Button);
			this->Controls->Add(this->Category1Button);
			this->Controls->Add(this->PointsValueLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"QuizBoardControl";
			this->Size = System::Drawing::Size(754, 490);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	System::Void cellBtn_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void choiceBtn_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void PointsValueLabel_TextChanged(System::Object^  sender, System::EventArgs^  e);
};
}
