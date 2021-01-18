// Inheritance Demonstration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main()
{
    Vehicle vehicleInstance;
    std::cout << "Vehicle NumWheels = " << vehicleInstance.GetNumWheels() << std::endl;
    std::cout << std::endl;

    Car carInstance;
    std::cout << "Car NumWheels = " << carInstance.GetNumWheels() << std::endl;
    std::cout << std::endl;

    Truck truckInstance;
    std::cout << "Truck NumWheels = " << truckInstance.GetNumWheels() << std::endl;
    std::cout << std::endl;
}
