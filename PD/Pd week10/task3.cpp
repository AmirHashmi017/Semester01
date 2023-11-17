#include<iostream>
using namespace std;
bool isrepeating(int input[],int n,int length);
main()
{
	int n,length;
	cout<<"Enter the length of the array: ";
	cin>>n;
	int input[n];
	cout<<"Enter the elements of the array: \n";
	for(int i=0;i<n;i++){
	cin>>input[i];}
	cout<<"Enter the length of the cycle: ";
	cin>>length;
	if(isrepeating(input,n,length))
	cout<<"Output: 1";
	else
	cout<<"Output: 0";
}
bool isrepeating(int input[],int n,int length)
{
	if(length>n)
	return true;
	else
	{
	for (int i=1;i+length<n;i++)
	{
	if(input[i+length]!=input[i])
	return false;
	}
	return true;}
}