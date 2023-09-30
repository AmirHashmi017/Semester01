#include<iostream>
using namespace std;
void Negate(string x);
main()
{
	string x;
	cout<<"Enter 'true' or 'false': ";
	cin>>x;
	Negate(x);
}
void Negate(string x)
{
	if(x=="true")
	{
	cout<<"false";
	}
	if(x=="false")
	{
	cout<<"true";
	}
}