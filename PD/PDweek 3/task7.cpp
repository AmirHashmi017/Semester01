#include<iostream>
using namespace std;
main()
{
	string mn;
	float at;
	float ct;
	float na;
	float nc;
	float ch;
	float ag,dc,ra;
	cout<<"Enter the movie name: ";
	cin>>mn;
	cout<<"Enter the adult ticket price: $";
	cin>>at;
	cout<<"Enter the child ticket price: $";
	cin>>ct;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>na;
	cout<<"Enter the number of child tickets sold: ";
	cin>>nc;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>ch;
	ag=na*at+nc*ct;
	dc=(ch/100)*ag;
	ra=ag-dc;
	cout<<endl;
	cout<<"Movie: "<<mn<<endl;
	cout<<"Total amount generated from ticket sales: $"<<ag<<endl;
	cout<<"Donation to charity ("<<ch<<"%): $"<<dc<<endl;
	cout<<"Remaining amount after donation: $"<<ra;
}
	
	
