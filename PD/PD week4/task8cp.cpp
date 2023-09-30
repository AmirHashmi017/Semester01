#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}
void pet(int holidays)
{
	int wdays,playtime,norm,difference,hours,minutes;
	wdays=365-holidays;
	playtime=wdays*63+holidays*127;
	norm=30000;
	if(playtime<norm)
	{
	difference=norm-playtime;
	hours=difference/60;
	minutes=difference-(hours*60);
	cout<<"Tom sleeps well"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes less for play";
	}
	if(playtime>norm)
	{
	difference=playtime-norm;
	hours=difference/60;
	minutes=difference-(hours*60);
	cout<<"Tom will run away"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes for play";
	}
}