#include<iostream>
using namespace std;
main()
{
	int num;
	int a,b,c,d,sum;
	cout<<"Enter a 4-digit number: ";
	cin>>num;
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	d=num%10;
	sum=a+b+c+d;
	cout<<"Sum of the individual digits: "<<sum;
}

	
	