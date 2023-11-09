#include<iostream>
using namespace std;
int findLargestNumber(int num[], int n);
main()
{
	int n,number;
	int result=0;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter "<<n<<" numbers, one per line:"<<endl;
	int num[n];
	for(int i=0;i<n;i++)
	{
	cin>>num[i];
	}
	result=findLargestNumber(num,n);
	cout<<"The largest number entered is: "<<result;
}
int findLargestNumber(int num[], int n)
{
	int x=0;
	int i=1;
	int great=0;
	while(i<n&&x<n)
	{
	if(num[x]>num[i])
	{
	great=num[x];
	i=i+1;
	}
	else
	{
	great=num[i];
	x=x+2;
	}
	}
	return great;
}
