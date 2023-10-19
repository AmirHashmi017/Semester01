#include<iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
	int length;
	cout<<"Enter the length of the Fibonacci series: ";
	cin>>length;
	if(length==1)
	cout<<"0";
	if(length==2)
	cout<<"0, 1";
	if(length>=3)
	generateFibonacci(length);
}
void generateFibonacci(int length)
{
	int n1=0;
	int n2=1;
	cout<<n1<<", "<<n2;
	int next=0;
	for(int x=1;x<=length-2;x++)
	{
	next=n1+n2;
	n1=n2;
	n2=next;
	cout<<", "<<next;
	}
}
