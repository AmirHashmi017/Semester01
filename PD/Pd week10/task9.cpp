#include<iostream>
using namespace std;
int special(int n,int num[]);
main()
{
	int n;
	cout<<"Enter the length of the array: ";
	cin>>n;
	int num[n];
	cout<<"Enter the elements of the array: \n";
	for(int i=0;i<n;i++)
	cin>>num[i];
	cout<<"Special value: "<<special(n,num);
}
int special(int n,int num[])
{
	int count=0;
	int sp=0;
	for(int x=0;x<n;x++){
	if(num[x]>0)
	count=count+1;}
	for(int i=0;i<n;i++)
	{
	if(num[i]>0&&num[i]>=count)
	{
	sp=sp+1;
	}}
	if(sp==0)
	return -1;
	else
	return sp;
}
