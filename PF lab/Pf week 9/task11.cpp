#include<iostream>
using namespace std;
main()
{
 	string input;
	int count=0;
	cout<<"Enter a string: ";
	getline(cin,input);
	string vowels="AEIOUaeiou";
	cout<<"String with vowels removed: ";
	for(int n=0;input[n]!='\0';n++)
	{
	count=0;
	for(int x=0;x<10;x++)
	{
	if(input[n]==vowels[x])
	count=1;
	}
	if(count==0)
	cout<<input[n];
	}
}
	
