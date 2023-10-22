#include <iostream>
using namespace std;
int isPrime(int prime);
int primorial(int num);
main()
{
  	int num;
    	cout << "Enter Number: ";
    	cin>>num;	
    	primorial(num);
}
int primorial(int num)
	{
	int p;
	int i=1;
    	int result=1;
    	int prime=2;
    	while(i<number)
	{
        p=isPrime(prime);
	if(p==1)
	{
        result=result*prime;
        i++;
        }
        x++;
    	}
    	cout <<result;     
}
int isPrime(int prime)
{
   	int c;
	int res; 
    	for(int n=2;x<prime;n++)
    	{
        c=prime%n;
        if(c==0)
	{
        res=0;
        break;
        }
	else
	res=1;
    	}
	return res;
}