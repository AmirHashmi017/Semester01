#include<iostream>
using namespace std;
int totalDigits(int number);
main()
{
	int number,result;
	cout<<"Enter a number: ";
	cin>>number;
	result=totalDigits(number);
	cout<<"Total number of digits: "<<result;
}
int totalDigits(int number)
{	
	if(number<0)
	number=-1*(number);
	int n=0;
	while(number>0)
	{
	number=number/10;
	n=n+1;
	}
	return n;
}
