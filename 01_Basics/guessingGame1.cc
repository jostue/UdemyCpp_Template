#include <iostream>

int main()
{
    int a = -1;
    int num_2_guess = 4;
    int num_of_guesses;
    int wooden_spoon_num = 2;

    std::cout << "Please enter the number of guesses: ";
    std::cin >> num_of_guesses;
    num_of_guesses--;
    for (int guesses = num_of_guesses; guesses >= 0; guesses--)
    {
        std::cout << "Please guess a number between 0-10" << std::endl;
        std::cout << "Number: ";
        std::cin >> a;

        if ((a < 0) || (a > 10))
        {
            std::cout << "Invalid number. Try again" << std::endl;
        }
        else
        {
            if (a == num_2_guess)
            {
                std::cout << "Well done. You won." << std::endl;
                break;
            }
            else if (a == wooden_spoon_num)
            {
                std::cout << "You won the wooden spoon." << std::endl;
            }
            else
            {
                std::cout << "Wrong. Try again." << std::endl;
            }
        }
        std::cout << "Guesses left: " << guesses << std::endl << std::endl;
    }

    return 0;
}
