#include "DeleteUser.h"
#include "MyForm.h"
#include "AboutForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void loadDelete() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kursrob::DeleteUser deleteUser;
	Application::Run(% deleteUser);
}