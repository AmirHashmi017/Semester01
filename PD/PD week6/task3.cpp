#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
	int day;
	string month,sign;
	cout<<"Enter the day of birth: ";
	cin>>day;
	cout<<"Enter the month of birth (e.g., January, February): ";
	cin>>month;
	sign=findZodiacSign(day,month);
	cout<<"Zodiac Sign: "<<sign;
}
string findZodiacSign(int day, string month)
{
	string si;
	if((month=="March")&&(day>=21&&day<=31)||(month=="April")&&(day>=1&&day<=19))
	{
	si="Aries";
	}
	if((month=="April")&&(day>=20&&day<=30)||(month=="May")&&(day>=1&&day<=20))
	{
	si="Taurus";
	}
	if((month=="May")&&(day>=21&&day<=31)||(month=="June")&&(day>=1&&day<=20))
	{
	si="Gemini";
	}
	if((month=="June")&&(day>=21&&day<=30)||(month=="July")&&(day>=1&&day<=22))
	{
	si="Cancer";
	}
	if((month=="July")&&(day>=23&&day<=31)||(month=="August")&&(day>=1&&day<=22))
	{
	si="Leo";
	}
	if((month=="August")&&(day>=23&&day<=31)||(month=="September")&&(day>=1&&day<=22))
	{
	si="Virgo";
	}
	if((month=="September")&&(day>=23&&day<=30)||(month=="October")&&(day>=1&&day<=22))
	{
	si="Libra";
	}
	if((month=="October")&&(day>=23&&day<=31)||(month=="November")&&(day>=1&&day<=21))
	{
	si="Scorpio";
	}
	if((month=="November")&&(day>=22&&day<=30)||(month=="December")&&(day>=1&&day<=21))
	{
	si="Sagittarius";
	}
	if((month=="December")&&(day>=22&&day<=31)||(month=="January")&&(day>=1&&day<=19))
	{
	si="Capricorn";
	}
	if((month=="January")&&(day>=20&&day<=31)||(month=="February")&&(day>=1&&day<=18))
	{
	si="Aquarius";
	}
	if((month=="February")&&(day>=19&&day<=28)||(month=="March")&&(day>=1&&day<=20))
	{
	si="Picses";
	}
	return si;
}