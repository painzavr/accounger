#pragma once
#include <Windows.h>
#include <iostream>
#pragma comment(lib, "Netapi32.lib")
#include <stdio.h>
#include <assert.h>
#include <windows.h> 
#include <lm.h>
#include <string>
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
	/// Сводка для CreateUser
	/// </summary>


	public ref class CreateUser : public System::Windows::Forms::Form
	{

	public:
		CreateUser(void)
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
		~CreateUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ usrnm;
	private: System::Windows::Forms::TextBox^ pswrd;
	private: System::Windows::Forms::TextBox^ flnm;
	private: System::Windows::Forms::TextBox^ dscrptn;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	public: String^ storage;
	private: System::Windows::Forms::Label^ erCode;
	public:

	public:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateUser::typeid));
			this->usrnm = (gcnew System::Windows::Forms::TextBox());
			this->pswrd = (gcnew System::Windows::Forms::TextBox());
			this->flnm = (gcnew System::Windows::Forms::TextBox());
			this->dscrptn = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->erCode = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// usrnm
			// 
			this->usrnm->Location = System::Drawing::Point(6, 19);
			this->usrnm->Name = L"usrnm";
			this->usrnm->Size = System::Drawing::Size(100, 20);
			this->usrnm->TabIndex = 0;
			// 
			// pswrd
			// 
			this->pswrd->Location = System::Drawing::Point(6, 45);
			this->pswrd->Name = L"pswrd";
			this->pswrd->Size = System::Drawing::Size(100, 20);
			this->pswrd->TabIndex = 1;
			// 
			// flnm
			// 
			this->flnm->Location = System::Drawing::Point(6, 71);
			this->flnm->Name = L"flnm";
			this->flnm->Size = System::Drawing::Size(100, 20);
			this->flnm->TabIndex = 2;
			// 
			// dscrptn
			// 
			this->dscrptn->Location = System::Drawing::Point(6, 97);
			this->dscrptn->Name = L"dscrptn";
			this->dscrptn->Size = System::Drawing::Size(100, 20);
			this->dscrptn->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(232, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 136);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Підтвердити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateUser::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Ім\'я";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(112, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Повне ім\'я";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(112, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Опис";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->usrnm);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->pswrd);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->flnm);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->dscrptn);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(202, 136);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Поля для заповнення";
			// 
			// erCode
			// 
			this->erCode->AutoSize = true;
			this->erCode->Location = System::Drawing::Point(12, 151);
			this->erCode->Name = L"erCode";
			this->erCode->Size = System::Drawing::Size(29, 13);
			this->erCode->TabIndex = 11;
			this->erCode->Text = L"Error";
			this->erCode->Visible = false;
			// 
			// CreateUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 190);
			this->Controls->Add(this->erCode);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreateUser";
			this->Text = L"Створити запис";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		UserService^ userService = gcnew UserService();
		erCode->Text =userService->create(usrnm->Text, pswrd->Text, flnm->Text, dscrptn->Text);
		erCode->Visible = true;
		
		
	}

};
}

