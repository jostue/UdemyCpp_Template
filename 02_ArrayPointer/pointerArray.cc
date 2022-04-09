#include <iostream>

using std::cout;
using std::endl;

int find_max(int *input_array, unsigned int array_size)
{
    int result;

    for (int i = 0; i < (int)array_size; i++)
    {
        if (i == 0)
        {
            result = input_array[i];
        }
        else if (input_array[i] > result)
        {
            result = input_array[i];
        }
    }
    return result;
}

int main()
{
    unsigned int array_size = 10;

    int testarray[10];
    cout << "Size of array on Stack: " << sizeof(testarray) << endl;
    cout << "Size of integer: " << sizeof(int) << endl;
    cout << "Array length: " << sizeof(testarray) / sizeof(int) << endl << endl;

    delete[] testarray;

    // Heap allocation
    int *p = new int[10];
    cout << "Size of array on heap: " << sizeof(p) << endl;


    for (int i = 0; i < (int)array_size; i++)
    {
        p[i] = i;
    }

    int max_found = find_max(p, array_size);

    cout << "Max: " << max_found << endl;

    // Heap deallocation
    delete[] p;

    return 0;
}
