/*
* Matthew Mangan
* CIS 1202 501
* April 25, 2021
*/

#include "Car.h"
#include <iostream>

using namespace std;

// Constructor

Car::Car(int year, string manufacturer, int door)
    :Vehicle(year, manufacturer)
{
    doors = door;
}

// Setter

void Car::setDoors(int d)
{
    doors = d;
}

// Getter

int Car::getDoors()
{
    return doors;
}

// Display

void Car::displayInfo()
{
    Vehicle::displayInfo();
    cout << "Doors: " << doors << endl;
}