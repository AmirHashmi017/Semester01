#include<iostream>
using namespace std;
string speedstatus(float speed);
main()
{
	float speed;
	string result;
	cout<<"Enter the speed: ";
	cin>>speed;
	result=speedstatus(speed);
	cout<<result;
}
string speedstatus(float speed)
{
	string res;
	if(speed<=10)
	{
	res="slow";
	}
	if(speed>10&&speed<=50)
	{
	res="average";
	}
	if(speed>50&&speed<=150)
	{
	res="fast";
	}
	if(speed>150&&speed<=1000)
	{
	res="ultra-fast";
	}
	if(speed>1000)
	{
	res="extremely fast";
	}
	return res;
}