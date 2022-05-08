#include <cmath>
#include <iostream>
#include <vector>

template <class T>
void fill_vector(std::vector<T> &vec);

template <class T>
void printVector(const std::vector<T> &vec);

template <class T>
void vector_exp(std::vector<T> &vec);

template <class T>
void vector_log(std::vector<T> &vec);

int main()
{

    std::vector<double> myVector(10);

    fill_vector(myVector);
    printVector(myVector);
    vector_exp(myVector);
    printVector(myVector);
    vector_log(myVector);
    printVector(myVector);

    return 0;
}

template <class T>
void fill_vector(std::vector<T> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        vec[i] = static_cast<T>(i);
    }
}

template <class T>
void printVector(const std::vector<T> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
}

template <class T>
void vector_exp(std::vector<T> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        vec[i] = std::exp(vec[i]);
    }
}

template <class T>
void vector_log(std::vector<T> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        vec[i] = std::log(vec[i]);
    }
}
