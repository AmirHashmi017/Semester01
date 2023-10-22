#include<iostream>
using namespace std;
void printstars(int row);
main()
{
	int row;
	cout<<"Enter desired number of rows: ";
	cin>>row;
	printstars(row);
}
void printstars(int row)
{
	int column;
	for(int printrow=row;printrow>=1;printrow--)
	{
	for(column=1;column<=printrow;column++)
	{
	cout<<"*";
	}
	cout<<""<<endl;
	}
}