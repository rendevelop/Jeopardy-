#include "CreateProfileControl.h"

System::Void Jeopardy::CreateProfileControl::BackButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	ProfilesControl^ pfcontrol = gcnew ProfilesControl();
	pfcontrol->Left = 0;
	pfcontrol->Top = 0;
	this->Controls->Clear();
	this->Controls->Add(pfcontrol);
}
