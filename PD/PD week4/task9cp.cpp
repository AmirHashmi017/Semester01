#include<iostream>
using namespace std;
void buy(int tp,int people);
main()
{
	int tp,people;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	buy(tp,people);
}
void buy(int tp,int people)
{
	int sheets,usheets,days;
	sheets=tp*500;
	usheets=(people*57);
	days=sheets/usheets;
	if(days>=14)
	{
	cout<<"Your TP will last "<<days<<" days, no need to panic!";
	}
	if(days<14)
	{
	cout<<"Your TP will only last "<<days<<" days, buy more!";
	}
}
	
	