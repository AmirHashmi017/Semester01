#include<iostream>
using namespace std;
void fuelcalculator (float distance);
main()
{
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	fuelcalculator (distance);
}
void fuelcalculator (float distance)
{
	float fuel;
	fuel=distance*10;
	cout<<"Fuel needed: "<<fuel;
}
