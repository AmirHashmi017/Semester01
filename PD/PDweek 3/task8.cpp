#include<iostream>
using namespace std;
main()
{
	float vp,fp;
	float kgv,kgf;
	float earning;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vp;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fp;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>kgv;
	cout<<"Enter total kilograms of fruits: ";
	cin>>kgf;
	earning=(vp*kgv+fp*kgf)/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<earning;
}