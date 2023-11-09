#include<iostream>
using namespace std;
bool isSpecialArray(int arr[], int size);
main()
{
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter "<<size<<" elements of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
	cin>>arr[i];
	}
	if(isSpecialArray(arr,size))
	{
	cout<<"The array is special";
	}
	else
	{
	cout<<"The array is not special";
	}
}
bool isSpecialArray(int arr[], int size)
{
	for(int x=0;x<size;x++)
	{
	if(x%2!=0&&arr[x]%2==0||x%2==0&&arr[x]%2!=0)
	return false;
	}
	return true;
}

	
