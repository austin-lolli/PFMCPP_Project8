#include "HighwayPatrol.h"

#include <iostream>
#include <string>

HighwayPatrol::HighwayPatrol() : Vehicle("HighwayPatrol")
{

}

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << name << ": scanning highway for speeders" << std::endl;

    for( auto* v : h->vehicles )
    {
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            h->changeSpeed(50); //slow down for the highway patrol
        }
    }
}

void HighwayPatrol::pullOver( Vehicle* v, bool willArrest, Highway* h )
{
    std::cout << "\n\n";
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;


    if( willArrest )
    {
        //print the vehicle type in this std::cout between "THE [" and "] PULL". 
        std::string vehicleType;

        if(dynamic_cast<Car*>(v))
        {
            vehicleType = "Car";
        }
        else if(dynamic_cast<Motorcycle*>(v))
        {
            vehicleType = "Motorcycle";
        }
        else if(dynamic_cast<SemiTruck*>(v))
        {
            vehicleType = "Semi Truck";
        }
        else
        {
            vehicleType = "UFO";
        }

        std::cout << name << ": YOU IN THE [ "<< vehicleType <<" ] PULL OVER AND SHOW YOUR HANDS" << std::endl;
        std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
        h->removeVehicle(v);
    }
}
