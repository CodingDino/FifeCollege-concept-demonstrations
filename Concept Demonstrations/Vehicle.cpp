#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(int newNumWheels /*= 0*/)
	: numWheels(newNumWheels)
{
	std::cout << "Vehicle Created" << std::endl;
}

Vehicle::~Vehicle()
{
	std::cout << "Vehicle Destroyed" << std::endl;
}

int Vehicle::GetNumWheels()
{
	return numWheels;
}
