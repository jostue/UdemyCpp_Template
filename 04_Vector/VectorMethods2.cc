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

    int first = myVector.front();

    std::cout << first << std::endl;

    int last = myVector.back();

    std::cout << last << std::endl;

    int *array = myVector.data();

    std::vector<int>::iterator beginIterator = myVector.begin();
    std::vector<int>::iterator endIterator = myVector.end();

    std::cout << *beginIterator << std::endl;
    std::cout << *endIterator << std::endl;

    beginIterator++;
    endIterator--;

    std::cout << *beginIterator << std::endl;
    std::cout << *endIterator << std::endl;

    return 0;
}
