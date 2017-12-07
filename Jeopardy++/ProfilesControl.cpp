#include "ProfilesControl.h"

System::Void Jeopardy::ProfilesControl::BackButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	StartScreenControl^ sscontrol = (gcnew StartScreenControl());
	sscontrol->Left = 0;
	sscontrol->Top = 0;
	this->Controls->Clear();
	this->Controls->Add(sscontrol);
}

System::Void Jeopardy::ProfilesControl::CreateButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	CreateProfileControl ^cpcontrol = gcnew CreateProfileControl();
	cpcontrol->Top = 0;
	cpcontrol->Left = 0;
	this->Controls->Clear();
	this->Controls->Add(cpcontrol);
}

System::Void Jeopardy::ProfilesControl::EditButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	EditProfileControl ^epcontrol = gcnew EditProfileControl();
	epcontrol->Top = 0;
	epcontrol->Left = 0;
	this->Controls->Clear();
	this->Controls->Add(epcontrol);
}
