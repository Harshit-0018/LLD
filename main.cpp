#include <iostream>
#include "ParkingLot.h"
using namespace std;

int main() {
    ParkingLot* lot = ParkingLot::getInstance();
    lot->addFloor(ParkingFloor(1, 5));

    Vehicle car1("KA01AB1234", VehicleType::CAR);
    Ticket* ticket = lot->parkVehicle(&car1);

    if (ticket) {
        cout << "Vehicle parked. Ticket ID: " << ticket->ticketId << endl;
    } else {
        cout << "Parking Full!" << endl;
    }
    return 0;
}