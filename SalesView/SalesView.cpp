#include "pch.h"
#include "SalesMainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	SalesView::SalesMainForm form;
	Application::Run(% form);
	return 0;
}
