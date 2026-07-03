#include "../include/TagManager.h"
#include <iostream>

using namespace std;

void TagManager::addTag()
{
    cin.ignore();

    cout << "Enter Tag Name: ";
    getline(cin, tagName);

    cout << "\nTag Added Successfully!\n";
}

void TagManager::displayTag()
{
    cout << "\nTag Name: " << tagName << endl;
}

void TagManager::assignTag()
{
    cout << "\nTag Assigned Successfully!\n";
}
