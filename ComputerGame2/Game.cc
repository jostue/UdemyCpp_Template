#include <iostream>

constexpr unsigned int LEN_FIELD = 10;
constexpr char LEFT = 'a';
constexpr char RIGHT = 'd';
constexpr unsigned int START = 0;
constexpr unsigned int END = LEN_FIELD - 1;

void print_field(unsigned int player_position);
unsigned int execute_move(unsigned int player_position, char move);
bool is_finished(unsigned int &player_position);

void game(unsigned int &player_position, bool &finished)
{
    print_field(player_position);
    char user_command;
    std::cin >> user_command;
    player_position = execute_move(player_position, user_command);
    finished = is_finished(player_position);
}


void print_field(unsigned int player_position)
{
    system("clear");
    char field[LEN_FIELD];
    for (unsigned int i = 0u; i <= LEN_FIELD; i++)
    {
        field[i] = '.';
    }

    field[START] = '|';
    field[END] = '|';
    field[player_position] = 'P';

    for (unsigned int i = 0u; i <= LEN_FIELD; i++)
    {
        std::cout << field[i];
    }

    std::cout << std::endl;
}


unsigned int execute_move(unsigned int player_position, char move)
{
    if ((move == LEFT) && (player_position > START))
    {
        player_position--;
    }
    else if ((move == RIGHT) && (player_position < END))
    {
        player_position++;
    }
    return player_position;
}


bool is_finished(unsigned int &player_position)
{
    bool finished = false;
    if (player_position == END)
    {
        print_field(player_position);
        char repeat;
        std::cout << "You win! =) " << std::endl;
        std::cout << "Player again? (y/n)" << std::endl;
        std::cin >> repeat;
        if (repeat == 'y')
        {
            player_position = START;
        }
        else if (repeat == 'n')
        {
            std::cout << "Thanks for playing. Goodbye!" << std::endl;
            finished = true;
        }
    }
    return finished;
}
