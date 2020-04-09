#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);

    virtual ~SemiTruck();
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
    
    void turnOnRadio();
    void pullOver();
    
};
