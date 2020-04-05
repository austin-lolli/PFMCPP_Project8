#include "SemiTruck.h"

#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::turnOnRadio()
{
    setSpeed(55);
    std::cout << name<< ": Now listening to TruckersFM!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": Hello officer, here are my license, registration and sleep logs." << std::endl;
}
