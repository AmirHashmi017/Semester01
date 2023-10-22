#include<iostream>
#include<iomanip>
using namespace std;
void cargotransport(int number);
main()
{
    int number;
    cout << "Enter the count of cargo for transportation: ";
    cin>>number;
    cargotransport(number);

}
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
