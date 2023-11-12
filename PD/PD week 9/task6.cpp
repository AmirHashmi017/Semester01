#include<iostream>
using namespace std;
int coloringTime(string col[], int size);
main()
{
	int size,result;
	cout<<"Enter the size of Array: ";
	cin>>size;
	string col[size];
	for(int x=0;x<size;x++)
	{
	cout<<"Enter Element "<<x+1<<": ";
	cin>>col[x];
	}
	result=coloringTime(col,size);
	cout<<"Time to color: "<<result<<" seconds";
}
int coloringTime(string col[], int size)
{
	int time=0;
	for(int i=0;i<size;i++)
	{
	time=time+2;
	}
	for(int x=0;x+1<size;x++)
	{
	if(col[x]!=col[x+1])
	time=time+1;
	}
	return time;
}

