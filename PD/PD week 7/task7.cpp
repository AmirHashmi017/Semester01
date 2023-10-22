#include <iostream>
using namespace std;
void checkpatients(int days);
main()
{
    	int days;
    	cout<<"Enter Number of days you visited Hospital: ";
    	cin>>days;
	checkpatients(days);
}

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
