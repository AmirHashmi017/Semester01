#include<iostream>
using namespace std;
float lowestprice (float distance,string period);
main()
{
	float distance,result;
	string period;
	cout<<"Enter the number of kilometers: ";
	cin>>distance;
	cout<<"Enter the period of the day (day/night): ";
	cin>>period;
	result=lowestprice (distance,period);
	cout<<"Lowest price for "<<distance<<" kilometers: "<<result<<" EUR";
}
float lowestprice (float distance,string period)
{
	float price;
	if(distance<20)
	{
	if(period=="day")
	{
	price=(distance*0.79)+0.70;
	}
	if(period=="night")
	{
	price=(distance*0.90)+0.70;
	}
	}
	if(distance>=20&&distance<100)
	{
	if(period=="day")
	{
	price=(distance*0.09);
	}
	if(period=="night")
	{
	price=(distance*0.09);
	}
	}
	if(distance>=100)
	{
	if(period=="day")
	{
	price=(distance*0.06);
	}
	if(period=="night")
	{
	price=(distance*0.06);
	}
	}
	return price;
}
	
