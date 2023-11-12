#include<iostream>
using namespace std;
void longest7segmentword(string words[],int n);
main()
{
	int n;
	cout<<"Enter the number of words: ";
	cin>>n;
	string words[n];
	cout<<"Enter the words, one by one: "<<endl;
	for(int i=0;i<n;i++)
	{
	cin>>words[i];
	}
	longest7segmentword(words,n);
}
void longest7segmentword(string words[],int n)
{
	string great;
	int p=0;
	int length[n];
	int count=0;
	for(int x=0;x<n;x++)
	{
	count=0;
	for(int l=0;words[x][l]!='\0';l++)
	{
	if(words[x][l]=='k'||words[x][l]=='m'||words[x][l]=='v'||words[x][l]=='w'||words[x][l]=='x')
	{
	count=0;
	p=p+1;
	break;
	}
	else
	count=count+1;
}
	length[x]=count;
	}
	if(p==n)
	cout<<"";
	else
	{
	int p=1;
	int s=0;
	while(p<n&&s<n)
	{
	if(length[s]>=length[p])
	{
	great=words[s];
	p++;
	}
	else
	{
	great=words[p];
	s=s+2;
	}
	}
	cout<<"Longest 7-segment word: "<<great;}
}
