#include<iostream>
using namespace std;
bool isidentical(string inputs[], int size);
main()
{
	int size;
	cout<<"Enter the size of Array: ";
	cin>>size;
	string inputs[size];
	for(int i=0;i<size;i++)
	{
	cout<<"Enter Element "<<i+1<<": ";
	cin>>inputs[i];
	}
	if(isidentical(inputs,size))
	cout<<"1";
	else
	cout<<"0";
}
bool isidentical(string inputs[], int size)
{
	for(int x=0;x+1<size;x++)
	{
	if(inputs[x]!=inputs[x+1])
	{
	return false;
	}
	}
	return true;
}
