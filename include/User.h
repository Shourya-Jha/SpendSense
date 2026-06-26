#ifndef USER_H
#define USER_H
#include <string>
class User
{
public:
    std::string username;
    std::string email;
    std::string password;

void registerUser();
void displayProfile();
};
#endif
