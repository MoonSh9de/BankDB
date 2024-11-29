#include "MainPage.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	KursSDB::MainPage form;
	Application::Run(% form);
}

