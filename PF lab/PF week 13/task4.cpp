#include<iostream>
#include<fstream>
using namespace std;
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[],int&count);
void saveToFile(string names[], int ages[], float matricMarks[],float fscMarks[], float ecatMarks[], int count);
main()
{
	string names[100];
	int ages[100];
	float matricMarks[100];
	float fscMarks[100];
	float ecatMarks[100];
	int count=1;
	getStudentDetails(names,ages,matricMarks,fscMarks,ecatMarks,count);
	saveToFile(names,ages,matricMarks,fscMarks,ecatMarks,count);
}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[],int&count)
{
	string choice;
	for(int i=0;i<100;i++){
	cout<<"Enter student's name: ";
	cin>>names[i];
	cout<<"Enter student's age: ";
	cin>>ages[i];
	cout<<"Enter student's Matric marks: ";
	cin>>matricMarks[i];
	cout<<"Enter student's Fsc marks: ";
	cin>>fscMarks[i];
	cout<<"Enter student's Ecat marks: ";
	cin>>ecatMarks[i];
	cout<<"Enter No to Stop or Yes to continue Enter: ";
	cin>>choice;
	if(choice=="No")
	break;
	else
	count++;}
}
void saveToFile(string names[], int ages[], float matricMarks[],float fscMarks[], float ecatMarks[], int count)
{
		fstream file;
		file.open("Task4student.txt",ios::out);
		for(int i=0;i<count;i++)
		{
			file<<"Name: ";
			file<<names[i];
			file<<'\n';
			file<<"Age: ";
			file<<ages[i];
			file<<'\n';
			file<<"Matric marks: ";
			file<<matricMarks[i];
			file<<'\n';
			file<<"Fsc marks: ";
			file<<fscMarks[i];
			file<<'\n';
			file<<"Ecat marks: ";
			file<<ecatMarks[i];
			file<<'\n';
			file<<'\n';
		}
}

