#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main()
{
	string name,grade;
	float marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology,average;
	cout<<"Enter student name: ";
	cin>>name;
	cout<<"Enter marks for English: ";
	cin>>marksEnglish;
	cout<<"Enter marks for Maths: ";
	cin>>marksMaths;
	cout<<"Enter marks for Chemistry: ";
	cin>>marksChemistry;
	cout<<"Enter marks for Social Science: ";
	cin>>marksSocialScience;
	cout<<"Enter marks for Biology: ";
	cin>>marksBiology;
	average=calculateAverage(marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology);
	grade=calculateGrade(average);
	cout<<"Student Name: "<<name<<endl;
	cout<<"Percentage: "<<average<<"%"<<endl;
	cout<<"Grade: "<<grade;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
	float avg,sum;
	sum=(marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology);
	avg=(sum*100)/500;
	return avg;
}
string calculateGrade(float average)
{
	string gr;
	if(average>=90&&average<=100)
	{
	gr="A+";
	}
	if(average>=80&&average<90)
	{
	gr="A";
	}
	if(average>=70&&average<80)
	{
	gr="B+";
	}
	if(average>=60&&average<70)
	{
	gr="B";
	}
	if(average>=50&&average<60)
	{
	gr="C";
	}
	if(average>=40&&average<50)
	{
	gr="D";
	}
	if(average<40)
	{
	gr="F";
	}
	return gr;
}
	

	
	