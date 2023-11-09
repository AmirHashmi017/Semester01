#include<iostream> 
using namespace std;
void reverseword(string word);
main()
{
	string word;
	cout<<"Enter a string: ";
	cin>>word;
	reverseword(word);
}
void reverseword(string word)
{
	int x=0;
	while(word[x]!='\0')
	{
	x=x+1;
	}
	cout<<"Reversed String: ";
	for(int i=x-1;i>=0;i--)
	{
	cout<<word[i];
	}
}