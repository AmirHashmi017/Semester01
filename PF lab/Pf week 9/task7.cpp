#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int n);
main()
{
	int n;
	double result;
	cout<<"Enter the number of resistors in the series circuit: ";
	cin>>n;
	double resistance[n];
	cout<<"Enter the resistance values (in ohms) of the "<<n<<" resistors, one per line: "<<endl;
	for(int i=0;i<n;i++)
	{
	cin>>resistance[i];
	}
	result=calculateTotalResistance(resistance,n);
	cout<<"The total resistance of the series circuit  is "<<result<<" ohms.";
}
double calculateTotalResistance(double resistance[], int n)
{
	double total=0.0;
	for(int x=0;x<n;x++)
	{
	total=total+resistance[x];
	}
	return total;
}
