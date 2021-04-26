/*
* Matthew Mangan
* CIS 1202 501
* April 25, 2021
*/

#pragma once
#include "Vehicle.h"
class Truck :
    public Vehicle
{
private:
    int towingCapacity;

public:
    // Constructor

    Truck(int year, string manufacturer, int towing);

    // Setter

    void setCapacity(int c);

    // Getter

    int getCapacity();

    void displayInfo();
};

