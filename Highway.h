#pragma once

#include "Car.h"
#include "Motorcycle.h"
#include "SemiTruck.h"

#include <vector>
#include <algorithm>

struct HighwayPatrol;
struct Vehicle;

struct Highway
{
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
private:
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles;
    friend HighwayPatrol;
};
