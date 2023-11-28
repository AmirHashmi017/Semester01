
#include<iostream>
using namespace std;
bool isidentity(int matrix[][3]);
main()
{
	int matrix[3][3];
	cout<<"Enter the elements of the matrix: \n";
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
	cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
	cin>>matrix[i][j];
	}
	}
	cout<<"The matrix you entered is: \n";
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
	cout<<matrix[i][j]<<"\t";
	}
	cout<<endl;
	}
	if(isidentity(matrix))
	cout<<"The entered matrix is an identity matrix.";
	else
	cout<<"The entered matrix is NOT an identity matrix.";
}
bool isidentity(int matrix[][3])
{
	int count=0;
	int j=0;
	for(int i=0;i<3;i++)
	{
	if(matrix[i][j]==1){
	count=count+1;}
	j++;
	}
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
	if(i!=j&&matrix[i][j]!=0){
	return false;}
	}}
	if(count==3)
	return true;
	else
	return false;
}

	