#include "../include/Expense.h"
#include <iostream>

using namespace std;

void Expense::addExpense()
{
    cout << "Enter Expense ID: ";
    cin >> expenseID;

    cout << "Enter Amount: ";
    cin >> amount;

    cin.ignore();

    cout << "Enter Date: ";
    getline(cin, date);

    cout << "Enter Category: ";
    getline(cin, category);

    cout << "Enter Description: ";
    getline(cin, description);

    cout << "Enter Payment Method: ";
    getline(cin, paymentMethod);

    cout << "\nExpense Added Successfully!\n";
}

void Expense::displayExpense()
{
    cout << "\nExpense ID: " << expenseID << endl;
    cout << "Amount: " << amount << endl;
    cout << "Date: " << date << endl;
    cout << "Category: " << category << endl;
    cout << "Description: " << description << endl;
    cout << "Payment Method: " << paymentMethod << endl;
}

void Expense::editExpense()
{
    cout << "\nEnter New Amount: ";
    cin >> amount;

    cin.ignore();

    cout << "Enter New Category: ";
    getline(cin, category);

    cout << "Enter New Description: ";
    getline(cin, description);

    cout << "Enter New Payment Method: ";
    getline(cin, paymentMethod);

    cout << "\nExpense Updated Successfully!\n";
}

void Expense::deleteExpense()
{
    expenseID = 0;
    amount = 0;

    cout << "\nExpense Deleted Successfully!\n";
}