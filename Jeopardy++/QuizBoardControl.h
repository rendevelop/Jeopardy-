#pragma once

#include "CQuiz.h"
#include <iostream>
#include <random>
#include <ctime>

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

			std::srand(time(NULL));

			// set up random quiz
			quiz->setTitle("Random Quiz");
			for (int i = 0; i < 6; i++)
			{
				int points = 100;
				for (int j = 0; j < 5; j++)
				{
					CQuestion question;
					question.setTitle("Random");
					question.setAnswer("Random");
					question.setPoints(points);

					// set random category
					int category = std::rand() % 6;
					question.setQuestionType(i++);

					question.setID(std::rand() % 1000);

					// add to quiz
					quiz->addQuestion(question);
					points *= 2;
				}
			}

			// set up the buttons
			cli::array<Button ^, 2> buttons = gcnew cli::array<Button ^, 2>(6, 5);

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
	private: CQuiz *quiz;
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






	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;


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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
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
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label2->Location = System::Drawing::Point(0, 444);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(754, 46);
			this->label2->TabIndex = 1;
			// 
			// pictureBox1
			// 
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
			this->Category4Button->Location = System::Drawing::Point(380, 0);
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
			this->Category5Button->Location = System::Drawing::Point(506, 0);
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
			this->Category6Button->Location = System::Drawing::Point(624, 0);
			this->Category6Button->Name = L"Category6Button";
			this->Category6Button->Size = System::Drawing::Size(130, 77);
			this->Category6Button->TabIndex = 10;
			this->Category6Button->Text = L"CATEGORY6";
			this->Category6Button->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderSize = 4;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button7->Location = System::Drawing::Point(3, 71);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 77);
			this->button7->TabIndex = 11;
			this->button7->Text = L"$100";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderSize = 4;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button8->Location = System::Drawing::Point(3, 145);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 77);
			this->button8->TabIndex = 12;
			this->button8->Text = L"$100";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->BorderSize = 4;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button9->Location = System::Drawing::Point(3, 218);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(130, 77);
			this->button9->TabIndex = 13;
			this->button9->Text = L"$100";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->BorderSize = 4;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button10->Location = System::Drawing::Point(3, 291);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 77);
			this->button10->TabIndex = 14;
			this->button10->Text = L"$100";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->BorderSize = 4;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)));
			this->button11->Location = System::Drawing::Point(3, 364);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(130, 77);
			this->button11->TabIndex = 15;
			this->button11->Text = L"$100";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// QuizBoardControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
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
	};
}
