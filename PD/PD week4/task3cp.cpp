#include<iostream>
using namespace std;
void discount(string cn,float price);
main()
{
	string cn;
	float price;
	cout<<"Enter the country's name: ";
	cin>>cn;
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;
	discount(cn,price);
}
void discount(string cn,float price)
{
	float payableamount;
	if(cn=="Pakistan")
	{
	payableamount=price-(price*5/100);
	}
	if(cn=="Ireland")
	{
	payableamount=price-(price*10/100);
	}
	if(cn=="India")
	{
	payableamount=price-(price*20/100);
	}
	if(cn=="England")
	{
	payableamount=price-(price*30/100);
	}
	if(cn=="Canada")
	{
	payableamount=price-(price*45/100);
	}
	cout<<"Final ticket price after discount: $"<<payableamount;
}
