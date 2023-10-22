#include<iostream>
using namespace std;
void numberamplify(int num);
main()
{
	int num;
	cout<<"Enter the number to amplify: ";
	cin>>num;
	numberamplify(num);
}
void numberamplify(int num)
{
	int i;
	for(int n=1;n<=num;n++)
	{
	if(n%4==0)
	{
	i=n*10;
	cout << i;
	}
	else
	cout<<n;
	if(n==num)
	{
	continue;
	}
	cout<<", "; 
	
	}
}