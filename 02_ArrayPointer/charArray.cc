#include <iostream>
#include <stdlib.h>

int main()
{
    char first_name[] = {'J', 'a', 'n', '\0'};
    char last_name[] = "Mustermann";
    float my_float[] = {1, 3.5, 6};
    std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;

    return 0;
}
