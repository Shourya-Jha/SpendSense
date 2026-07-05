#include "../include/Savings.h"
#include <iostream>

using namespace std;

void Savings::setGoal()
{
    cout << "Enter Savings Goal: ";
    cin >> savingsGoal;

    currentSavings = 0;

    cout << "\nSavings Goal Set Successfully!\n";
}

void Savings::addSavings()
{
    double amount;

    cout << "Enter Amount to Save: ";
    cin >> amount;

    if(amount > 0)
    {
        currentSavings += amount;
        cout << "\nAmount Added to Savings Successfully!\n";
    }
    else
    {
        cout << "\nInvalid Amount!\n";
    }
}

void Savings::withdrawSavings()
{
    double amount;

    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "\nInvalid Amount!\n";
    }
    else if(amount > currentSavings)
    {
        cout << "\nInsufficient Savings Balance!\n";
    }
    else
    {
        currentSavings -= amount;
        cout << "\nAmount Withdrawn Successfully!\n";
    }
}

void Savings::displaySavings()
{
    cout << "\n========== Savings Report ==========";
    cout << "\nSavings Goal    : " << savingsGoal;
    cout << "\nCurrent Savings : " << currentSavings;
    cout << "\nRemaining       : " << savingsGoal - currentSavings;

    if(currentSavings >= savingsGoal && savingsGoal > 0)
    {
        cout << "\nStatus          : Goal Achieved!";
    }
    else if(currentSavings >= (savingsGoal * 0.8))
    {
        cout << "\nStatus          : Almost There!";
    }
    else
    {
        cout << "\nStatus          : Keep Saving.";
    }

    cout << "\n=====================================\n";
}

void Savings::resetSavings()
{
    savingsGoal = 0;
    currentSavings = 0;

    cout << "\nSavings Reset Successfully!\n";
}
