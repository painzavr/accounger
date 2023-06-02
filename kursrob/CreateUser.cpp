#include "CreateUser.h"
#include "MyForm.h"
#include "AboutForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void loadCreate() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kursrob::CreateUser createUser;
	Application::Run(% createUser);

}

