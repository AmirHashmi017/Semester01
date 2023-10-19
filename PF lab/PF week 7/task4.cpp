#include<iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
	int number,digit,result;
	cout<<"Enter a number: ";
	cin>>number;
	cout<<"Enter the digit to check: ";
	cin>>digit;
	result=frequencyChecker(number,digit);
	cout<<"Frequency: "<<result;
}
int frequencyChecker(int number, int digit)
{
	int freq=0;
	int n=number%10;
	while(number>=1)
	{
	if(n==digit)
	freq=freq+1;
	number=number/10;
	n=number%10;
	}
	return freq;
}