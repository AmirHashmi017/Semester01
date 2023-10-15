#include<iostream>
using namespace std;
float amount (char service,char time,float min);
main()
{
	char service,time;
	string type;
	float min,tamount;
	cout<<"Enter the service code (R/r for regular, P/p for premium): ";
	cin>>service;
	if(service=='P'||service=='p')
	{
	cout<<"Enter time of the call (D/d for day, N/n for night): ";
	cin>>time;
	type="Premium";
	}
	cout<<"Enter the number of minutes used: ";
	cin>>min;
	if(service=='R'||service=='r')
	{
	type="Regular";
	}
	tamount=amount (service,time,min);
	cout<<"Service Type: "<<type<<endl;
	cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
	cout<<"Amount Due: $"<<tamount;
}
float amount (char service,char time,float min)
{	
	float total,diff;
	if(service=='R'||service=='r')
	{
		if(min<=50)
		{
		total=10;
		}
		else
		{
		diff=min-50;
		total=10+(diff*0.20);
		}
	}
	if(service=='P'||service=='p')
	{
		if((time=='D'||time=='d')&&(min<=75))
		{
		total=25;
		}
		else if((time=='D'||time=='d')&&(min>75))
		{
		diff=min-75;
		total=25+(diff*0.10);
		}
		else if((time=='N'||time=='n')&&(min<=100))
		{
		total=25;
		}
		else if((time=='D'||time=='d')&&(min>100))
		{
		diff=min-100;
		total=25+(diff*0.05);
		}
	}
	return total;
}