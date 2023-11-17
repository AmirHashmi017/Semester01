#include<iostream>
using namespace std;
int min();
int num[10];
int count=0;
main()
{
	cout<<"Enter the weights of the 10 packages: \n";
	for(int i=0;i<10;i++)
	cin>>num[i];
	cout<<"Sorted array in ascending order: [";
	while(count<10){
	if(count==9)
	cout<<min()<<"]";
	else
	cout<<min()<<", ";}
}
int min()
{
	int less=0;
	int add=0;
	int y=1;
	int x=0;
	while(x<10&&y<10)
	{
	if(num[x]<=num[y])
	{
	less=num[x];
	add=x;
	y=y+1;
	}
	else if(num[y]<num[x])
	{
	less=num[y];
	add=y;
	x=x+2;
	}
	} 
	count=count+1;
	num[add]=1000;
	return less;
}
