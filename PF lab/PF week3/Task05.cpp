
#include<iostream>
using  namespace std;
main()
{
	string name;
	int matric_marks;
	int inter_marks;
	int ECATmarks;
	float aggregate;
	cout<<"Enter the student's name: ";
	cin>>name;
	cout<<"Enter matriculation marks (Out of 1100): ";
	cin>>matric_marks;
	cout<<"Enter intermediate marks (Out of 550): ";
	cin>>inter_marks;
	cout<<"Enter Ecat marks (Out of 400): ";
	cin>>ECATmarks;
	aggregate=(50/100*ECATmarks)+(40/100*inter_marks)+(10/100*matric_marks);
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";
}

	