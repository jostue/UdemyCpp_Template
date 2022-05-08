#include <iostream>

enum class permissionLevel : unsigned char
{
    EN_STUDENT = 0,
    EN_TUTOR = 1,
    EN_INSTRUCTOR = 2,
    EN_ADMIN = 3,
};

enum class ExamPersons
{
    EN_STUDENT,
    EN_INSTRUCTOR,
};

int main()
{
    permissionLevel myPermissionLevel = permissionLevel::EN_ADMIN;

    ExamPersons examPerson = ExamPersons::EN_STUDENT;
    return 0;
}
