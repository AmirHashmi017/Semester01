#include<iostream>
using namespace std;
int triangledots(int num);
main()
{
	int num,result;
	cout<<"Enter number of Triangle: ";
	cin>>num;
	result=triangledots(num);
	cout<<"Dots in the Triangle: "<<result;
}
int triangledots(int num)
{
	int dots=0;
	for(int i=1;i<=num;i++)
	{
	dots=dots+i;
	}
	return dots;
}
	