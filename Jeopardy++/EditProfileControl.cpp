#include "EditProfileControl.h"

System::Void Jeopardy::EditProfileControl::BackButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	ProfilesControl^ pfcontrol = gcnew ProfilesControl();
	pfcontrol->Left = 0;
	pfcontrol->Top = 0;
	this->Controls->Clear();
	this->Controls->Add(pfcontrol);
}

System::Void Jeopardy::EditProfileControl::UpdateButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	std::string name = marshal_as<std::string>(NameBox->Text);
	std::string id = marshal_as<std::string>(IDBox->Text);
	std::string address = marshal_as<std::string>(AddressBox->Text);
	std::string email = marshal_as<std::string>(EmailBox->Text);
	std::string phone = marshal_as<std::string>(PhoneBox->Text);

	// save to file
	std::ofstream file("profile.bin");

	file << name.c_str() << std::endl;
	file << id.c_str() << std::endl;
	file << address.c_str() << std::endl;
	file << email.c_str() << std::endl;
	file << phone.c_str() << std::endl;

	// go back to profiles page
	ProfilesControl^ pfcontrol = gcnew ProfilesControl();
	pfcontrol->Left = 0;
	pfcontrol->Top = 0;
	this->Controls->Clear();
	this->Controls->Add(pfcontrol);
}
