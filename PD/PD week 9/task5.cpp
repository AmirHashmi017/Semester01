#include<iostream>
using namespace std;
int howmanyisidentical(string input1,string input2);
main()
{
	string input1,input2;
	cout<<"Enter the first string: ";
	cin>>input1;
	cout<<"Enter the second string: ";
	cin>>input2;
	cout<<"Number of common characters: "<<howmanyisidentical(input1,input2);
}
int howmanyisidentical(string input1,string input2)
{	int count=0;
	for(int i=0;input1[i]!='\0';i++)
	{
	for(int x=0;input2[x]!='\0';x++)
	{
	if(input1[i]==input2[x])
	{
	input2[x]=' ';
	count++;
	break;
	}
	}
	}
	return count;
}
