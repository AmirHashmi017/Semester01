#include<iostream>
using namespace std;
bool isAlreadyEntered(int num[], int i, int number);
main()
{
	int n,number;
	cout<<"Enter the number of elements: ";
	cin>>n;
	if(n<=0)
	cout<<"Invalid input. Number of elements must be  greater than 0.";
	else
	cout<<"Enter "<<n<<" numbers, one per line: "<<endl;
	int num[n];
	for(int i=0;i<n;i++)
	{
	cin>>num[i];
	number=num[i];
	if(isAlreadyEntered(num,i,number))
	{
	cout<<"Already Entered: "<<number<<endl;
	}
	}
	cout<<"Unique numbers entered: ";
	bool result;
	for(int i=0;i<n;i++)
	{
	number=num[i];
	if(isAlreadyEntered(num,i,number))
	{
	}
	else
	cout<<num[i]<<" ";
}
}
bool isAlreadyEntered(int num[], int i, int number)
{
	int count=0;
	for(int x=0;x<=i-1;x++)
	{
	if(num[x]==number)
	count++;
	}
	if(count==0)
	return false;
	else
	return true;
}
