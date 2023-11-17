#include<iostream>
using namespace std;
int countletter(string input[],int n,char letter);
main()
{
	int n;
	char letter;
	cout<<"Enter how many words you want to enter: ";
	cin>>n;
	string input[n];
	for(int i=0;i<n;i++){
	cout<<"Enter word "<<i+1<<": ";
	cin>>input[i];}
	cout<<"Enter the letter you want to count: ";
	cin>>letter;
	int result=countletter(input,n,letter);
	cout<<letter<<" shows up "<<result<<" times in the data.";
}
int countletter(string input[],int n,char letter)
{
	int count=0;
	for(int x=0;x<n;x++)
	{
	for(int i=0;input[x][i]!='\0';i++)
	{
	if(input[x][i]==letter)
	{
	count++;
	}
	}
	}
	return count;
}
	