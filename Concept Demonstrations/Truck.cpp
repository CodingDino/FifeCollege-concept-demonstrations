#include "Truck.h"
#include <iostream>

Truck::Truck()
	: Vehicle(6)
{
	std::cout << "Truck Created" << std::endl;
}

Truck::~Truck()
{
	std::cout << "Truck Destroyed" << std::endl;
}
