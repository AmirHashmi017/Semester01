#include<iostream>
using namespace std;
main()
{
	int V;
	float I;
	float p;
	cout<<"Enter voltage (in volts): ";
	cin>>V;
	cout<<"Enter current (in amperes): ";
	cin>>I;
	p=V*I;
	cout<<"The power is "<<p<<" watts.";
}
	
	