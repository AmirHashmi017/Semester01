					//PD WEEk 06
//Task01
string decideactivity(string temp,string humidity)
{
	string res;
	if(temp=="warm")
	{
	if(humidity=="dry")
	{
	res="Play tennis";
	}
	if(humidity=="humid")
	{
	res="Swim";
	}
	}
	if(temp=="cold")
	{
	if(humidity=="dry")
	{
	res="Play basketball";
	}
	if(humidity=="humid")
	{
	res="Watch TV";
	}
	}
	return res;
}
//Task02
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
//Task03
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
//Task04
float amount (char service,char time,float min)
{	
	float total,diff;
	if(service=='R'||service=='r')
	{
	if(min<=50)
	{
	total=10;
	}
	else
	{
	diff=min-50;
	total=10+(diff*0.20);
	}
	}
	if(service=='P'||service=='p')
	{
	if((time=='D'||time=='d')&&(min<=75))
	{
	total=25;
	}
	else if((time=='D'||time=='d')&&(min>75))
	{
	diff=min-75;
	total=25+(diff*0.10);
	}
	else if((time=='N'||time=='n')&&(min<=100))
	{
	total=25;
	}
	else if((time=='D'||time=='d')&&(min>100))
	{
	diff=min-100;
	total=25+(diff*0.05);
	}
	}
	return total;
}
//Task05
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    	float Price;
    	if((dayOfWeek=="Saturday")||(dayOfWeek=="Sunday"))
	{
        if(fruit=="banana")
	{
        Price=quantity*2.70;
        }
        else if(fruit=="apple")
	{
        Price=quantity*1.25;
        }
        else if(fruit=="orange")
	{
        Price=quantity*0.90;
        }
        else if(fruit=="grapefruit")
	{
        Price=quantity*1.60;
        }
        else if(fruit=="kiwi")
	{
        Price=quantity*3.00;
        }
        else if(fruit=="pineapple")
	{
        Price=quantity*5.60;
        }
        else if(fruit=="grapes")
	{
        Price=quantity*4.20;
        }
    	}
	else
	{
        if(fruit=="banana")
	{
        Price=quantity*2.50;
        }
        else if(fruit=="apple")
	{
        Price=quantity*1.20;
        }
        else if(fruit=="orange")
	{
        Price=quantity*0.85;
        }
        else if(fruit=="grapefruit")
	{
        Price=quantity*1.45;
        }
        else if(fruit=="kiwi")
	{
        Price=quantity*2.70;
        }
        else if(fruit=="pineapple")
	{
        Price=quantity*5.50;
        }
        else if(fruit=="grapes")
	{
        Price=quantity*3.85;
        }
	}
	return Price;
}
//Task06
string calculateHotelPrices(string month, int numberOfStays)
{
	float stamount,apamount;
	if(month=="May"||month=="October")
	{
	stamount=50*numberOfStays;
	apamount=65*numberOfStays;
	}
	else if(month=="June"||month=="September")
	{
	stamount=75.20*numberOfStays;
	apamount=68.70*numberOfStays;
	}
	else if(month=="July"||month=="August")
	{
	stamount=76*numberOfStays;
	apamount=77*numberOfStays;
	}
	if((numberOfStays>7&&numberOfStays<=14)&&(month=="May"||month=="October"))
	{
	stamount=stamount-(stamount*0.05);
	}
	if((numberOfStays>14)&&(month=="May"||month=="October"))
	{
	stamount=stamount-(stamount*0.30);
	}
	if((numberOfStays>14)&&(month=="June"||month=="September"))
	{
	stamount=stamount-(stamount*0.20);
	}
	if(numberOfStays>14)
	{
	apamount=apamount-(apamount*0.10);
	}
	return "Apartment: "+to_string(apamount)+"$."+"\nStudio: "+to_string(stamount)+"$.";
}	
//Task07
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
	int fstudenttime,fexamtime;
	int fEarlydifference=0;
	int fLatedifference=0;
	string res;
	fstudenttime=studentMsinute+(studentHour*60);
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
//Task08
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    	int weekends;
	float volleyballgames;
	weekends=48-hometownWeekends;
	volleyballgames=(holidays*0.67)+(weekends*0.75)+(hometownWeekends*1);
	if(yearType=="leap")
	{
	volleyballgames=volleyballgames+(volleyballgames*0.15);
	}
	return volleyballgames;
}
//Task09
string checkPointPosition(int h, int x, int y)
{	
	string pointposition;
	if( ((x>0 && x<(3*h)) && (y>0 && y<(1*h)))   || ((x>(1*h) && x<(2*h))  && (y>(1*h) && y<(4*h))) ){
        pointposition ="Inside";
    	}
    	else
	{
        pointposition="Outside";
    	}
    	if(((x==0*h)||(x==3*h))&&(y==0*h))
    	{
        pointposition ="Border";
    	}
    	else if(((x==1*h)&&((y==4*h)||(y==1*h)))||((x==2*h) && ((y==1*h) || (y==4*h))))
    	{
        pointposition ="Border";
    	}
    	else if(((x==0*h) && (y==2*h))||((x==3*h) && (y==1*h)))
    	{
        pointposition ="Border";
    	}
    	return pointposition;
}
