#include<iostream>
using namespace std;
bool islengtheven(string given);
main()
{
	string given;
	cout<<"Enter a String: ";
	cin>>given;
	if(islengtheven(given))
	cout<<"1";
	else
	cout<<"0";
}
bool islengtheven(string given)
{
	int length=0;
	for(int i=0;given[i]!='\0';i++)
	{
	length=length+1;
	}
	if(length%2==0)
	return true;
	else
	return false;
}
	