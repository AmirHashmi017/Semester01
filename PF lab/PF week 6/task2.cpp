#include<iostream>
using namespace std;
bool parity(int num,int sum);
main()
{
	int num,n;
	int sum=0;
	cout<<"Enter a 3-digit number: ";
	cin>>num;
	n=num;
	sum=sum+(n%10);
	n=n/10;
	sum=sum+(n%10);
	n=n/10;
	sum=sum+(n%10);
	cout<<parity(num,sum);
}
bool parity(int num,int sum)
{
	if((num%2==0&&sum%2==0)||(num%2==1&&sum%2==1))
	{
	return true;
	}
	else
	{
	return false;
	}
}
	