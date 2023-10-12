#include<iostream>
using namespace std;
string status (int age,string gender);
main()
{
	int age;
	string gender,result;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your gender (m/f): ";
	cin>>gender;
	result=status(age,gender);
	cout<<"Your personal title is: "<<result;
}
string status (int age,string gender)
{
	string res;
	if(age>=16&&gender=="m")
	{
	res="Mr.";
	}
	if(age<16&&gender=="m")
	{
	res="Master";
	}
	if(age>=16&&gender=="f")
	{
	res="Ms.";
	}
	if(age<16&&gender=="f")
	{
	res="Miss";
	}
	return res;
}