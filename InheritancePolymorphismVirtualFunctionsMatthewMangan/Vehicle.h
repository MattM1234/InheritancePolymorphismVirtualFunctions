/*
* Matthew Mangan
* CIS 1202 501
* April 25, 2021
*/

#pragma once
#include <iostream>

using namespace std;

class Vehicle
{
	private:
		int yearBuilt;
		string manufacturer;

	public:
		// Constructor

		Vehicle(int year, string manufacturer);

		// Setters

		void setManufacturer(string m);

		void setYear(int y);

		// Getters

		string getManufacturer();

		int getYear();

		virtual void displayInfo();
};

