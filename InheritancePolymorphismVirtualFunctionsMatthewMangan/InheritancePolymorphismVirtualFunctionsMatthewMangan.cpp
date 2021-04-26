/*
* Matthew Mangan
* CIS 1202 501
* April 25, 2021
*/

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	string manufacturerName;
	int yearCreated, doorAmount, truckCapacity;

	// Get the information for the vehicle

	cout << "Vehicle Program\n" << "\nVehicle:\n";
	cout << "Enter the manufacturer: ";

	getline(cin, manufacturerName);

	cout << "Enter the year built: ";

	cin >> yearCreated;

	Vehicle newVehicle(yearCreated, manufacturerName);

	// Display the information

	newVehicle.displayInfo();

	// New Car

	cout << "\nCar:\n";
	cout << "Enter the manufacturer: ";

	cin.ignore();
	getline(cin, manufacturerName);

	cout << "Enter the year built: ";

	cin >> yearCreated;

	cout << "Enter the number of doors: ";

	cin >> doorAmount;

	Car newCar(yearCreated, manufacturerName, doorAmount);

	// Display the information

	newCar.displayInfo();

	// New Truck

	cout << "\nTruck:\n";
	cout << "Enter the manufacturer: ";

	cin.ignore();
	getline(cin, manufacturerName);

	cout << "Enter the year built: ";

	cin >> yearCreated;

	cout << "Enter the towing capacity: ";

	cin >> truckCapacity;

	Truck newTruck(yearCreated, manufacturerName, truckCapacity);

	// Display the information

	newTruck.displayInfo();
}