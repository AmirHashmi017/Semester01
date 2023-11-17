#include<iostream>
using namespace std;
int calculatevolume(int dimensions[],int n);
main()
{
	int n;
	cout<<"Enter the number of boxes: ";
	cin>>n;
	int dimensions[n*3];
	cout<<"Enter the dimensions of the boxes (length, width, height): \n";
	for(int i=0;i<(n*3);i++){
	cin>>dimensions[i];}
	cout<<"Total volume of all boxes: "<<calculatevolume(dimensions,n);
}
int calculatevolume(int dimensions[],int n)
{
	int i=0;
	int volume=0;
	for(int x=0;x<n;x++)
	{
	volume=volume+(dimensions[i]*dimensions[i+1]*dimensions[i+2]);
	i=i+3;
	}
	return volume;
}
	
