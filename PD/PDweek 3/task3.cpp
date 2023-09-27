#include<iostream>
using namespace std;
main()
{
	float iv;
	float a;
	float t;
	float fv;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>iv;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>a;
	cout<<"Enter Time (s): ";
	cin>>t;
	fv=a*t+iv;
	cout<<"Final Velocity (m/s): "<<fv;
}