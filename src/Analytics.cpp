#include "../include/Analytics.h"
#include <iostream>
#include <numeric>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;

void Analytics::loadSampleData()
{
    // Populates working data for the analytics module.
    // In a fully integrated build this would pull from the
    // shared Expense records instead of sample values.
    if(expenseAmounts.empty())
    {
        expenseAmounts = {1200.0, 450.5, 300.0, 899.75, 150.0, 620.0};
        expenseCategories = {"Food", "Travel", "Food", "Bills", "Entertainment", "Bills"};
    }
}

void Analytics::spendingTrends()
{
    loadSampleData();

    cout << "\n====================================";
    cout << "\n         Spending Trends";
    cout << "\n====================================\n";

    if(expenseAmounts.empty())
    {
        cout << "\nNo expense data available to analyze.\n";
        return;
    }

    double previous = expenseAmounts[0];

    for(size_t i = 1; i < expenseAmounts.size(); i++)
    {
        double current = expenseAmounts[i];

        cout << "Entry " << i + 1 << ": " << current;

        if(current > previous)
        {
            cout << "  (Trend: Up)\n";
        }
        else if(current < previous)
        {
            cout << "  (Trend: Down)\n";
        }
        else
        {
            cout << "  (Trend: Stable)\n";
        }

        previous = current;
    }
}

void Analytics::averageExpense()
{
    loadSampleData();

    cout << "\n====================================";
    cout << "\n         Average Expense";
    cout << "\n====================================\n";

    if(expenseAmounts.empty())
    {
        cout << "\nNo expense data available to analyze.\n";
        return;
    }

    double total = accumulate(expenseAmounts.begin(), expenseAmounts.end(), 0.0);
    double average = total / expenseAmounts.size();

    cout << fixed << setprecision(2);
    cout << "Total Spent: " << total << endl;
    cout << "Average Expense: " << average << endl;
}

void Analytics::categoryWiseAnalysis()
{
    loadSampleData();

    cout << "\n====================================";
    cout << "\n      Category-wise Analysis";
    cout << "\n====================================\n";

    map<string, double> categoryTotals;

    for(size_t i = 0; i < expenseAmounts.size(); i++)
    {
        if(i < expenseCategories.size())
        {
            categoryTotals[expenseCategories[i]] += expenseAmounts[i];
        }
    }

    if(categoryTotals.empty())
    {
        cout << "\nNo category data available.\n";
        return;
    }

    cout << fixed << setprecision(2);

    for(map<string, double>::iterator it = categoryTotals.begin(); it != categoryTotals.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }
}

void Analytics::monthlyComparison()
{
    loadSampleData();

    cout << "\n====================================";
    cout << "\n        Monthly Comparison";
    cout << "\n====================================\n";

    if(expenseAmounts.size() < 2)
    {
        cout << "\nNot enough data to compare months.\n";
        return;
    }

    size_t mid = expenseAmounts.size() / 2;

    double firstHalf = accumulate(expenseAmounts.begin(), expenseAmounts.begin() + mid, 0.0);
    double secondHalf = accumulate(expenseAmounts.begin() + mid, expenseAmounts.end(), 0.0);

    cout << fixed << setprecision(2);
    cout << "Previous Period Spending: " << firstHalf << endl;
    cout << "Current Period Spending: " << secondHalf << endl;

    if(secondHalf > firstHalf)
    {
        cout << "Spending has increased compared to the previous period.\n";
    }
    else if(secondHalf < firstHalf)
    {
        cout << "Spending has decreased compared to the previous period.\n";
    }
    else
    {
        cout << "Spending is unchanged compared to the previous period.\n";
    }
}
