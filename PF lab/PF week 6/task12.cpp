#include<iostream>
using namespace std;
float income(int row,int column,string type);
main()
{
	int row,column;
	string type;
	float result;
	cout<<"Enter the screening type (Premiere/Normal/Discount): ";
	cin>>type;
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"Enter the number of columns: ";
	cin>>column;
	result=income(row,column,type);
	cout<<result;
}
float income(int row,int column,string type)
{
	float total;
	if(type=="Premiere")
	{
	total=row*column*12.00;
	}
	if(type=="Normal")
	{
	total=row*column*7.50;
	}
	if(type=="Discount")
	{
	total=row*column*5.00;
	}
	return total;
}