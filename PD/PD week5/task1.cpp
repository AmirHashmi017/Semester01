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