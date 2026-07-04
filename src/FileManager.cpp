#include "../include/FileManager.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <ctime>

using namespace std;
namespace fs = std::filesystem;

FileManager::FileManager()
{
    dataDirectory = "data";
    dataFile = dataDirectory + "/expenses.txt";
}

void FileManager::saveData()
{
    cout << "\n====================================";
    cout << "\n           Save Data";
    cout << "\n====================================\n";

    fs::create_directories(dataDirectory);

    ofstream outFile(dataFile, ios::app);

    if(!outFile)
    {
        cout << "\nError: Unable to open data file for saving.\n";
        return;
    }

    string amount, category, description;

    cout << "Enter Amount: ";
    cin >> amount;
    cin.ignore();

    cout << "Enter Category: ";
    getline(cin, category);

    cout << "Enter Description: ";
    getline(cin, description);

    outFile << amount << "," << category << "," << description << "\n";
    outFile.close();

    cout << "\nData Saved Successfully to " << dataFile << "\n";
}

void FileManager::loadData()
{
    cout << "\n====================================";
    cout << "\n           Load Data";
    cout << "\n====================================\n";

    ifstream inFile(dataFile);

    if(!inFile)
    {
        cout << "\nNo saved data found. Use 'Save Data' first.\n";
        return;
    }

    string line;
    int count = 0;

    while(getline(inFile, line))
    {
        if(!line.empty())
        {
            cout << ++count << ". " << line << endl;
        }
    }

    inFile.close();

    if(count == 0)
    {
        cout << "\nData file is empty.\n";
    }
}

void FileManager::backupData()
{
    cout << "\n====================================";
    cout << "\n          Backup Data";
    cout << "\n====================================\n";

    ifstream inFile(dataFile);

    if(!inFile)
    {
        cout << "\nNo data available to back up.\n";
        return;
    }

    time_t now = time(0);
    tm* localTime = localtime(&now);

    char timestamp[32];
    snprintf(timestamp, sizeof(timestamp), "%04d%02d%02d_%02d%02d%02d",
             localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
             localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

    string backupFile = dataDirectory + "/backup_" + timestamp + ".txt";

    ofstream outFile(backupFile);

    if(!outFile)
    {
        cout << "\nError: Unable to create backup file.\n";
        return;
    }

    outFile << inFile.rdbuf();

    inFile.close();
    outFile.close();

    cout << "\nBackup Created Successfully: " << backupFile << "\n";
}
