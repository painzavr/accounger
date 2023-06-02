#include "MyForm.h"
#include "AboutForm.h"
#include <Windows.h>
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kursrob::MyForm myForm;
	Application::Run(% myForm);
}