#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H
#include "Vehicle.h"

enum class SlotType { BIKE, CAR, TRUCK };

class ParkingSlot {
public:
    int slotId;
    SlotType type;
    bool isOccupied;
    Vehicle* vehicle;

    ParkingSlot(int id, SlotType type)
        : slotId(id), type(type), isOccupied(false), vehicle(nullptr) {}

    bool canFitVehicle(VehicleType vType) {
        return static_cast<int>(vType) == static_cast<int>(type);
    }
};

#endif