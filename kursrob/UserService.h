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
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class UserService
{
private:
	String^ storage;
public:
	UserService();
	~UserService();
	String^ create(String^ usrnm, String^ pswrd, String^ flnm, String^ dscrptn);
	String^ editName(String^ oldname_, String^ newname_);
	String^ editPass(String^ name, String^ passwrd, String^ newpasswrd);
	String^ editLocalGroup(String^ name, bool admin);
	String^ deleteUser(String^ name);
};

