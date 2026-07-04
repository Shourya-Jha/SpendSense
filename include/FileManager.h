#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>

class FileManager
{
public:
    std::string dataDirectory;
    std::string dataFile;

    FileManager();

    void saveData();
    void loadData();
    void backupData();
};

#endif
