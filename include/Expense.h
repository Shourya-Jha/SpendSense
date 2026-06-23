#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense
{
public:
    int expenseID;
    double amount;
    std::string date;
    std::string category;
    std::string description;
    std::string paymentMethod;

    void addExpense();
    void displayExpense();

    void editExpense();
    void deleteExpense();

    void showStatistics();
};

#endif