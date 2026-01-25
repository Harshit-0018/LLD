#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <vector>
#include "ParkingFloor.h"
#include "Ticket.h"
using namespace std;

class ParkingLot {
private:
    static ParkingLot* instance;
    vector<ParkingFloor> floors;
    int ticketCounter;

    ParkingLot() : ticketCounter(0) {}

public:
    static ParkingLot* getInstance() {
        if (!instance)
            instance = new ParkingLot();
        return instance;
    }

    void addFloor(ParkingFloor floor) {
        floors.push_back(floor);
    }

    Ticket* parkVehicle(Vehicle* vehicle) {
        for (auto &floor : floors) {
            ParkingSlot* slot = floor.getFreeSlot(vehicle->type);
            if (slot) {
                slot->isOccupied = true;
                slot->vehicle = vehicle;
                return new Ticket(++ticketCounter, vehicle->vehicleNumber, slot);
            }
        }
        return nullptr;
    }
};

#endif