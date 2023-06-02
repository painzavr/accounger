#pragma once
#include "AboutForm.h"
#include "CreateUser.h"
#include "DeleteUser.h"
#include "EditUser.h"
#include <tchar.h>
#include <Windows.h>
#include "UserService.h"


namespace kursrob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();

			populateAccounts();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ create;
	private: System::Windows::Forms::ToolStripButton^ edit;
	private: System::Windows::Forms::ToolStripButton^ deleteBut;
	public: String^ logos;
	private: System::Windows::Forms::ToolStripButton^ refresh;
	private: System::Windows::Forms::ListView^ userList;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ progLabel;
	private: System::Windows::Forms::ToolStripProgressBar^ progBar;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createAccountToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ editAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updateListToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createAccountToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->create = (gcnew System::Windows::Forms::ToolStripButton());
			this->edit = (gcnew System::Windows::Forms::ToolStripButton());
			this->deleteBut = (gcnew System::Windows::Forms::ToolStripButton());
			this->refresh = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->userList = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->progLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->progBar = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->менюToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(478, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(93, 22);
			this->exitToolStripMenuItem->Text = L"Вийти";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->createAccountToolStripMenuItem1,
					this->editAccountToolStripMenuItem, this->deleteAccountToolStripMenuItem, this->updateListToolStripMenuItem
			});
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->проПрограмуToolStripMenuItem->Text = L"Інструменти";
			// 
			// createAccountToolStripMenuItem1
			// 
			this->createAccountToolStripMenuItem1->Name = L"createAccountToolStripMenuItem1";
			this->createAccountToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->createAccountToolStripMenuItem1->Text = L"Створити запис";
			this->createAccountToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::create_Click);
			// 
			// editAccountToolStripMenuItem
			// 
			this->editAccountToolStripMenuItem->Name = L"editAccountToolStripMenuItem";
			this->editAccountToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->editAccountToolStripMenuItem->Text = L"Редагувати запис";
			this->editAccountToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::edit_Click);
			// 
			// deleteAccountToolStripMenuItem
			// 
			this->deleteAccountToolStripMenuItem->Name = L"deleteAccountToolStripMenuItem";
			this->deleteAccountToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->deleteAccountToolStripMenuItem->Text = L"Видалити запис";
			this->deleteAccountToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteBut_Click);
			// 
			// updateListToolStripMenuItem
			// 
			this->updateListToolStripMenuItem->Name = L"updateListToolStripMenuItem";
			this->updateListToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->updateListToolStripMenuItem->Text = L"Оновити список";
			this->updateListToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::refresh_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutProgramToolStripMenuItem });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"Про програму";
			// 
			// aboutProgramToolStripMenuItem
			// 
			this->aboutProgramToolStripMenuItem->Name = L"aboutProgramToolStripMenuItem";
			this->aboutProgramToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->aboutProgramToolStripMenuItem->Text = L"Про програму";
			this->aboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutProgramToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->create, this->edit,
					this->deleteBut, this->refresh, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(478, 40);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// create
			// 
			this->create->AutoSize = false;
			this->create->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->create->ForeColor = System::Drawing::SystemColors::Control;
			this->create->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"create.Image")));
			this->create->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->create->Margin = System::Windows::Forms::Padding(0);
			this->create->MergeAction = System::Windows::Forms::MergeAction::Remove;
			this->create->MergeIndex = 0;
			this->create->Name = L"create";
			this->create->Overflow = System::Windows::Forms::ToolStripItemOverflow::Never;
			this->create->Size = System::Drawing::Size(40, 40);
			this->create->Text = L"Create";
			this->create->Click += gcnew System::EventHandler(this, &MyForm::create_Click);
			// 
			// edit
			// 
			this->edit->AutoSize = false;
			this->edit->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit.Image")));
			this->edit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->edit->Margin = System::Windows::Forms::Padding(0);
			this->edit->MergeIndex = 0;
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(40, 40);
			this->edit->Text = L"Edit";
			this->edit->Click += gcnew System::EventHandler(this, &MyForm::edit_Click);
			// 
			// deleteBut
			// 
			this->deleteBut->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->deleteBut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deleteBut.Image")));
			this->deleteBut->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->deleteBut->Margin = System::Windows::Forms::Padding(0);
			this->deleteBut->MergeIndex = 0;
			this->deleteBut->Name = L"deleteBut";
			this->deleteBut->Size = System::Drawing::Size(23, 40);
			this->deleteBut->Text = L"Delete";
			this->deleteBut->Click += gcnew System::EventHandler(this, &MyForm::deleteBut_Click);
			// 
			// refresh
			// 
			this->refresh->AutoSize = false;
			this->refresh->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refresh.Image")));
			this->refresh->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->refresh->Margin = System::Windows::Forms::Padding(0);
			this->refresh->MergeIndex = 0;
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(40, 40);
			this->refresh->Text = L"Refresh";
			this->refresh->Click += gcnew System::EventHandler(this, &MyForm::refresh_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 37);
			this->toolStripButton1->Text = L"Вийти";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// userList
			// 
			this->userList->AllowColumnReorder = true;
			this->userList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->userList->GridLines = true;
			this->userList->HideSelection = false;
			this->userList->Location = System::Drawing::Point(12, 67);
			this->userList->Name = L"userList";
			this->userList->Size = System::Drawing::Size(454, 235);
			this->userList->TabIndex = 4;
			this->userList->UseCompatibleStateImageBehavior = false;
			this->userList->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Ім'я";
			this->columnHeader1->Width = 120;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Опис";
			this->columnHeader2->Width = 180;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Локальна група";
			this->columnHeader3->Width = 130;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->progLabel, this->progBar });
			this->statusStrip1->Location = System::Drawing::Point(0, 305);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(478, 22);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			this->statusStrip1->DoubleClick += gcnew System::EventHandler(this, &MyForm::statusStrip1_DoubleClick);
			// 
			// progLabel
			// 
			this->progLabel->Name = L"progLabel";
			this->progLabel->Size = System::Drawing::Size(52, 17);
			this->progLabel->Text = L"Статус";
			// 
			// progBar
			// 
			this->progBar->Name = L"progBar";
			this->progBar->Size = System::Drawing::Size(100, 16);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 327);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->userList);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Accounger";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	public: System::Void populateAccounts() {

		LPUSER_INFO_0 pBuf = NULL;
		LPUSER_INFO_1 pUserInfo = NULL;
		LPLOCALGROUP_USERS_INFO_0 pLocalGroupInfo = NULL;
		DWORD dwLevel = 0;
		DWORD dwPrefMaxLen = MAX_PREFERRED_LENGTH;
		DWORD dwEntriesRead = 0;
		DWORD dwTotalEntries = 0;
		DWORD dwResumeHandle = 0;
		DWORD i, j;
		NET_API_STATUS nStatus;

		do {
			nStatus = NetUserEnum(NULL, dwLevel, FILTER_NORMAL_ACCOUNT, (LPBYTE*)&pBuf, dwPrefMaxLen, &dwEntriesRead, &dwTotalEntries, &dwResumeHandle);

			if ((nStatus == NERR_Success) || (nStatus == ERROR_MORE_DATA))
			{
				if ((pBuf) != NULL) {
					for (i = 0; (i < dwEntriesRead); i++) {
						nStatus = NetUserGetInfo(NULL, pBuf[i].usri0_name, 1, (LPBYTE*)&pUserInfo);
						if (nStatus == NERR_Success) {
							// Retrieve the local group information for the user
							DWORD dwLocalGroupRead = 0;
							DWORD dwTotalLocalGroup = 0;
							nStatus = NetUserGetLocalGroups(NULL, pBuf[i].usri0_name, 0, LG_INCLUDE_INDIRECT, (LPBYTE*)&pLocalGroupInfo, MAX_PREFERRED_LENGTH, &dwLocalGroupRead, &dwTotalLocalGroup);
							if (nStatus == NERR_Success) {
								String^ localGroup = "";
								for (j = 0; j < dwLocalGroupRead; j++) {
									localGroup += gcnew String(pLocalGroupInfo[j].lgrui0_name) + " ";
								}
								ListViewItem^ item = gcnew ListViewItem(gcnew String(pBuf[i].usri0_name));
								item->SubItems->Add(gcnew String(pUserInfo->usri1_comment));
								item->SubItems->Add(localGroup);
								userList->Items->Add(item);

							}
						}
					}
				}
			}
			else
				break;
			if (pBuf != NULL) {
				NetApiBufferFree(pBuf);
				pBuf = NULL;
			}
			if (pUserInfo != NULL) {
				NetApiBufferFree(pUserInfo);
				pUserInfo = NULL;
			}
			if (pLocalGroupInfo != NULL) {
				NetApiBufferFree(pLocalGroupInfo);
				pLocalGroupInfo = NULL;
			}
		} while (nStatus == ERROR_MORE_DATA);
		if (pBuf != NULL)
			NetApiBufferFree(pBuf);
		/*ListViewItem^ item = gcnew ListViewItem(gcnew String("Користувач1"));
		item->SubItems->Add(gcnew String("Адміністративний користувацький аккаунт"));
		item->SubItems->Add(gcnew String("Адміністрастор"));
		userList->Items->Add(item);
		ListViewItem^ item1 = gcnew ListViewItem(gcnew String("Користувач2"));
		item1->SubItems->Add(gcnew String("Базовий користувацький аккаунт"));
		item1->SubItems->Add(gcnew String("Учасник"));
		userList->Items->Add(item1);
		ListViewItem^ item2 = gcnew ListViewItem(gcnew String("Користувач3"));
		item2->SubItems->Add(gcnew String("Базовий користувацький аккаунт"));
		item2->SubItems->Add(gcnew String("Учасник"));
		userList->Items->Add(item2);
		ListViewItem^ item3 = gcnew ListViewItem(gcnew String("Андрій"));
		item3->SubItems->Add(gcnew String("Базовий користувацький аккаунт"));
		item3->SubItems->Add(gcnew String("Учасник"));
		userList->Items->Add(item3);
		ListViewItem^ item4 = gcnew ListViewItem(gcnew String("Комп'ютер"));
		item4->SubItems->Add(gcnew String("Базовий користувацький аккаунт"));
		item4->SubItems->Add(gcnew String("Учасник"));
		userList->Items->Add(item4);
		ListViewItem^ item5 = gcnew ListViewItem(gcnew String("ЗамовчАккаунт"));
		item5->SubItems->Add(gcnew String("Системний обліковий запис"));
		item5->SubItems->Add(gcnew String("Адміністратор"));
		userList->Items->Add(item5);*/
	}

	private: System::Void update() {
		for (int i = 0; i <= 100; i++)
			this->progBar->Value = i;
		this->progLabel->Text = L"Оновлення";
		userList->Items->Clear();
		populateAccounts();
	}

	private: System::Void create_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateUser^ createUser = gcnew CreateUser();
		progLabel->Text = "Створення запису";
		createUser->ShowDialog();
	}

	private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
		EditUser^ editUser = gcnew EditUser();
		progLabel->Text = "Редагування запису";
		editUser->ShowDialog();
	}
	private: System::Void deleteBut_Click(System::Object^ sender, System::EventArgs^ e) {
		DeleteUser^ deleteUser = gcnew DeleteUser();
		progLabel->Text = "Видалення запису";
		deleteUser->ShowDialog();
	}
	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		update();
	}
	private: System::Void aboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AboutForm^ aboutForm = gcnew AboutForm();
		progLabel->Text = "Вікно Про програму";
		aboutForm->ShowDialog();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void statusStrip1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = false;
}
};
}
