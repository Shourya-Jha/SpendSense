#ifndef SAVINGS_H
#define SAVINGS_H

class Savings
{
public:
    double savingsGoal;
    double currentSavings;

    void setGoal();
    void addSavings();
    void withdrawSavings();
    void displaySavings();
    void resetSavings();
};

#endif