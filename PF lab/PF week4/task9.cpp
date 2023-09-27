#include<iostream>
using namespace std;
void fuelcalculator(float distance);
main()
{
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	fuelcalculator(distance);
}
void fuelcalculator(float distance)
{
	float fuel;
	if(distance>10)
	{
	fuel=distance*10;
	}
	if(distance<=10)
	{
	fuel=100;
	}
	cout<<"Fuel needed: "<<fuel;
}