#include<iostream>
using namespace std;
main()
{
	int population;
	int birthrate;
	int TP;
	cout<<"Enter the current world population: ";
	cin>>population;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>birthrate;
	TP=birthrate*360+population;
	cout<<"The population in three decades will be: "<<TP;
}
	