#pragma once

#include "ProfilesControl.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Jeopardy {

	/// <summary>
	/// Summary for CreateProfileControl
	/// </summary>
	public ref class CreateProfileControl : public System::Windows::Forms::UserControl
	{
	public:
		CreateProfileControl(void)
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
		~CreateProfileControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  ProfilesLabel;
	private: System::Windows::Forms::TextBox^  NameBox;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  IDBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  PhoneBox;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  AddressBox;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  EmailBox;

	private: System::Windows::Forms::Button^  CreateButton;
	private: System::Windows::Forms::Button^  BackButton;

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
			this->ProfilesLabel = (gcnew System::Windows::Forms::Label());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PhoneBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AddressBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->EmailBox = (gcnew System::Windows::Forms::TextBox());
			this->CreateButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ProfilesLabel
			// 
			this->ProfilesLabel->AutoSize = true;
			this->ProfilesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProfilesLabel->ForeColor = System::Drawing::Color::White;
			this->ProfilesLabel->Location = System::Drawing::Point(18, 20);
			this->ProfilesLabel->Name = L"ProfilesLabel";
			this->ProfilesLabel->Size = System::Drawing::Size(225, 39);
			this->ProfilesLabel->TabIndex = 1;
			this->ProfilesLabel->Text = L"Create Profile";
			// 
			// NameBox
			// 
			this->NameBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->NameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameBox->ForeColor = System::Drawing::Color::White;
			this->NameBox->Location = System::Drawing::Point(231, 95);
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(287, 26);
			this->NameBox->TabIndex = 2;
			this->NameBox->TextChanged += gcnew System::EventHandler(this, &CreateProfileControl::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(111, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(155, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ID";
			// 
			// IDBox
			// 
			this->IDBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->IDBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDBox->ForeColor = System::Drawing::Color::White;
			this->IDBox->Location = System::Drawing::Point(231, 151);
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(287, 26);
			this->IDBox->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(112, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 31);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Phone";
			// 
			// PhoneBox
			// 
			this->PhoneBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->PhoneBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PhoneBox->ForeColor = System::Drawing::Color::White;
			this->PhoneBox->Location = System::Drawing::Point(231, 291);
			this->PhoneBox->Name = L"PhoneBox";
			this->PhoneBox->Size = System::Drawing::Size(287, 26);
			this->PhoneBox->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(112, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 31);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Address";
			// 
			// AddressBox
			// 
			this->AddressBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->AddressBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddressBox->ForeColor = System::Drawing::Color::White;
			this->AddressBox->Location = System::Drawing::Point(231, 224);
			this->AddressBox->Name = L"AddressBox";
			this->AddressBox->Size = System::Drawing::Size(287, 26);
			this->AddressBox->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(116, 349);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 31);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Email";
			// 
			// EmailBox
			// 
			this->EmailBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->EmailBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailBox->ForeColor = System::Drawing::Color::White;
			this->EmailBox->Location = System::Drawing::Point(231, 356);
			this->EmailBox->Name = L"EmailBox";
			this->EmailBox->Size = System::Drawing::Size(287, 26);
			this->EmailBox->TabIndex = 10;
			// 
			// CreateButton
			// 
			this->CreateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->CreateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CreateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateButton->ForeColor = System::Drawing::Color::White;
			this->CreateButton->Location = System::Drawing::Point(263, 408);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(229, 53);
			this->CreateButton->TabIndex = 12;
			this->CreateButton->Text = L"Create";
			this->CreateButton->UseVisualStyleBackColor = false;
			// 
			// BackButton
			// 
			this->BackButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->BackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BackButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackButton->ForeColor = System::Drawing::Color::White;
			this->BackButton->Location = System::Drawing::Point(613, 20);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(116, 51);
			this->BackButton->TabIndex = 13;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = false;
			this->BackButton->Click += gcnew System::EventHandler(this, &CreateProfileControl::BackButton_Click);
			// 
			// CreateProfileControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->CreateButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->EmailBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PhoneBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->AddressBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->IDBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->ProfilesLabel);
			this->Name = L"CreateProfileControl";
			this->Size = System::Drawing::Size(754, 490);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void BackButton_Click(System::Object^  sender, System::EventArgs^  e) {
	ProfilesControl^ pfcontrol = gcnew ProfilesControl();
	pfcontrol->Left = 0;
	pfcontrol->Top = 0;
	this->Controls->Clear();
	this->Controls->Add(pfcontrol);
}
};
}
