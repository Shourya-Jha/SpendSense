#include "../include/Search.h"
#include <iostream>
using namespace std;
void Search::searchByID(Expense expense)
{
    int id;
    cout << "Enter Expense ID: ";
    cin >> id;
    if(expense.expenseID == id)
    {
        cout << "\nExpense Found!\n";
        expense.displayExpense();
    }
    else
    {
        cout << "\nExpense Not Found!\n";
    }
}
void Search::searchByCategory(Expense expense)
{
    string category;
    cin.ignore();
    cout << "Enter Category: ";
    getline(cin, category);
    if(expense.category == category)
    {
        cout << "\nExpense Found!\n";
        expense.displayExpense();
    }
    else
    {
        cout << "\nExpense Not Found!\n";
    }
}