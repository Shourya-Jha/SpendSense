#include "../include/Budget.h"
#include <iostream>

using namespace std;

void Budget::setBudget()
{
    cout << "Enter Monthly Budget: ";
    cin >> monthlyBudget;

    cout << "\nBudget Set Successfully!\n";
}

void Budget::addExpense()
{
    double amount;

    cout << "Enter Expense Amount: ";
    cin >> amount;

    totalSpent += amount;

    cout << "\nExpense Added Successfully!\n";
}

void Budget::displayBudget()
{
    cout << "\nMonthly Budget : " << monthlyBudget << endl;
    cout << "Total Spent    : " << totalSpent << endl;
    cout << "Remaining      : " << monthlyBudget - totalSpent << endl;

    if(totalSpent > monthlyBudget)
    {
        cout << "Status         : Budget Exceeded!" << endl;
    }
    else
    {
        cout << "Status         : Budget Under Control" << endl;
    }
}

void Budget::resetBudget()
{
    monthlyBudget = 0;
    totalSpent = 0;

    cout << "\nBudget Reset Successfully!\n";
}
