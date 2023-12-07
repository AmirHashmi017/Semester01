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
	file.open("Task6.txt",ios::in);
	char restricted;
	getline(file,line);
	restricted=line[0];
	while(!file.eof())
	{
	getline(file,line);
	if(line[0]!=restricted){
	count++;}	
	}
	file.close();
	return count;
}
