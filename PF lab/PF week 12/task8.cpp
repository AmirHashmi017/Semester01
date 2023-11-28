#include<iostream>
using namespace std;
int great(int matrix[][5],int size);
main()
{
	int result;
	int size;
	cout<<"Enter row size: ";
	cin>>size;
	int matrix[size][5];
	cout<<"Enter the elements of the matrix: \n";
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<5;j++)
	{
	cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
	cin>>matrix[i][j];
	}
	}
	cout<<"\nOriginal Matrix: \n";
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<5;j++)
	{
	cout<<matrix[i][j]<<"\t";
	}
	cout<<endl;
	}
	result=great(matrix,size);
	int c=result;
	int a=0;
	int m=0;
	int n=0;
	for(int i=0;i<size;i++)
	{
	a=matrix[m][n];
	matrix[m][n]=matrix[i][c];
	matrix[i][c]=a;
	m++;
	}
	cout<<"\nMatrix after largest column moved to first: \n";
	for(int i=0;i<size;i++)
	{
	for(int j=0;j<5;j++)
	{
	cout<<matrix[i][j]<<"\t";
	}
	cout<<endl;
	}
}
int great(int matrix[][5],int size)
{
	int large=0;
	int sum=0;
	int great=0;
	for(int j=0;j<5;j++)
	{
	sum=0;
	for(int i=0;i<size;i++)
	{
	sum=sum+matrix[i][j];
	}
	if(sum>great)
	{
	great=sum;
	large=j;
	}
	}
	return large;
}
	
	
