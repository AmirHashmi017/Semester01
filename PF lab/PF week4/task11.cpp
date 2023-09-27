#include<iostream>
using namespace std;
void username (string name);
main()
{
	while(true)
	{
	string name;
	cout<<"Enter your Name: ";
	cin>>name;
	username(name);
	}
}
void username (string name)
{
	cout<<name;
}