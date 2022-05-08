#include <iostream>
#include <vector>

template <class T>
void printVector(std::vector<T> &vec);

int main()
{

    std::vector<int> myVector(10, 0);

    std::cout << myVector.capacity() << std::endl;

    myVector.push_back(3);
    myVector.push_back(5);

    std::cout << myVector.capacity() << std::endl;

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
