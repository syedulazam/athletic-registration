
#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		Registration::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			//show the register form
			Registration::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {  
				continue;
			}
		}

			else {
				user = loginForm.user;
				break;
			}
		}

 

	if (user != nullptr) {
		Registration::MainForm mainForm(user);
		Application::Run(% mainForm);
	}

	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}
