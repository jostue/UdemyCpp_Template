#include <iostream>
#include <stdlib.h>

int main()
{
    int array1[5] = {0, 1, 2, 3, 4};

    int array2[5] = {1, 2, 3, 4, 5};

    int array3[5];

    for (int i = 0; i < (int)(sizeof(array1) / sizeof(int)); i++)
    {
        array3[i] = array1[i] + array2[i];
        std::cout << array3[i] << " ";
    }


    return 0;
}
