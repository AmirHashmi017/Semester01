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
	file.open("Task3.txt",ios::in);
	while(!file.eof())
	{
	getline(file,line);
	for (int i=0; i<line.length();i++)
	{
	if(line[i]=='s'||line[i]=='S')
	count++;	
	}
}
	file.close();
	return count;
}
