#include<iostream> 
using namespace std;
void shiftword(string word);
main()
{
	string word;
	cout<<"Enter a String: ";
	getline(cin,word);
	shiftword(word);
}
void shiftword(string word)
{
	cout<<"Shifted String: ";
	for(int x=0;word[x]!='\0';x++)
	{
	if(word[x]=='z')
	cout<<"a";
	else if(word[x]=='Z')
	cout<<"A";
	else if(word[x]==' ')
	cout<<" ";
	else
	{
	int shift=word[x];
	shift=shift+1;
	char ascii=shift;
	cout<<ascii;
}
	}
}
