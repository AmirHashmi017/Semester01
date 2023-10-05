#include<iostream>
using namespace std;
string evenodd(int sum);
main()
{
	int n,sum;
	string result;
	sum=0;
	cout<<"Enter a five-digit number: ";
	cin>>n;
	sum=sum+n%10;
	n=n/10;
	sum=sum+n%10;
	n=n/10;
	sum=sum+n%10;
	n=n/10;
	sum=sum+n%10;
	n=n/10;
	sum=sum+n%10;
	n=n/10;
	result=evenodd(sum);
	cout<<result;
}
string evenodd(int sum)
{
	string res;
	if(sum%2==0)
	{
	res="Evenish";
	}
	if(sum%2!=0)
	{
	res="Oddish";
	}
	return res;
}


	