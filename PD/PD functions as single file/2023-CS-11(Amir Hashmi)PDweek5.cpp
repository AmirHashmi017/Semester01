							//PDWeek05
//Task 2
#include<iostream>
using namespace std;
string volumec(float l,float w,float h,string unit);
main()
{
	float l,w,h;
	string vol,unit;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>>l;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>w;
	cout<<"Enter the height of hte pyramid (in meters): ";
	cin>>h;
	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>>unit;
	vol=volumec(l,w,h,unit);
	cout<<"The volume of the pyramid is: "<<vol;
}
string volumec(float l,float w,float h,string unit)
{
	float volm=(l*w*h)/3;
	string result;
	if(unit=="meters")
	{
	result=to_string(volm)+" cubic meters";
	}
	if(unit=="centimeters")
	{
	volm=volm*100*100*100;
	result=to_string(volm)+ " cubic centimeters";
	}
	if(unit=="millimeters")
	{
	volm=volm*1000*1000*1000;
	result=to_string(volm)+" cubic millimeters";
	}
	if(unit=="kilometers")
	{
	volm=volm/(1000*1000*1000);
	result=to_string(volm)+" cubic kilometers";
	}
	return result;
}
//task3
#include<iostream>
using namespace std;
float taxcalculator(string type,float price);
main()
{
	float price;
	string type;
	float finalprice;
	cout<<"Enter the vehicle type code (M, E, S, V, T): ";
	cin>>type;
	cout<<"Enter the price of the vehicle: $";
	cin>>price;
	finalprice=taxcalculator(type,price);
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalprice;
}
float taxcalculator(string type,float price)
{	
	float taxAmount,total;
	if(type=="M")
	{
	taxAmount=price*(0.06);
	}
	if(type=="E")
	{
	taxAmount=price*(0.08);
	}
	if(type=="S")
	{
	taxAmount=price*(0.10);
	}
	if(type=="V")
	{
	taxAmount=price*(0.12);
	}
	if(type=="T")
	{
	taxAmount=price*(0.15);
	}
	total=price+taxAmount;
	return total;
}
//task4
#include<iostream>
using namespace std;
string projectTimeCalculation(float hoursneeded,float days,float workers);
main()
{
	float hoursneeded,days,workers;
	string result;
	cout<<"Enter the needed hours: ";
	cin>>hoursneeded;
	cout<<"Enter the days that the firm has: ";
	cin>>days;
	cout<<"Enter the number of all workers: ";
	cin>>workers;
	result=projectTimeCalculation(hoursneeded,days,workers);
	cout<<result;
}
string projectTimeCalculation(float hoursneeded,float days,float workers)
{
	float workingdays,workinghours,overtime,totalhours,difference;
	string res;
	workingdays=days-days*(0.1);
	workinghours=workingdays*workers*8;
	overtime=workers*workingdays*2;
	totalhours=workinghours+overtime;
	if(totalhours>hoursneeded)
	{
	difference=totalhours-hoursneeded;
	res="Yes!"+to_string(int(difference))+ " hours left.";
	}
	if(totalhours<hoursneeded)
	{
	difference=hoursneeded-totalhours;
	res="Not enough time!"+to_string(int(difference))+" hours needed.";
	}
	return res;
}