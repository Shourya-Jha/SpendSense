#include <iostream>
#include "include/User.h"
#include "include/AccountManager.h"
#include "include/Expense.h"
#include "include/Search.h"
#include "include/Budget.h"

using namespace std;

int main()
{
    User user;
    AccountManager accountManager;

    Expense expense;
    Search search;
    Budget budget;

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
            {
                int userChoice;

                cout << "\n====================================";
                cout << "\n       User Management";
                cout << "\n====================================";
                cout << "\n1. Register User";
                cout << "\n2. Login";
                cout << "\n3. View Profile";
                cout << "\n4. Change Password";
                cout << "\n5. Back";

                cout << "\n\nEnter Choice: ";
                cin >> userChoice;

                switch(userChoice)
                {
                    case 1:
                        user.registerUser();
                        break;

                    case 2:
                        accountManager.login(user);
                        break;

                    case 3:
                        user.displayProfile();
                        break;

                    case 4:
                        accountManager.changePassword(user);
                        break;

                    case 5:
                        break;

                    default:
                        cout << "\nInvalid Choice!\n";
                }

                break;
            }

            case 2:
            {
                int expenseChoice;

                cout << "\n====================================";
                cout << "\n      Expense Management";
                cout << "\n====================================";
                cout << "\n1. Add Expense";
                cout << "\n2. View Expense";
                cout << "\n3. Edit Expense";
                cout << "\n4. Delete Expense";
                cout << "\n5. Search by ID";
                cout << "\n6. Search by Category";
                cout << "\n7. Search by Date";
                cout << "\n8. Search by Amount";
                cout << "\n9. Show Statistics";
                cout << "\n10. Back";

                cout << "\n\nEnter Choice: ";
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

                    case 10:
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
            {
                int budgetChoice;
                double amount;

                do
                {
                    cout << "\n====================================";
                    cout << "\n      Budget Management";
                    cout << "\n====================================";
                    cout << "\n1. Set Budget";
                    cout << "\n2. Add to Budget";
                    cout << "\n3. Add Expense";
                    cout << "\n4. View Budget Report";
                    cout << "\n5. Reset Budget";
                    cout << "\n6. Back";

                    cout << "\n\nEnter Choice: ";
                    cin >> budgetChoice;

                    switch(budgetChoice)
                    {
                        case 1:
                            cout << "Enter Budget Amount: ";
                            cin >> amount;
                            budget.setBudget(amount);
                            break;

                        case 2:
                            cout << "Enter Amount to Add: ";
                            cin >> amount;
                            budget.addBudget(amount);
                            break;

                        case 3:
                            cout << "Enter Expense Amount: ";
                            cin >> amount;
                            budget.addExpense(amount);
                            break;

                        case 4:
                            budget.displayBudget();
                            break;

                        case 5:
                            budget.resetBudget();
                            cout << "Budget reset successfully.\n";
                            break;

                        case 6:
                            break;

                        default:
                            cout << "\nInvalid Choice!\n";
                    }

                } while(budgetChoice != 6);

                break;
            }

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
