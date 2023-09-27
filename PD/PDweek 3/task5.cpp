#include<iostream>
using namespace std;
main()
{
	string name;
	float wl;
	float days;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>wl;
	days=wl*15;
	cout<<name<<" will need " <<days<<" days to lose "<<wl<<" kg of weight by following the doctor's suggestions";
}
	