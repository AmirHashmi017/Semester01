#include<iostream>
using namespace std;
string projectTimeCalculation(float hoursneeded,float days,float workers);
main()
{
	float hoursneeded,days,workers;
	string result;
	cout<<"Enter the needed hours: ";
	cin>>hoursneeded;
	cout<<"Enter the days that the firm has: ";
	cin>>days;
	cout<<"Enter the number of all workers: ";
	cin>>workers;
	result=projectTimeCalculation(hoursneeded,days,workers);
	cout<<result;
}
string projectTimeCalculation(float hoursneeded,float days,float workers)
{
	float workingdays,workinghours,overtime,totalhours,difference;
	string res;
	workingdays=days-days*(0.1);
	workinghours=workingdays*workers*8;
	overtime=workers*workingdays*2;
	totalhours=workinghours+overtime;
	if(totalhours>hoursneeded)
	{
	difference=totalhours-hoursneeded;
	res="Yes!"+to_string(int(difference))+ " hours left.";
	}
	if(totalhours<hoursneeded)
	{
	difference=hoursneeded-totalhours;
	res="Not enough time!"+to_string(int(difference))+" hours needed.";
	}
	return res;
}
	