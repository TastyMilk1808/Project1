#include <Windows.h>
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Threading;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(% form);
}

Project1::MyForm::MyForm(void)
{
	InitializeComponent();
}

System::Void Project1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = "Hello, world";
	return System::Void();
}

System::Void Project1::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	tProgressBar1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &Project1::MyForm::hello));
	tProgressBar1->Start("progressBar1");
	return System::Void();
}

System::Void Project1::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	tProgressBar2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &Project1::MyForm::hello));
	tProgressBar2->Start("progressBar2");
	return System::Void();
}
