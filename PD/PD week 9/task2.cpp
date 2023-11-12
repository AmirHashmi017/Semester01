#include<iostream>
using namespace std;
string containsSeven(int numbers[], int size);
main()
{
	int size;
	string result;
	cout<<"Enter the size of Array: ";
	cin>>size;
	int numbers[size];
	for(int i=0;i<size;i++)
	{
	cout<<"Enter Element "<<i+1<<": ";
	cin>>numbers[i];
	}
	cout<<containsSeven(numbers,size);
}
string containsSeven(int numbers[], int size)
{
	int i,j,k;
	string res="there is no 7 in the array";
    	for(int x=0;x<size;x++)
    	{
        k=numbers[x];
        while(k!=0)
        {
        i=k%10;
        j=k/10;
        k=j;
	if(i==7)
	{
        res="Boom!";
        break;
        }
        }
    	}
    	return res;
}
