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
	/// Summary for StartScreenControl
	/// </summary>
	public ref class StartScreenControl : public System::Windows::Forms::UserControl
	{
	public:
		StartScreenControl(void)
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
		~StartScreenControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  StartButton;
	private: System::Windows::Forms::Button^  ProfilesButton;
	private: System::Windows::Forms::Button^  ExitButton;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartScreenControl::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->ProfilesButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(754, 490);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// StartButton
			// 
			this->StartButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->StartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StartButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartButton->ForeColor = System::Drawing::Color::White;
			this->StartButton->Location = System::Drawing::Point(263, 209);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(229, 53);
			this->StartButton->TabIndex = 1;
			this->StartButton->Text = L"Start Game";
			this->StartButton->UseVisualStyleBackColor = false;
			this->StartButton->Click += gcnew System::EventHandler(this, &StartScreenControl::StartButton_Click);
			// 
			// ProfilesButton
			// 
			this->ProfilesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->ProfilesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ProfilesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProfilesButton->ForeColor = System::Drawing::Color::White;
			this->ProfilesButton->Location = System::Drawing::Point(244, 292);
			this->ProfilesButton->Name = L"ProfilesButton";
			this->ProfilesButton->Size = System::Drawing::Size(267, 53);
			this->ProfilesButton->TabIndex = 2;
			this->ProfilesButton->Text = L"Student Profiles";
			this->ProfilesButton->UseVisualStyleBackColor = false;
			this->ProfilesButton->Click += gcnew System::EventHandler(this, &StartScreenControl::ProfilesButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::Color::White;
			this->ExitButton->Location = System::Drawing::Point(291, 375);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(172, 53);
			this->ExitButton->TabIndex = 3;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &StartScreenControl::ExitButton_Click);
			// 
			// StartScreenControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->ProfilesButton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"StartScreenControl";
			this->Size = System::Drawing::Size(754, 490);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void ProfilesButton_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e);
};
}
