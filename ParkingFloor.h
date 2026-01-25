#ifndef PARKINGFLOOR_H
#define PARKINGFLOOR_H
#include <vector>
#include "ParkingSlot.h"
using namespace std;

class ParkingFloor {
public:
    int floorNumber;
    vector<ParkingSlot> slots;

    ParkingFloor(int floorNo, int numSlots) {
        floorNumber = floorNo;
        for (int i = 0; i < numSlots; i++) {
            slots.emplace_back(i, SlotType::CAR);
        }
    }

    ParkingSlot* getFreeSlot(VehicleType type) {
        for (auto &slot : slots) {
            if (!slot.isOccupied && slot.canFitVehicle(type))
                return &slot;
        }
        return nullptr;
    }
};

#endif