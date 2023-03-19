#include "pch.h"
#include "LoginForm.h"
#include "SalesMainForm.h"

/*
System::Void SalesView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
    Employee^ emp = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (emp != nullptr) {
		MessageBox::Show("Bienvenido " + emp->Name);
		SalesMainForm::employee = emp;
		
		if (emp->GetType() == Salesman::typeid) {
			SalesMainForm::employee = (Salesman^)emp;
		}
		else if (emp->GetType() == Supervisor::typeid) {
			SalesMainForm::employee = (Supervisor^)emp;
		}
		else if (emp->GetType() == StoreManager::typeid) {
			SalesMainForm::employee = (StoreManager^)emp;
		}
		
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
}
*/

System::Void SalesView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
		Employee^ emp = Controller::Login(txtUsername->Text, txtPassword->Text);
		if (emp != nullptr) {
			MessageBox::Show("Bienvenido " + emp->Name + " " + emp->LastName);
			SalesMainForm::employee = emp;
			this->Close();
		}
		else {
			MessageBox::Show("Usuario y contraseña incorrectos.");
		}
}
