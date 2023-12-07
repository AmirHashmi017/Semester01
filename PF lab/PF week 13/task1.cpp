#include<iostream>
#include<fstream>
int countLines();
using namespace std;
main()
{
	int result;
	result=countLines();
	cout<<"Total number of lines: "<<result;
}
int countLines()
{
	string line;
	int count=0;
	fstream file;
	file.open("Task1.txt",ios::in);
	while(!file.eof())
	{
	getline(file,line);
	count++;	
	}
	file.close();
	return count;
}
