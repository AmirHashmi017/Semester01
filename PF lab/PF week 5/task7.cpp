#include<iostream>
using namespace std;
string symmetric(int reverse,int num);
main()
{
	int num;
	string result;
	int reverse=0;
	cout<<"Enter a three-digit number: ";
	cin>>num;
	int n=num;
	reverse=reverse*10+num%10;
	num=num/10;
	reverse=reverse*10+num%10;
	num=num/10;
	reverse=reverse*10+num%10;
	num=num/10;
	result=symmetric(reverse,n);
	cout<<result;
}
string symmetric(int reverse,int n)
{
	string res;
	if(reverse==n)
	{
	res="The number is symmetrical.";
	}
	if(reverse!=n)
	{
	res="The number is not symmetrical.";
	}
	return res;
}
	

	