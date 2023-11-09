#include<iostream>
using namespace std;
void reversenum(int num[],int n);
main()
{
	int n;
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
	}
	reversenum(num,n);
}
void reversenum(int num[],int n)
{
	cout<<"Numbers in reverse order: ";
	for(int x=n-1;x>=0;x--)
	{
	cout<<num[x]<<" ";
	}
}