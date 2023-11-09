#include<iostream>
using namespace std;
void jazzifyChords(string chords[], int numchords);
main()
{
	int numchords;
	cout<<"Enter the number of chords: ";
	cin>>numchords;
	string chords[numchords];
	cout<<"Enter "<<numchords<<" chords, one per line: "<<endl;
	for(int i=0;i<numchords;i++)
	{
	cin>>chords[i];
	}
	jazzifyChords(chords,numchords);
}
void jazzifyChords(string chords[], int numchords)
{
	cout<<"Jazzified chords: [";
	for(int x=0;x<numchords;x++)
	{
	if(chords[x][1]=='7')
	{
	if(x==numchords-1){
	cout<<chords[x]<<"]";}
	else{
	cout<<chords[x]<<", ";}
	}
	else
	{
	if(x==numchords-1){
	cout<<chords[x]<<"7]";}
	else{
	cout<<chords[x]<<"7, ";}
	}
	}
}
