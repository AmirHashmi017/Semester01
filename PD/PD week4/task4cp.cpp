#include<iostream>
using namespace std;
void speed(int x);
main()
{
	int x;
	cout<<"Speed: ";
	cin>>x;
	speed(x);
}
void speed(int x)
{
	if(x>100)
	{
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}
	if(x<=100)
	{
	cout<<"Perfect! You're going good.";
	}
}
