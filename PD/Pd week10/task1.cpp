#include<iostream>
using namespace std;
int progress(int miles[],int n);
main()
{
	int n;
	cout<<"Enter the number of Saturdays: ";
	cin>>n;
	int miles[n];
	for(int i=0;i<n;i++){
	cout<<"Enter miles run for Saturday "<<i+1<<": ";
	cin>>miles[i];}
	cout<<"Total progress days: "<<progress(miles,n);
}
int progress(int miles[],int n)
{
	int count=0;
	for(int i=0;i+1<n;i++)
	{
	if(miles[i+1]>miles[i])
	count++;
	}
	return count;
}
	