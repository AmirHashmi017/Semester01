#include<iostream>
using namespace std;
void passfail(int score);
main()
{
	int score;
	cout<<"Enter your score: ";
	cin>>score;
	passfail(score);
}
void passfail(int score)
{
	if(score>50)
	{
	cout<<"Pass";
	}
	if(score<=50)
	{
	cout<<"Fail";
	}
}
