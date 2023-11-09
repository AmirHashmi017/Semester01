#include<iostream> 
using namespace std;
void wordpostmortem(string word);
main()
{
	string word;
	cout<<"Enter a word: ";
	cin>>word;
	wordpostmortem(word);
}
void wordpostmortem(string word)
{
	for(int x=0;word[x]!='\0';x++)
	{
	cout<<word[x]<<" found at position "<<x<<endl;
	}
}