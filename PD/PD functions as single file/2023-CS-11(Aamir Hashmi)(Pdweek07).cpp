						//PDweek7
//task1
void printstars(int row)
{
	int column;
	for(int printrow=row;printrow>=1;printrow--)
	{
	for(column=1;column<=printrow;column++)
	{
	cout<<"*";
	}
	cout<<""<<endl;
	}
}
//task2
void printupperpart(int row)
{
	int i=(row+2)/2;
	for(int printrow=(row+2)/2;printrow>=1;printrow--)
	{
	for(int space=1;space<printrow;space++)
	{
	cout<<" ";
	}
	for(int column=i;column>=printrow;column--)
	{
	cout<<"*";
	}
	cout<<""<<endl;
	}
}
void printlowerpart(int row)
{
	int i=(row+2)/2;
	for(int printrow=1;printrow<=i;printrow++)
	{
	for(int space=1;space<printrow;space++)
	{
	cout<<" ";
	}
	for(int column=i;column>=printrow;column--)
	{
	cout<<"*";
	}
	cout<<""<<endl;
	}
}
//task3
void numberamplify(int num)
{
	int i;
	for(int n=1;n<=num;n++)
	{
	if(n%4==0)
	{
	i=n*10;
	cout << i;
	}
	else
	cout<<n;
	if(n==num)
	{
	continue;
	}
	cout<<", "; 
	
	}
}
//task4
int triangledots(int num)
{
	int dots=0;
	for(int i=1;i<=num;i++)
	{
	dots=dots+i;
	}
	return dots;
}
//task5
bool isPrime(int number)
{
	bool prime;
	for(int i=2;i<number;i++)
	{
		if(number%i==0)
		{
		prime= false;
		break;
		}
		else
		{
		prime= true;
		}
	}
	return prime;
}
//task6
int primorial(int num)
	{
	int p;
	int i=1;
    	int result=1;
    	int prime=2;
    	while(i<number)
	{
        p=isPrime(prime);
	if(p==1)
	{
        result=result*prime;
        i++;
        }
        x++;
    	}
    	cout <<result;     
}
int isPrime(int prime)
{
   	int c;
	int res; 
    	for(int n=2;x<prime;n++)
    	{
        c=prime%n;
        if(c==0)
	{
        res=0;
        break;
        }
	else
	res=1;
    	}
	return res;
}
//task7
void checkpatients(int days)
{
	int i=1;
    	int patients;
    	int treatedP=0;
	int nottreatedP=0;
    	int max=7;
    	while(i<=days)
    	{
        cout<<"Number of patients who visited hospital on Day "<<i<<": ";
        cin>>patients;
        if(i%3==0&&treatedP<nottreatedP)
	{
        max=max+1;
        }
       	if(patients<=max)
        treatedP=treatedP+patients;
	else
	{
        treatedP=treatedP+max;
	nottreatedP=nottreatedP+(patients-max);
        }
	i++;
    	}
    	cout<<"Treated Patients: "<< treatedP;
    	cout<<"\nUntreated Patients: "<< nottreatedP;
}
//task8
void cargotransport(int number)
{
	int i=1;
	float miniBus=0;
    	float Truck=0;
    	float Train=0;
	float percentageminibus, percentagetruck, percentagetrain;
    	float tons;
    	float total=0;
    	float price=0;
    	while(i<=number)
    	{
        cout<<"Enter the tonnage of cargo "<<i<<": ";
        cin>>tons;
        if(tons<=3)
	{
        miniBus=miniBus+tons;
        }
        else if(tons>3&&tons<=11)
	{
        Truck=Truck+tons;
        }
        else
	{
        Train=Train+tons;
        }
	i++;
    	}
    	total=miniBus+Truck+Train;
	price=(miniBus*200 + Truck*175 + Train*120)/total;
    	percentageminibus=(miniBus/total)*100;
    	percentagetruck=(Truck/total)*100;
    	percentagetrain=(Train/total)*100;
    	cout<<fixed;
    	cout<<setprecision(2);	
    	cout<<price<<endl;
    	cout<<percentageminibus <<"%" << endl;
    	cout<<percentagetruck <<"%" << endl;
    	cout<<percentagetrain <<"%" ;
}
