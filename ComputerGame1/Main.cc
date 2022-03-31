#include <iostream>
#include <stdlib.h>

#define LEN_FIELD 10u

void print_field(unsigned int player_position);

int main()
{
    unsigned int player_position = 0u;

    while (true)
    {
        print_field(player_position);

        char user_command;

        std::cin >> user_command;

        if ((user_command == 'a') && (player_position > 0u))
        {
            player_position--;
        }
        else if ((user_command == 'd') && (player_position < LEN_FIELD))
        {
            player_position++;
        }

        if (player_position == LEN_FIELD)
        {
            print_field(player_position);
            char repeat;
            std::cout << "You win! =) " << std::endl;
            std::cout << "Player again? (y/n)" << std::endl;
            std::cin >> repeat;
            if (repeat == 'y')
            {
                player_position = 0;
            }
            else if (repeat == 'n')
            {
                std::cout << "Thanks for playing. Goodbye!" << std::endl;
                break;
            }
        }
    }
}

void print_field(unsigned int player_position)
{
    system("clear");
    for (unsigned int i = 0u; i <= LEN_FIELD; i++)
    {
        if (i == player_position)
        {
            std::cout << 'P';
        }
        else if ((i == LEN_FIELD) || (i == 0u))
        {
            std::cout << '|';
        }
        else
        {
            std::cout << '.';
        }
    }
    std::cout << std::endl;
}
