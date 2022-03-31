#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    for (int i_idx = 0; i_idx < I; ++i_idx)
    {
        for (int j_idx = 0; j_idx < J; ++j_idx)
        {
            std::cout << "i: " << i_idx << " j: " << j_idx << " ";
            if ((i_idx + j_idx) % 2 == 0)
            {
                std::cout << ":= Gerade!" << std::endl;
            }
            else
            {
                std::cout << ":= Ungerade!" << std::endl;
            }
        }
    }
}
