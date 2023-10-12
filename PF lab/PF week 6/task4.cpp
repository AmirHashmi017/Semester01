#include<iostream>
using namespace std;
float Greater(float a,float b,float c);
main()
{
	float a,b,c,result;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Enter the third number: ";
	cin>>c;
	result=Greater(a,b,c);
	cout<<"The greatest number among "<<a<<", "<<b<<", and "<<c<<" is: "<<result;
}
float Greater(float a,float b,float c)
{
	float res;
	if(a>=b&&a>=c)
	{
	res=a;
	}
	if(b>=a&&b>=c)
	{
	res=b;
	}
	if(c>=a&&c>=b)
	{
	res=c;
	}
	return res;
}
