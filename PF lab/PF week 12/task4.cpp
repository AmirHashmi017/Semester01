#include<iostream>
using namespace std;
int printsum(int matrix[][3],int size);
main()
{
	int size;
	cout<<"Enter row size: ";
	cin>>size;
	int matrix[size][3];
	cout<<"Enter the elements of the matrix: \n";
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<3;j++)
	{
	cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
	cin>>matrix[i][j];
	}
	}
	cout<<"The sum of elements in the matrix is: "<<printsum(matrix,size);
}
int printsum(int matrix[][3],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<3;j++)
	{
	sum=sum+matrix[i][j];
	}
	}
	return sum;
}