#include "MyForm.h"
#include "MyForm1.h"
#include "Windows.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Psu1::MyForm form;
	Application::Run(% form);
	Psu1::MyForm1 forms;
	Application::Run(% forms);
	return 0;
}
