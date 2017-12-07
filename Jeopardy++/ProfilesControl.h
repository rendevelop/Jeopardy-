#pragma once


#include "StartScreenControl.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Jeopardy {

	/// <summary>
	/// Summary for ProfilesControl
	/// </summary>
	public ref class ProfilesControl : public System::Windows::Forms::UserControl
	{
	public:
		ProfilesControl(void)
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
		~ProfilesControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  ProfilesLabel;
	private: System::Windows::Forms::Button^  CreateButton;
	private: System::Windows::Forms::Button^  ImportButton;
	private: System::Windows::Forms::Button^  ExportButton;
	private: System::Windows::Forms::Button^  EditButton;
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
			this->CreateButton = (gcnew System::Windows::Forms::Button());
			this->ImportButton = (gcnew System::Windows::Forms::Button());
			this->ExportButton = (gcnew System::Windows::Forms::Button());
			this->EditButton = (gcnew System::Windows::Forms::Button());
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
			this->ProfilesLabel->Size = System::Drawing::Size(131, 39);
			this->ProfilesLabel->TabIndex = 0;
			this->ProfilesLabel->Text = L"Profiles";
			// 
			// CreateButton
			// 
			this->CreateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->CreateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CreateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateButton->ForeColor = System::Drawing::Color::White;
			this->CreateButton->Location = System::Drawing::Point(263, 125);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(229, 53);
			this->CreateButton->TabIndex = 2;
			this->CreateButton->Text = L"Create Profile";
			this->CreateButton->UseVisualStyleBackColor = false;
			// 
			// ImportButton
			// 
			this->ImportButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->ImportButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ImportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImportButton->ForeColor = System::Drawing::Color::White;
			this->ImportButton->Location = System::Drawing::Point(263, 286);
			this->ImportButton->Name = L"ImportButton";
			this->ImportButton->Size = System::Drawing::Size(229, 53);
			this->ImportButton->TabIndex = 3;
			this->ImportButton->Text = L"Import Profile";
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
			this->ExportButton->Location = System::Drawing::Point(263, 364);
			this->ExportButton->Name = L"ExportButton";
			this->ExportButton->Size = System::Drawing::Size(229, 53);
			this->ExportButton->TabIndex = 4;
			this->ExportButton->Text = L"Export Profile";
			this->ExportButton->UseVisualStyleBackColor = false;
			// 
			// EditButton
			// 
			this->EditButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->EditButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditButton->ForeColor = System::Drawing::Color::White;
			this->EditButton->Location = System::Drawing::Point(263, 204);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(229, 53);
			this->EditButton->TabIndex = 5;
			this->EditButton->Text = L"Edit Profile";
			this->EditButton->UseVisualStyleBackColor = false;
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
			this->BackButton->TabIndex = 14;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = false;
			this->BackButton->Click += gcnew System::EventHandler(this, &ProfilesControl::BackButton_Click);
			// 
			// ProfilesControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->EditButton);
			this->Controls->Add(this->ExportButton);
			this->Controls->Add(this->ImportButton);
			this->Controls->Add(this->CreateButton);
			this->Controls->Add(this->ProfilesLabel);
			this->Name = L"ProfilesControl";
			this->Size = System::Drawing::Size(754, 490);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BackButton_Click(System::Object^  sender, System::EventArgs^  e);
};
}
