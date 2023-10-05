#include<iostream>
using namespace std;
string cases(char ch);
main()
{
	char ch;
	string result;
	cout<<"Enter a character (A/a): ";
	cin>>ch;
	result=cases(ch);
	cout<<result;
	
}
string cases(char ch)
{
	string res;
	if(ch=='A')
	{
	res="You have entered Capital A";
	}
	if(ch=='a')
	{
	res="You have entered small a";
	}
	return res;
}
	