#include <Windows.h>
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

void Project1::MyForm::hello(Object^ pBar)
{
	if (pBar == "progressBar2")
	{
		for (int i = 1; i < 101; i++)
		{
			progressBar2->Value = i;
			Sleep(100);
		}
	}
	else if (pBar == "progressBar1")
	{
		for (int i = 1; i < 101; i++)
		{
			progressBar1->Value = i;
			Sleep(100);
		}
	}
}
