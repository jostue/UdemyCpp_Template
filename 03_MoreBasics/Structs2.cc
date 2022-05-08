#include <iostream>

enum class Lane : char
{
    RIGHT_LANE = 0,
    CENTER_LANE = 1,
    LEFT_LANE = 2,
};

struct Vehicle
{
    unsigned int id;
    float speed;
    Lane lane;
};

void print_vehicle_data(Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle speed: " << vehicle.speed << std::endl;
    std::cout << "Vehicle lane: " << (char)vehicle.lane << std::endl;
}

int main()
{
    Vehicle v1 = {
        .id = 1234,
        .speed = 0.0f,
        .lane = Lane::CENTER_LANE,
    };

    print_vehicle_data(v1);

    return 0;
}
