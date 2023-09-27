#include<iostream>
using namespace std;
void discount(string day,int amount);
main()
{
	string day;
	int amount;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	discount(day,amount);
}
void discount(string day,int amount)
{
	int payableamount;
	if(day=="Sunday")
	{
	payableamount=amount-(amount*10/100);
	cout<<"Payable Amount: $"<<payableamount;
	}
	if(day!="Sunday")
	{
	payableamount=amount;
	cout<<"Payable Amount: $"<<payableamount;
	}
}