#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
	int number,result;
	cout<<"Enter a number: ";
	cin>>number;
	result=digitSum(number);
	cout<<"Sum of digits: "<<result;
}
int digitSum(int number)
{
	int sum=0;
	int n=number%10;
	while(number>=1)
	{
	sum=sum+n;
	number=number/10;
	n=number%10;
	}
	return sum;
}
