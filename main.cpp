#include <iostream>
#include "include/Expense.h"
#include "include/Search.h"

using namespace std;

int main()
{
    Expense expense;
    Search search;

    int choice;

    do
    {
        cout << "\n====================================";
        cout << "\n         SpendSense v0.1";
        cout << "\n====================================";
        cout << "\n1. User Management";
        cout << "\n2. Expense Management";
        cout << "\n3. Category Management";
        cout << "\n4. Budget Management";
        cout << "\n5. Reports";
        cout << "\n6. Analytics";
        cout << "\n7. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nUser Module Coming Soon...\n";
                break;

            case 2:
            {
                int expenseChoice;

                cout << "\nExpense Management";
                cout << "\n1. Add Expense";
                cout << "\n2. View Expense";
                cout << "\n3. Edit Expense";
                cout << "\n4. Delete Expense";
                cout << "\n5. Search by ID";
                cout << "\n6. Search by Category";
                cout << "\n7. Search by Date";
                cout << "\n8. Search by Amount";
                cout << "\n9. Show Statistics";

                cout << "\nEnter Choice: ";
                cin >> expenseChoice;

                switch(expenseChoice)
                {
                    case 1:
                        expense.addExpense();
                        break;

                    case 2:
                        expense.displayExpense();
                        break;

                    case 3:
                        expense.editExpense();
                        break;

                    case 4:
                        expense.deleteExpense();
                        break;

                    case 5:
                        search.searchByID(expense);
                        break;

                    case 6:
                        search.searchByCategory(expense);
                        break;

                    case 7:
                        search.searchByDate(expense);
                        break;

                    case 8:
                        search.searchByAmount(expense);
                        break;

                    case 9:
                        expense.showStatistics();
                        break;

                    default:
                        cout << "\nInvalid Choice!\n";
                }

                break;
            }

            case 3:
                cout << "\nCategory Module Coming Soon...\n";
                break;

            case 4:
                cout << "\nBudget Module Coming Soon...\n";
                break;

            case 5:
                cout << "\nReports Module Coming Soon...\n";
                break;

            case 6:
                cout << "\nAnalytics Module Coming Soon...\n";
                break;

            case 7:
                cout << "\nThank you for using SpendSense!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please try again.\n";
        }

    } while(choice != 7);

    return 0;
}