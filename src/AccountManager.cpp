#include "../include/AccountManager.h"
#include <iostream>

using namespace std;

bool AccountManager::login(User user)
{
    string enteredUsername;
    string enteredPassword;

    cin.ignore();

    cout << "Enter Username: ";
    getline(cin, enteredUsername);

    cout << "Enter Password: ";
    getline(cin, enteredPassword);

    if(user.username == enteredUsername && user.password == enteredPassword)
    {
        cout << "\nLogin Successful!\n";
        return true;
    }

    cout << "\nInvalid Username or Password!\n";
    return false;
}

void AccountManager::changePassword(User &user)
{
    cin.ignore();

    cout << "Enter New Password: ";
    getline(cin, user.password);

    cout << "\nPassword Changed Successfully!\n";
}
