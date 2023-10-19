#include<iostream>
using namespace std;
int calculateMoney(int age, int machineprice,int toyprice);
main()
{
	int age,machineprice,toyprice,difference,total;	
	cout<<"Enter Lilly's age: ";
	cin>>age;
	cout<<"Enter the price of the waching machine: ";
	cin>>machineprice;
	cout<<"Enter the unit price of each toy: ";
	cin>>toyprice;
	total=calculateMoney(age,machineprice,toyprice);
	if(total>machineprice)
	{
	cout<<"Yes!"<<endl;
	difference=total-machineprice;
	}
	else if(total<machineprice)
	{
	cout<<"No!"<<endl;
	difference=machineprice-total;
	}
	else
	cout<<difference;
}
int calculateMoney(int age, int machineprice,int toyprice)
{
	int saving=0;
	int money=0;
	int gift=10;
	int toy=0;
	for(int year=1;year<=age;year++)
	{
	if(year%2==0)
	{
	money=(money+gift)-1;
	gift=gift+10;
	}
	else
	{
	toy=toy+1;
	}
	}
	saving=money+(toy*toyprice);
	return saving;
}
	







	
