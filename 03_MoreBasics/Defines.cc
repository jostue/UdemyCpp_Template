#include <iostream>

#define D_NUM_VEHICLES 3

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
        .speed = 100.0f,
        .lane = Lane::CENTER_LANE,
    };

    Vehicle v2 = {
        .id = 1235,
        .speed = 90.0f,
        .lane = Lane::CENTER_LANE,
    };

    Vehicle v3 = {
        .id = 1236,
        .speed = 130.0f,
        .lane = Lane::CENTER_LANE,
    };

    Vehicle vehicles[D_NUM_VEHICLES] = {v1, v2, v3};

    for (int i = 0; i < D_NUM_VEHICLES; i++)
    {
        print_vehicle_data(vehicles[i]);
        std::cout << std::endl;
    }


    return 0;
}
