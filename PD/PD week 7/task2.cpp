#include<iostream>
using namespace std;
void printupperpart(int row);
void printlowerpart(int row);
main()
{
	int row;
	cout<<"Enter desired number of rows: ";
	cin>>row;
	printupperpart(row);
	printlowerpart(row);
}
void printupperpart(int row)
{
	int i=(row+2)/2;
	for(int printrow=(row+2)/2;printrow>=1;printrow--)
	{
	for(int space=1;space<printrow;space++)
	{
	cout<<" ";
	}
	for(int column=i;column>=printrow;column--)
	{
	cout<<"*";
	}
	cout<<""<<endl;
	}
}
void printlowerpart(int row)
{
	int i=(row+2)/2;
	for(int printrow=1;printrow<=i;printrow++)
	{
	for(int space=1;space<printrow;space++)
	{
	cout<<" ";
	}
	for(int column=i;column>=printrow;column--)
	{
	cout<<"*";
	}
	cout<<""<<endl;
	}
}