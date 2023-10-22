#include<iostream>
using namespace std;
bool isPrime(int number);
main()
{
	int number;
	cout<<"Enter Number: ";
	cin>>number;
	cout<<isPrime(number);
}
bool isPrime(int number)
{
	bool prime;
	for(int i=2;i<number;i++)
	{
		if(number%i==0)
		{
		prime= false;
		break;
		}
		else
		{
		prime= true;
		}
	}
	return prime;
}