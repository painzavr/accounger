#include "UserService.h"

UserService::UserService() {
}

UserService::~UserService() {
}
String^ UserService::editName(String^ oldname_, String^ newname_) {
    pin_ptr<const wchar_t> oldname = PtrToStringChars(oldname_);
    pin_ptr<const wchar_t> newname = PtrToStringChars(newname_);

    LPWSTR oldUserName = LPWSTR(oldname);
    LPWSTR newUserName = LPWSTR(newname);

    // Modify the account
    USER_INFO_2 userInfo;
    userInfo.usri2_name = newUserName;

    NET_API_STATUS status = NetUserSetInfo(NULL, oldUserName, 0, (BYTE*)&userInfo, NULL);

    // Check the status of the operation
    if (status == NERR_Success) {
        return L"User account name and full name modified successfully.\n";
    }
    else {
        return L"Failed to modify user account name and full name. Error code: " +status;
    }
}
String^ UserService::create(String^ usrnm, String^ pswrd, String^ flnm, String^ dscrptn) {
    String^ storage;
    msclr::interop::marshal_context conv;
    std::wstring username = conv.marshal_as<std::wstring>(usrnm);
    std::wstring password = conv.marshal_as<std::wstring>(pswrd);
    std::wstring fullname = conv.marshal_as<std::wstring>(flnm);
    std::wstring description = conv.marshal_as<std::wstring>(dscrptn);

    // Create a USER_INFO_1 structure to hold the account information
    USER_INFO_1 userInfo;
    ZeroMemory(&userInfo, sizeof(USER_INFO_1));
    userInfo.usri1_name = const_cast<LPWSTR>(username.c_str());
    userInfo.usri1_password = const_cast<LPWSTR>(password.c_str());
    userInfo.usri1_priv = USER_PRIV_USER;
    userInfo.usri1_comment = const_cast<LPWSTR>(description.c_str());

    // Call the NetUserAdd function to create the new user account
    DWORD result = NetUserAdd(NULL, 1, reinterpret_cast<LPBYTE>(&userInfo), NULL);
    if (result == NERR_Success) {
      storage= "Successfully created new user account\n";
      return storage;
    }
    else {
      storage= "Failed to create new user account. Error code: " + result + "\n";
      return storage;
    }
}
String^ UserService::editPass(String^ name, String^ passwrd, String^ newpasswrd) {
    pin_ptr<const wchar_t> oldpassword = PtrToStringChars(passwrd);
    pin_ptr<const wchar_t> newpassword = PtrToStringChars(newpasswrd);
    pin_ptr<const wchar_t> username = PtrToStringChars(name);

    LPWSTR accountName = (LPWSTR)username;
    LPWSTR oldPassword = (LPWSTR)oldpassword;
    LPWSTR newPassword = (LPWSTR)newpassword;

    // Change the password
    NET_API_STATUS status = NetUserChangePassword(NULL, accountName, oldPassword, newPassword);

    // Check the status of the operation
    if (status == NERR_Success) {
        return L"User password changed successfully.\n";
    }
    else {
        return L"Failed to change user password. Error code:" + status;
    }
}
    String^ UserService::editLocalGroup(String ^ name, bool admin) {
        pin_ptr<const wchar_t> username = PtrToStringChars(name);
        LPWSTR accountName = (LPWSTR)username;

        // Make the account an administrator
        LOCALGROUP_MEMBERS_INFO_3 memberInfo;
        memberInfo.lgrmi3_domainandname = accountName;
        if (admin) {
            // Add the account to the Administrators group
            LOCALGROUP_MEMBERS_INFO_3 memberInfo;
            memberInfo.lgrmi3_domainandname = accountName;
            NET_API_STATUS status = NetLocalGroupAddMembers(NULL, L"Администраторы", 3, (BYTE*)&memberInfo, 1);

            // Check the status of the operation
            if (status == NERR_Success) {
                return L"Transfered successfully.\n";
            }
            else {
                return L"Failed to make transfer. Error code: "+ status;
            }
        }
        else {
            // Make the account a simple member
            LOCALGROUP_MEMBERS_INFO_3 memberInfo;
            memberInfo.lgrmi3_domainandname = accountName;
            NET_API_STATUS status = NetLocalGroupDelMembers(NULL, L"Администраторы", 3, (BYTE*)&memberInfo, 1);
            // Check the status of the operation
            if (status == NERR_Success) {
                return L"Transfered successfully.\n";
            }
            else {
                return L"Failed to make transfer. Error code: " + status;
            }
        }
    }
    String^ UserService::deleteUser(String^ name) {
        pin_ptr<const wchar_t> wch = PtrToStringChars(name);
        LPWSTR accountName = (LPWSTR)wch;
        NET_API_STATUS status = NetUserDel(NULL, accountName);

        // Check the status of the operation
        if (status == NERR_Success) {
            return L"User account deleted successfully.\n";
        }
        else {
            return L"Failed to delete. Error code: "+ status;
        }
    }

