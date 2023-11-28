#include<iostream>
using namespace std;
int identical(int matrix[][3],int size);
main()
{
	int result;
	int size;
	cout<<"Enter the number of rows for the array: ";
	cin>>size;
	int matrix[size][3];
	cout<<"Enter the elements of the array: \n";
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<3;j++)
	{
	cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
	cin>>matrix[i][j];
	}
	}
	cout<<"The count of identical rows in the array is: "<<identical(matrix,size);
}
int identical(int matrix[][3],int size)
{
	int count=0;
	for(int i=0;i+1<size;i++)
	{
	for(int j=i+1;j<size;j++)
	{
	if(matrix[i][0]==matrix[j][0]&&matrix[i][1]==matrix[j][1]&&matrix[i][2]==matrix[j][2])
	count++;
	}}
	if(count==1)
	count++;
	return count;
}
