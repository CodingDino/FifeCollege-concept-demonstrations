#pragma once


class Vehicle
{
public:

	Vehicle(int newNumWheels = 0);
	~Vehicle();

	// Getters
	int GetNumWheels();

protected:

	int numWheels;

};

