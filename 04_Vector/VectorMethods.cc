#include <iostream>
#include <vector>

template <class T>
void printVector(const std::vector<T> vec)
{
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;
    std::cout << "Empty? " << std::boolalpha << vec.empty() << std::endl;
    std::cout << std::endl;
}

int main()
{

    std::vector<int> myVector(10, 0);

    printVector(myVector);

    myVector.reserve(16);

    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);

    printVector(myVector);

    myVector.shrink_to_fit();

    printVector(myVector);

    myVector.clear();

    printVector(myVector);

    return 0;
}
