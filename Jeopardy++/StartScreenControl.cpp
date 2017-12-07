#include "StartScreenControl.h"

System::Void Jeopardy::StartScreenControl::ProfilesButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
		ProfilesControl ^pfcontrol = gcnew ProfilesControl();
		pfcontrol->Left = 0;
		pfcontrol->Top = 0;
		this->Controls->Clear();
		this->Controls->Add(pfcontrol);
}

System::Void Jeopardy::StartScreenControl::ExitButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	// TODO AUTOSAVE
	Application::Exit();
}