#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

template <class T>
void printVector(const std::vector<T> &vec)
{
    std::cout << "Vector Data:" << std::endl;
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
}

template <class T>
void printVectorInfo(const std::vector<T> &vec)
{

    std::cout << "Vector Info" << std::endl;
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;
    std::cout << "Empty? " << std::boolalpha << vec.empty() << std::endl;
    std::cout << std::endl;
}

bool sortDesc(const int i, const int j)
{
    return i > j;
}

bool sortAsc(const int i, const int j)
{
    return i < j;
}

int main()
{

    std::vector<int> myVector(6, 0);
    std::iota(myVector.begin(), myVector.end(), 0);

    printVector(myVector);
    printVectorInfo(myVector);

    std::sort(myVector.begin(), myVector.end(), sortDesc);

    printVector(myVector);

    std::sort(myVector.begin() + 2, myVector.end() - 2, sortAsc);

    printVector(myVector);

    return 0;
}
