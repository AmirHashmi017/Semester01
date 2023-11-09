#include<iostream>
using namespace std;
void insertarrayinmiddle(int arrayone[],int no,int arraytwo[],int nt);
main()
{
	int no,nt;
	cout<<"Enter the number of elements for the first array (must be 2): ";
	cin>>no;
	int arrayone[no];
	cout<<"Enter 2 elements for the first array, one per line: "<<endl;
	for(int n=0;n<no;n++){
	cin>>arrayone[n];}
	cout<<"Enter the number of elements for the second array: ";
	cin>>nt;
	int arraytwo[nt];
	cout<<"Enter "<<nt<<" elements for the second array, one per line: "<<endl; 
	for(int i=0;i<nt;i++)
	{
	cin>>arraytwo[i];
	}
	insertarrayinmiddle(arrayone,no,arraytwo,nt);
}
void insertarrayinmiddle(int arrayone[],int no,int arraytwo[],int nt)
{
	cout<<"Resulting array: ["<<arrayone[0]<<", ";
	for(int x=0;x<nt;x++)
	{
	cout<<arraytwo[x]<<", ";
	}
	cout<<arrayone[1]<<"]";
}
