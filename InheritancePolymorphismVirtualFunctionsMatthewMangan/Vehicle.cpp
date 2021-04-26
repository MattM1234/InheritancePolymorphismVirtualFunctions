/*
* Matthew Mangan
* CIS 1202 501
* April 25, 2021
*/

#include <iostream>
#include "Vehicle.h"

using namespace std;

// Constructor

Vehicle::Vehicle(int year, string manufacturer)
{
	yearBuilt = year;
	this->manufacturer = manufacturer;
}

// Setter

void Vehicle::setManufacturer(string m)
{
	manufacturer = m;
}

void Vehicle::setYear(int y)
{
	yearBuilt = y;
}

// Getter

string Vehicle::getManufacturer()
{
	return manufacturer;
}

int Vehicle::getYear()
{
	return yearBuilt;
}

// Display

void Vehicle::displayInfo()
{
	cout << "Vehicle Information:\n";

	cout << "Manufacturer: " << manufacturer << endl;

	cout << "Year Built: " << yearBuilt << endl;
	
}