#ifndef BUDGET_H
#define BUDGET_H

class Budget
{
private:
    double monthlyBudget;
    double totalSpent;

public:
    // Constructor
    Budget();

    // Set or increase budget
    void setBudget(double amount);
    void addBudget(double amount);

    // Record an expense
    void addExpense(double amount);

    // Getters
    double getBudget();
    double getTotalSpent();
    double getRemainingBudget();
    double getBudgetUsage();

    // Check budget status
    bool isBudgetExceeded();

    // Display budget report
    void displayBudget();

    // Reset budget and expenses
    void resetBudget();
};

#endif