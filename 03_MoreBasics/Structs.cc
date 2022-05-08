#include <iostream>

enum permissionLevel
{
    EN_STUDENT = 0,
    EN_TUTOR = 1,
    EN_INSTRUCTOR = 2,
    EN_ADMIN = 3,
};

struct UserData
{
    char *name;
    unsigned int ID;
    permissionLevel userLevel;
};

void greet_permission_level(permissionLevel level)
{

    switch (level)
    {
    case (permissionLevel::EN_ADMIN):
    {
        std::cout << "Hello Admin." << std::endl;
        break;
    }
    case (permissionLevel::EN_INSTRUCTOR):
    {
        std::cout << "Hello Instructor." << std::endl;
        break;
    }
    case (permissionLevel::EN_STUDENT):
    {
        std::cout << "Hello Student." << std::endl;
        break;
    }
    case (permissionLevel::EN_TUTOR):
    {
        std::cout << "Hello Tutor." << std::endl;
        break;
    }
    default:
    {
        std::cout << "Invalid permission level." << std::endl;
        break;
    }
    }
}

int main()
{

    UserData user_jonas = {.name = "Jonas", .ID = 1234, .userLevel = permissionLevel::EN_STUDENT};

    UserData user_peter;
    user_peter.name = "Peter";
    user_peter.ID = 3214;
    user_peter.userLevel = permissionLevel::EN_ADMIN;

    greet_permission_level(user_jonas.userLevel);

    greet_permission_level(user_peter.userLevel);


    return 0;
}
