#include <iostream>

enum permissionLevel
{
    EN_STUDENT = 0,
    EN_TUTOR = 1,
    EN_INSTRUCTOR = 2,
    EN_ADMIN = 3,
};

int main()
{
    permissionLevel myPermissionLevel = permissionLevel::EN_ADMIN;
    return 0;
}
