#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	tictac::MyForm form1;
	Application::Run(% form1);
}