#include<iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
main()
{
	int size,n;
	cout<<"Enter the size of Array: ";
	cin>>size;
	int arr[size];
	for(int x=0;x<size;x++)
	{
	cout<<"Enter Element "<<x+1<<": ";
	cin>>arr[x];
	}
	cout<<"Enter number of times even-odd transformation need to be done: ";
	cin>>n;
	evenOddTransform(arr,size,n);
}
void evenOddTransform(int arr[], int size, int n)
{
	for(int count=1;count<=n;count++)
	{
	for(int i=0;i<size;i++)
	{
	if(arr[i]%2==0)
	{
	arr[i]=arr[i]-2;
	}
	else
	{
	arr[i]=arr[i]+2;
	}
	}
	}
	cout<<"[";
	for(int p=0;p<size;p++)
	{
	if(p==size-1)
	cout<<arr[p]<<"]";
	else
	cout<<arr[p]<<", ";
	}
}	
