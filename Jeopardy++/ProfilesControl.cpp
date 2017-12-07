#include "ProfilesControl.h"

System::Void Jeopardy::ProfilesControl::BackButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	StartScreenControl^ sscontrol = (gcnew StartScreenControl());
	sscontrol->Left = 0;
	sscontrol->Top = 0;
	this->Controls->Clear();
	this->Controls->Add(sscontrol);
}
