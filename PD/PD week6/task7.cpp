#include<iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main()
{
	int examHour,examMinute,studentHour,studentMinute;
	cout<<"Enter Exam Starting Time (hour): ";
	cin>>examHour;
	cout<<"Enter Exam Starting Time (minutes): ";
	cin>>examMinute;
	cout<<"Enter Student hour of arrival: ";
	cin>>studentHour;
	cout<<"Enter Student minutes of arrival: ";
	cin>>studentMinute;
	int studenttime,examtime;
	int Earlydifference=0;
	int Latedifference=0;
	int earlyhours=0;
	int earlymin=0;
	int latehours=0;
	int latemin=0;
	string result;
	result=checkStudentStatus(examHour,examMinute,studentHour,studentMinute);
	cout<<result<<endl;
	studenttime=studentMinute+(studentHour*60);
	examtime=examMinute+(examHour*60);
	if(studenttime<examtime)
	{
	Earlydifference=examtime-studenttime;
	}
	else if(studenttime>examtime)
	{
	Latedifference=studenttime-examtime;
	}
	if(Earlydifference>=60)
	{
	earlyhours=Earlydifference/60;
	earlymin=Earlydifference-(earlyhours*60);
	}
	else if(Earlydifference>0&&Earlydifference<60)
	{
	cout<<Earlydifference<<" minutes before the start";
	}
	if(Latedifference>=60)
	{
	latehours=Latedifference/60;
	latemin=Latedifference-(latehours*60);
	}
	else if(Latedifference>0&&Latedifference<60)
	{
	cout<<Latedifference<<" minutes after the start";
	}
	if(earlyhours>0&&earlymin>0&&earlymin<10)
	{
	cout<<earlyhours<<":0"<<earlymin<<" hours before the start";
	}
	if(earlyhours>0&&earlymin==0)
	{
	cout<<earlyhours<<":0 hours before the start";
	}
	if(earlymin>=10)
	{
	cout<<earlyhours<<":"<<earlymin<<" hours before the start";
	}
	if(latehours>0&&latemin>0&&latemin<10)
	{
	cout<<latehours<<":0"<<latemin<<" hours after the start";
	}
	if(latehours>0&&latemin==0)
	{
	cout<<latehours<<":0 hours after the start";
	}
	if(latemin>=10)
	{
	cout<<latehours<<":"<<latemin<<" hours after the start";
	}	
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
	int fstudenttime,fexamtime;
	int fEarlydifference=0;
	int fLatedifference=0;
	string res;
	fstudenttime=studentMinute+(studentHour*60);
	fexamtime=examMinute+(examHour*60);
	if(fstudenttime==fexamtime)
	{
	res="On time";
	}
	else if(fstudenttime<fexamtime)
	{
	fEarlydifference=fexamtime-fstudenttime;
	}
	else if(fstudenttime>fexamtime)
	{
	res="Late";
	}
	if(fEarlydifference>30)
	{
	res="Early";
	}
	else if(fEarlydifference>0&&fEarlydifference<=30)
	{
	res="On time";
	}
	return res;
}
