#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

enum class VehicleType { BIKE, CAR, TRUCK };

class Vehicle {
public:
    string vehicleNumber;
    VehicleType type;

    Vehicle(string number, VehicleType type)
        : vehicleNumber(number), type(type) {}
};

#endif