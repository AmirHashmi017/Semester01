#include<iostream>
using namespace std;
string decideactivity(string temp,string humidity);
main()
{
	string temp,humidity,result;
	cout<<"Enter temperature (warm or cold): ";
	cin>>temp;
	cout<<"Enter humidity (dry or humid): ";
	cin>>humidity;
	result=decideactivity(temp,humidity);
	cout<<"Recommended activity: "<<result;
}
string decideactivity(string temp,string humidity)
{
	string res;
	if(temp=="warm")
	{
	if(humidity=="dry")
	{
	res="Play tennis";
	}
	if(humidity=="humid")
	{
	res="Swim";
	}
	}
	if(temp=="cold")
	{
	if(humidity=="dry")
	{
	res="Play basketball";
	}
	if(humidity=="humid")
	{
	res="Watch TV";
	}
	}
	return res;
}
	
