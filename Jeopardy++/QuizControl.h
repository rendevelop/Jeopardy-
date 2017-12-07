#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Jeopardy {

	/// <summary>
	/// Summary for QuizControl
	/// </summary>
	public ref class QuizControl : public System::Windows::Forms::UserControl
	{
	public:
		QuizControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QuizControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  QuizLabel;
	private: System::Windows::Forms::TabControl^  Category;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  ImportButton;
	private: System::Windows::Forms::Button^  ExportButton;
	private: System::Windows::Forms::Button^  NextButton;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  DeleteCategoryButton;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  BackButton;


	protected:

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
			this->QuizLabel = (gcnew System::Windows::Forms::Label());
			this->Category = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->ImportButton = (gcnew System::Windows::Forms::Button());
			this->ExportButton = (gcnew System::Windows::Forms::Button());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->DeleteCategoryButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->Category->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// QuizLabel
			// 
			this->QuizLabel->AutoSize = true;
			this->QuizLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuizLabel->ForeColor = System::Drawing::Color::White;
			this->QuizLabel->Location = System::Drawing::Point(18, 20);
			this->QuizLabel->Name = L"QuizLabel";
			this->QuizLabel->Size = System::Drawing::Size(294, 39);
			this->QuizLabel->TabIndex = 1;
			this->QuizLabel->Text = L"Quiz Management";
			// 
			// Category
			// 
			this->Category->Controls->Add(this->tabPage1);
			this->Category->Controls->Add(this->tabPage2);
			this->Category->Location = System::Drawing::Point(200, 100);
			this->Category->Name = L"Category";
			this->Category->SelectedIndex = 0;
			this->Category->Size = System::Drawing::Size(543, 339);
			this->Category->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(535, 313);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(535, 307);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// ImportButton
			// 
			this->ImportButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->ImportButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ImportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImportButton->ForeColor = System::Drawing::Color::White;
			this->ImportButton->Location = System::Drawing::Point(25, 137);
			this->ImportButton->Name = L"ImportButton";
			this->ImportButton->Size = System::Drawing::Size(169, 77);
			this->ImportButton->TabIndex = 3;
			this->ImportButton->Text = L"Import Quiz";
			this->ImportButton->UseVisualStyleBackColor = false;
			// 
			// ExportButton
			// 
			this->ExportButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->ExportButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExportButton->ForeColor = System::Drawing::Color::White;
			this->ExportButton->Location = System::Drawing::Point(25, 235);
			this->ExportButton->Name = L"ExportButton";
			this->ExportButton->Size = System::Drawing::Size(169, 77);
			this->ExportButton->TabIndex = 4;
			this->ExportButton->Text = L"Export Quiz";
			this->ExportButton->UseVisualStyleBackColor = false;
			// 
			// NextButton
			// 
			this->NextButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->NextButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NextButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NextButton->ForeColor = System::Drawing::Color::White;
			this->NextButton->Location = System::Drawing::Point(25, 333);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(169, 77);
			this->NextButton->TabIndex = 5;
			this->NextButton->Text = L"Next";
			this->NextButton->UseVisualStyleBackColor = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(535, 290);
			this->listBox1->TabIndex = 0;
			// 
			// DeleteCategoryButton
			// 
			this->DeleteCategoryButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->DeleteCategoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteCategoryButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteCategoryButton->ForeColor = System::Drawing::Color::White;
			this->DeleteCategoryButton->Location = System::Drawing::Point(714, 69);
			this->DeleteCategoryButton->Name = L"DeleteCategoryButton";
			this->DeleteCategoryButton->Size = System::Drawing::Size(25, 25);
			this->DeleteCategoryButton->TabIndex = 6;
			this->DeleteCategoryButton->Text = L"-";
			this->DeleteCategoryButton->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(683, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 25);
			this->button1->TabIndex = 7;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(0, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 25);
			this->button2->TabIndex = 8;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(21, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 25);
			this->button3->TabIndex = 9;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// BackButton
			// 
			this->BackButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->BackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BackButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackButton->ForeColor = System::Drawing::Color::White;
			this->BackButton->Location = System::Drawing::Point(627, 8);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(116, 51);
			this->BackButton->TabIndex = 15;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = false;
			// 
			// QuizControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DeleteCategoryButton);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->ExportButton);
			this->Controls->Add(this->ImportButton);
			this->Controls->Add(this->Category);
			this->Controls->Add(this->QuizLabel);
			this->Name = L"QuizControl";
			this->Size = System::Drawing::Size(754, 490);
			this->Category->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
