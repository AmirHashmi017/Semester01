#include<iostream>
using namespace std;
main()
{
	int min;
	int fr;
	int tf;
	cout<<"Number of Minutes: ";
	cin>>min;
	cout<<"Frames per Second: ";
	cin>>fr;
	tf=fr*(min*60);
	cout<<"Total Number of Frames: "<<tf;
}