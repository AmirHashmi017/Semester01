#include<iostream>
using namespace std;
void bigger(int x,int y);
main()
{
	int x,y;
	cout<<"Enter the number of hours: ";
	cin>>x;
	cout<<"Enter the number of minutes: ";
	cin>>y;
	bigger(x,y);
}
void bigger(int x,int y)
{
	int z;
	z=x*60;
	if(z>y)
	{
	cout<<x;
	}
	if(z<y)
	{
	cout<<y;
	}
}