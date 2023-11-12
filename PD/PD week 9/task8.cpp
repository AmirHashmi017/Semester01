#include<iostream>
using namespace std;
string findbrokenkeys(string correct,string actual);
main()
{
	string correct,actual;
	cout<<"Enter the correct phrase: ";
	getline(cin,correct);
	cout<<"Enter what you actually typed: ";
	getline(cin,actual);
	cout<<"Broken Keys: "<<findbrokenkeys(correct,actual);
}
string findbrokenkeys(string correct,string actual)
{
	int count=0;
	string result;
	int i=0;
	for(int x=0;correct[x]!='\0';x++)
	{
	count=0;
	for(int n=0;n<x;n++)
	{
	if(correct[x]==correct[n])
	{
	count=count+1;
	}
	}
	if(count==0&&correct[x]!=actual[i])
	result=result+correct[x];
	i++;	
}
return result;
}
