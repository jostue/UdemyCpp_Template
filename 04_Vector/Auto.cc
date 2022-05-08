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

int main()
{

    std::vector<int> myVector(6, 0);
    std::iota(myVector.begin(), myVector.end(), 0);

    printVector(myVector);
    printVectorInfo(myVector);

    auto beginIterator = myVector.begin();
    auto endIterator = myVector.end();

    std::cout << *beginIterator << std::endl;
    std::cout << *endIterator << std::endl;

    for (auto it = myVector.begin(); it < myVector.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // for each loop
    for (auto &val : myVector)
    {
        std::cout << val << std::endl;
    }

    return 0;
}
