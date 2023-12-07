#include<iostream>
#include<fstream>
int countcharacters();
using namespace std;
main()
{
	int result;
	result=countcharacters();
	cout<<"Total number of characters: "<<result;
}
int countcharacters()
{
	string line;
	int count=0;
	fstream file;
	file.open("Task2.txt",ios::in);
	while(!file.eof())
	{
	getline(file,line);
	for (int i=0; i<line.length();i++)
	{
	count++;	
	}
}
	file.close();
	return count;
}
