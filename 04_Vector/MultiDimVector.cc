#include <iostream>
#include <vector>

template <class T>
void print_matrix(std::vector<std::vector<T>> &mat)
{
    for (std::size_t i = 0; i < mat.size(); i++)
    {
        for (std::size_t j = 0; j < mat[i].size(); j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{

    const std::size_t numRows = 4;
    const std::size_t numCols = 5;

    std::vector<std::vector<std::size_t>> myMatrix(numRows, std::vector<std::size_t>(numCols, 0));

    myMatrix = {{
                    0,
                    1,
                    2,
                    3,
                    4,
                },
                {
                    5,
                    1,
                    2,
                    3,
                    4,
                },
                {
                    6,
                    1,
                    2,
                    3,
                    4,
                },
                {
                    7,
                    1,
                    2,
                    3,
                    4,
                }};

    print_matrix(myMatrix);
    return 0;
}
