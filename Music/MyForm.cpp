#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Music::MyForm1 f;
	//CppWinForm4::MyForm form;
	Application::Run(%f);
};