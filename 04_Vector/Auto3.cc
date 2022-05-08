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

    int mat[2][3]{};

    for (const auto &row : mat)
    {
        for (const auto &col : row)
        {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }

    struct data
    {
        int x;
        int y;
    };

    std::vector<data> vec{{3, 1}, {4, 2}, {1, 5}};

    for (const auto &[x1, y1] : vec)
    {
        std::cout << x1 << " " << y1 << std::endl;
    }

    return 0;
}
