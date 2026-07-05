#ifndef ANALYTICS_H
#define ANALYTICS_H

#include <string>
#include <vector>

class Analytics
{
public:
    std::vector<double> expenseAmounts;
    std::vector<std::string> expenseCategories;

    void loadSampleData();

    void spendingTrends();
    void averageExpense();
    void categoryWiseAnalysis();
    void monthlyComparison();
};

#endif
