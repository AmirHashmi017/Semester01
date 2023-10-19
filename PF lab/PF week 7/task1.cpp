#include<iostream>
using namespace std;
void printTable(int number);
main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	printTable(number);
}
void printTable(int number)
{
	int i=1;
	int product=1;
	while(i<=10)
	{
	product=number*i;
	cout<<number<<" x "<<i<<" = "<<product<<endl;
	i=i+1;
	}
}