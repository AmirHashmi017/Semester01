#include<iostream>
using namespace std;
int calculatePrice(int money, int year);
main()
{
	int money,year,expenditure;
	cout<<"Enter Money: ";
	cin>>money;
	cout<<"Enter Year: ";
	cin>>year;
	expenditure=calculatePrice(money,year);
	if(expenditure<money)
	{
	expenditure=money-expenditure;
	cout<<"Yes! He will live a carefree life and will have "<<expenditure<<" dollars left.";
	}
	if(expenditure>money)
	{
	expenditure=expenditure-money;
	cout<<"He will need "<<expenditure<<" dollars to survive.";
	}
}
int calculatePrice(int money, int year)
{
	int total=0;
	int price;
	int age=18;
	for(int Syear=1800;Syear<=year;Syear++)
	{
	if(Syear%2==0)
	{
	price=12000;
	}
	else
	{
	price=12000+(50*age);
	}
	total=total+price;
	age++;
	}
	return total;
}
