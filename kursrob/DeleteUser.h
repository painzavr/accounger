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
	/// Сводка для DeleteUser
	/// </summary>
	public ref class DeleteUser : public System::Windows::Forms::Form
	{
	public:
		DeleteUser(void)
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
		~DeleteUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ userdel;
	protected:

	private: System::Windows::Forms::Button^ dltusr;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ erCode;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteUser::typeid));
			this->userdel = (gcnew System::Windows::Forms::TextBox());
			this->dltusr = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->erCode = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// userdel
			// 
			this->userdel->Location = System::Drawing::Point(6, 19);
			this->userdel->Name = L"userdel";
			this->userdel->Size = System::Drawing::Size(100, 20);
			this->userdel->TabIndex = 0;
			// 
			// dltusr
			// 
			this->dltusr->Location = System::Drawing::Point(18, 99);
			this->dltusr->Name = L"dltusr";
			this->dltusr->Size = System::Drawing::Size(197, 30);
			this->dltusr->TabIndex = 1;
			this->dltusr->Text = L"Підтвердити";
			this->dltusr->UseVisualStyleBackColor = true;
			this->dltusr->Click += gcnew System::EventHandler(this, &DeleteUser::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->userdel);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(203, 60);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Заповніть поле для видалення";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(133, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ім\'я";
			// 
			// erCode
			// 
			this->erCode->AutoSize = true;
			this->erCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->erCode->Location = System::Drawing::Point(13, 79);
			this->erCode->Name = L"erCode";
			this->erCode->Size = System::Drawing::Size(35, 13);
			this->erCode->TabIndex = 3;
			this->erCode->Text = L"label2";
			this->erCode->Visible = false;
			// 
			// DeleteUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(227, 141);
			this->Controls->Add(this->erCode);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dltusr);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DeleteUser";
			this->Text = L"Видалити запис";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UserService^ userService = gcnew UserService();
		erCode->Text = userService->deleteUser(userdel->Text);
		erCode->Visible = true;
	}

};
}
