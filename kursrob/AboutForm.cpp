#include "MyForm.h"
#include "AboutForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void loadAbout() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kursrob::AboutForm aboutForm;
	Application::Run(% aboutForm);
}