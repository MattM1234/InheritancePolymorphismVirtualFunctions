/*
* Matthew Mangan
* CIS 1202 501
* April 25, 2021
*/

#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int doors;

public:
    // Constructor

    Car(int year, string manufacturer, int door);

    // Setter

    void setDoors(int d);

    // Getter

    int getDoors();

    void displayInfo();
};

