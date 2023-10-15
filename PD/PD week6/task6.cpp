#include<iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
string month,result;
int numberOfStays;
cout<<"Enter the month (May, June, July, August, September, October): ";
cin>>month;
cout<<"Enter the number of stays: ";
cin>>numberOfStays;
result=calculateHotelPrices(month,numberOfStays);
cout<<result;
}
string calculateHotelPrices(string month, int numberOfStays)
{
	float stamount,apamount;
	if(month=="May"||month=="October")
	{
	stamount=50*numberOfStays;
	apamount=65*numberOfStays;
	}
	else if(month=="June"||month=="September")
	{
	stamount=75.20*numberOfStays;
	apamount=68.70*numberOfStays;
	}
	else if(month=="July"||month=="August")
	{
	stamount=76*numberOfStays;
	apamount=77*numberOfStays;
	}
	if((numberOfStays>7&&numberOfStays<=14)&&(month=="May"||month=="October"))
	{
	stamount=stamount-(stamount*0.05);
	}
	if((numberOfStays>14)&&(month=="May"||month=="October"))
	{
	stamount=stamount-(stamount*0.30);
	}
	if((numberOfStays>14)&&(month=="June"||month=="September"))
	{
	stamount=stamount-(stamount*0.20);
	}
	if(numberOfStays>14)
	{
	apamount=apamount-(apamount*0.10);
	}
	return "Apartment: "+to_string(apamount)+"$."+"\nStudio: "+to_string(stamount)+"$.";
}	
	
