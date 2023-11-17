#include<iostream>
using namespace std;
void reversewords (string input);
main()
{
	string input;
	cout<<"Enter a string: ";
	getline(cin,input);
	reversewords (input);
}
void reversewords (string input)
{
	int l=0;
	for(int i=0;input[i]!='\0';i++)
	{
	if(input[i]==' ')
	l++;
	}
	int n=0;
	string word[l+1];
	for(int i=0;input[i]!='\0';i++)
	{
	if(input[i]!=' ')
	word[n]=word[n]+input[i];
	else if(input[i]==' ')
	n++;
	}
	cout<<"Reversed string: ";
	for(int x=l;x>=0;x--)
	{
	if(x!=0)
	cout<<word[x]<<" ";
	else
	cout<<word[x];
}
}
