#include "../include/Category.h"
#include <iostream>

using namespace std;

void Category::addCategory()
{
    cin.ignore();

    cout << "Enter Category Name: ";
    getline(cin, categoryName);

    cout << "\nCategory Added Successfully!\n";
}

void Category::displayCategory()
{
    cout << "\nCategory Name: " << categoryName << endl;
}

void Category::editCategory()
{
    cin.ignore();

    cout << "Enter New Category Name: ";
    getline(cin, categoryName);

    cout << "\nCategory Updated Successfully!\n";
}

void Category::deleteCategory()
{
    categoryName = "";

    cout << "\nCategory Deleted Successfully!\n";
}
