#include<iostream>
using namespace std;
int rotation(string directions[],int n);
main()
{
	int n;
	cout<<"Enter the length of the array: ";
	cin>>n;
	string direction[n];
	cout<<"Enter the elements of the array (\"left\" or \"right\"): \n";
	for(int i=0;i<n;i++)
	{
	cin>>direction[i];
	}
	cout<<"Number of full rotations: "<<rotation(direction,n);
}
int rotation(string direction[],int n)
{
	int rot;
	int result=0;
	for(int i=0;i<n;i++)
	{
	if(direction[i]=="right")
	result=result+90;
	else if(direction[i]=="left")
	result=result-90;
	}
	rot=result/360;
	return rot;
}