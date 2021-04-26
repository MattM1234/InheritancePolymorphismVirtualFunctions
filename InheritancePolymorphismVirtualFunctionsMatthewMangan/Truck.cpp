/*
* Matthew Mangan
* CIS 1202 501
* April 25, 2021
*/

#include "Truck.h"
#include <iostream>

using namespace std;

// Constructor

Truck::Truck(int year, string manufacturer, int towing)
    :Vehicle(year, manufacturer)
{
    towingCapacity = towing;
}

// Setter

void Truck::setCapacity(int c)
{
    towingCapacity = c;
}

// Getter

int Truck::getCapacity()
{
    return towingCapacity;
}

// Display

void Truck::displayInfo()
{
    Vehicle::displayInfo();
    cout << "Towing capacity: " << towingCapacity << endl;
}

