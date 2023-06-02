#pragma once
#include <windows.h>
#include <lm.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#pragma comment(lib, "Netapi32.lib")
#pragma comment(lib, "netapi32.lib")
#include <msclr\marshal_cppstd.h>
#include "UserService.h"

namespace kursrob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EditUser
	/// </summary>
	public ref class EditUser : public System::Windows::Forms::Form
	{
	public:
		EditUser(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TextBox^ oldpass;
	private: System::Windows::Forms::TextBox^ newpass;
	private: System::Windows::Forms::TextBox^ olduser;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ memberRadio;
	private: System::Windows::Forms::RadioButton^ adminRadio;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ newuser;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ usernamepass;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ usernamegroup;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ erCode;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditUser::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->oldpass = (gcnew System::Windows::Forms::TextBox());
			this->newpass = (gcnew System::Windows::Forms::TextBox());
			this->olduser = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->memberRadio = (gcnew System::Windows::Forms::RadioButton());
			this->adminRadio = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->usernamegroup = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->newuser = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->usernamepass = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->erCode = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(45, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Ім\'я";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &EditUser::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(87, 19);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(64, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Пароль";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &EditUser::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(165, 19);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(55, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Група";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &EditUser::checkBox3_CheckedChanged);
			// 
			// oldpass
			// 
			this->oldpass->Location = System::Drawing::Point(6, 19);
			this->oldpass->Name = L"oldpass";
			this->oldpass->Size = System::Drawing::Size(100, 20);
			this->oldpass->TabIndex = 3;
			// 
			// newpass
			// 
			this->newpass->Location = System::Drawing::Point(6, 45);
			this->newpass->Name = L"newpass";
			this->newpass->Size = System::Drawing::Size(100, 20);
			this->newpass->TabIndex = 4;
			// 
			// olduser
			// 
			this->olduser->Location = System::Drawing::Point(6, 19);
			this->olduser->Name = L"olduser";
			this->olduser->Size = System::Drawing::Size(100, 20);
			this->olduser->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Нове ім\'я";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Старий пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(112, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Новий пароль";
			// 
			// memberRadio
			// 
			this->memberRadio->AutoSize = true;
			this->memberRadio->Location = System::Drawing::Point(6, 42);
			this->memberRadio->Name = L"memberRadio";
			this->memberRadio->Size = System::Drawing::Size(68, 17);
			this->memberRadio->TabIndex = 10;
			this->memberRadio->TabStop = true;
			this->memberRadio->Text = L"Учасник";
			this->memberRadio->UseVisualStyleBackColor = true;
			// 
			// adminRadio
			// 
			this->adminRadio->AutoSize = true;
			this->adminRadio->Location = System::Drawing::Point(6, 62);
			this->adminRadio->Name = L"adminRadio";
			this->adminRadio->Size = System::Drawing::Size(96, 17);
			this->adminRadio->TabIndex = 11;
			this->adminRadio->TabStop = true;
			this->adminRadio->Text = L"Адміністратор";
			this->adminRadio->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->usernamegroup);
			this->groupBox3->Controls->Add(this->memberRadio);
			this->groupBox3->Controls->Add(this->adminRadio);
			this->groupBox3->Location = System::Drawing::Point(12, 70);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(176, 98);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Встановити групу";
			this->groupBox3->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(113, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Ім\'я";
			// 
			// usernamegroup
			// 
			this->usernamegroup->Location = System::Drawing::Point(7, 16);
			this->usernamegroup->Name = L"usernamegroup";
			this->usernamegroup->Size = System::Drawing::Size(100, 20);
			this->usernamegroup->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(252, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 164);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Підтвердити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditUser::button1_Click);
			// 
			// newuser
			// 
			this->newuser->Location = System::Drawing::Point(6, 45);
			this->newuser->Name = L"newuser";
			this->newuser->Size = System::Drawing::Size(100, 20);
			this->newuser->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(112, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Старе ім\'я";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->olduser);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->newuser);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 70);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 78);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Змінити ім\'я";
			this->groupBox1->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->usernamepass);
			this->groupBox2->Controls->Add(this->oldpass);
			this->groupBox2->Controls->Add(this->newpass);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(12, 70);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(234, 106);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Змінити пароль";
			this->groupBox2->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(113, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Ім\'я";
			// 
			// usernamepass
			// 
			this->usernamepass->Location = System::Drawing::Point(7, 72);
			this->usernamepass->Name = L"usernamepass";
			this->usernamepass->Size = System::Drawing::Size(100, 20);
			this->usernamepass->TabIndex = 9;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox3);
			this->groupBox4->Controls->Add(this->checkBox2);
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Location = System::Drawing::Point(12, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(234, 52);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Оберіть поле для редагування";
			// 
			// erCode
			// 
			this->erCode->AutoSize = true;
			this->erCode->Location = System::Drawing::Point(12, 175);
			this->erCode->Name = L"erCode";
			this->erCode->Size = System::Drawing::Size(35, 13);
			this->erCode->TabIndex = 19;
			this->erCode->Text = L"label7";
			this->erCode->Visible = false;
			// 
			// EditUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(363, 207);
			this->Controls->Add(this->erCode);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditUser";
			this->Text = L"Редагувати запис";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			this->groupBox1->Visible = true;
		}
		else {
			this->groupBox1->Visible = false;
		}

	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox2->Checked) {
			this->groupBox2->Visible = true;
		}
		else {
			this->groupBox2->Visible = false;
		}
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox3->Checked) {
			this->groupBox3->Visible = true;
		}
		else {
			this->groupBox3->Visible = false;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UserService^ userService = gcnew UserService();
		if (this->checkBox1->Checked) {
			erCode->Text = userService->editName(olduser->Text, newuser->Text);
		}
		else if (this->checkBox2->Checked) {
			erCode->Text = userService->editPass(usernamepass->Text,oldpass->Text, newpass->Text);
		}
		else if (this->checkBox3->Checked) {
			erCode->Text = userService->editLocalGroup(usernamegroup->Text, adminRadio->Checked);
			
		}
		erCode->Visible = true;
	}

};
}
