#include<iostream>
using namespace std;
bool checkequal(float a,float b,float c);
main()
{
	float a,b,c,result;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Enter the third number: ";
	cin>>c;
	cout<<checkequal(a,b,c);
}
bool checkequal(float a,float b,float c)
{
	if(a==b&&b==c)
	{
	return true;
	}
	else
	{
	return false;
	}
}