#include<iostream>
using namespace std;
float discount(string day,string month,float amount);
main()
{
	float amount,result;
	string day,month;
	cout<<"Enter Purchase Day: ";
	cin>>day;
	cout<<"Enter Purchase Month: ";
	cin>>month;
	cout<<"Enter Purchase Amount: ";
	cin>>amount;
	result=discount(day,month,amount);
	cout<<"Payable Amount after discount: "<<result;
}
float discount(string day,string month,float amount)
{
	float total=amount;
	if(day=="Sunday"&&month=="October")
	{
	total=amount-(amount*0.10);
	}
	if(day=="Sunday"&&month!="October")
	{
	total=amount-(amount*0.05);
	}
	return total;
}

	