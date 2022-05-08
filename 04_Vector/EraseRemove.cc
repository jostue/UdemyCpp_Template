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


bool is_odd(const int i)
{
    return i % 2;
}

int main()
{

    std::vector<int> myVector(10, 0);
    std::iota(myVector.begin(), myVector.end(), 0);

    printVectorInfo(myVector);
    printVector(myVector);

    //   std::vector<int>::iterator it = std::remove(myVector.begin(), myVector.end(), 2);
    //   std::cout << *it << std::endl;
    //   printVector(myVector);

    myVector.erase(std::remove(myVector.begin(), myVector.end(), 2), myVector.end());
    printVector(myVector);

    myVector.erase(std::remove_if(myVector.begin(), myVector.end(), is_odd), myVector.end());
    printVector(myVector);

    return 0;
}
