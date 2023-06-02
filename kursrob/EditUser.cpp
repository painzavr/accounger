#include "EditUser.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void loadEdit() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kursrob::EditUser editUser;
	Application::Run(% editUser);
}