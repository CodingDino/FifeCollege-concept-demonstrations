#include "Car.h"
#include <iostream>

Car::Car()
	: Vehicle()
{
	std::cout << "Car Created" << std::endl;
}

Car::~Car()
{
	std::cout << "Car Destroyed" << std::endl;
}

int Car::GetNumWheels()
{
	return 4;
}
