#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

class Category
{
public:
    std::string categoryName;

    void addCategory();
    void viewCategory();
    void editCategory();
    void deleteCategory();
};

#endif
