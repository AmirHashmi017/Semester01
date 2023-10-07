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