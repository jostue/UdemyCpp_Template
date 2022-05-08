#include <iostream>
#include <vector>

template <class T>
void printVector(std::vector<T> &vec);

int main()
{
    std::vector<int> myVector(2, 0);

    printVector(myVector);

    myVector[0] = 11;
    myVector[0] = -42;

    printVector(myVector);

    myVector.push_back(7);

    printVector(myVector);

    myVector.pop_back();

    printVector(myVector);

    std::vector<double> myVector2(3, 2.5);

    printVector(myVector2);


    return 0;
}


template <class T>
void printVector(std::vector<T> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
}
