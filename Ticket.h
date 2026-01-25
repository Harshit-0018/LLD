#ifndef TICKET_H
#define TICKET_H
#include <ctime>
#include <string>
#include "ParkingSlot.h"
using namespace std;

class Ticket {
public:
    int ticketId;
    string vehicleNumber;
    time_t entryTime;
    ParkingSlot* slot;

    Ticket(int id, string vNum, ParkingSlot* slot)
        : ticketId(id), vehicleNumber(vNum), slot(slot) {
        entryTime = time(nullptr);
    }
};

#endif