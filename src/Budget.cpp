#include "budget.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
Budget::Budget()
{
    monthlyBudget = 0.0;
    totalSpent = 0.0;
}

// Set the monthly budget
void Budget::setBudget(double amount)
{
    if (amount > 0)
        monthlyBudget = amount;
    else
        cout << "Invalid budget amount!" << endl;
}

// Increase the budget
void Budget::addBudget(double amount)
{
    if (amount > 0)
        monthlyBudget += amount;
    else
        cout << "Invalid amount!" << endl;
}

// Add an expense
void Budget::addExpense(double amount)
{
    if (amount > 0)
        totalSpent += amount;
    else
        cout << "Invalid expense amount!" << endl;
}

// Return total budget
double Budget::getBudget()
{
    return monthlyBudget;
}

// Return total expenses
double Budget::getTotalSpent()
{
    return totalSpent;
}

// Return remaining budget
double Budget::getRemainingBudget()
{
    return monthlyBudget - totalSpent;
}

// Calculate budget usage percentage
double Budget::getBudgetUsage()
{
    if (monthlyBudget == 0)
        return 0;

    return (totalSpent / monthlyBudget) * 100;
}

// Check if budget has been exceeded
bool Budget::isBudgetExceeded()
{
    return totalSpent > monthlyBudget;
}

// Display complete budget report
void Budget::displayBudget()
{
    cout << "\n========== Budget Report ==========\n";
    cout << fixed << setprecision(2);

    cout << "Monthly Budget   : Rs. " << monthlyBudget << endl;
    cout << "Total Spent      : Rs. " << totalSpent << endl;
    cout << "Remaining Budget : Rs. " << getRemainingBudget() << endl;
    cout << "Budget Used      : " << getBudgetUsage() << "%" << endl;

    if (isBudgetExceeded())
    {
        cout << "Status           : Budget Exceeded!" << endl;
    }
    else if (getBudgetUsage() >= 90)
    {
        cout << "Status           : Critical - 90% of budget used." << endl;
    }
    else if (getBudgetUsage() >= 80)
    {
        cout << "Status           : Warning - 80% of budget used." << endl;
    }
    else
    {
        cout << "Status           : Budget is under control." << endl;
    }

    cout << "===================================\n";
}

// Reset budget details
void Budget::resetBudget()
{
    monthlyBudget = 0;
    totalSpent = 0;
}