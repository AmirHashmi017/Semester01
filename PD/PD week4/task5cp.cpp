#include<iostream>
using namespace std;
void truefalse(int a, int b);
main()
{
	int a,b;
	cout<<"Enter your position: ";
	cin>>a;
	cout<<"Enter your friend's position: ";
	cin>>b;
	truefalse(a,b);
}
void truefalse(int a, int b)
{
	int c;
	c=b-a;
	if(c<=6)
	{
	cout<<"true";
	}
	if(c>6)
	{
	cout<<"false";
	}
}