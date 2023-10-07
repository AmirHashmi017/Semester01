#include<iostream>
using namespace std;
void header();
void client();
void viewrecord();
void depositmoney();
void withdrawmoney();
int IDNo;
int balance1=350000;
int balance2=700000;
int balance3=50000;
int balance4=1500000;
main()
{
	header();
	cout<<"Enter  ID Number (client1/Client2/client3/client4): ";
	cin>>IDNo;
	client();
			
}
void header()
{ 	system("Color 04");

	cout<<" 	####    ####   #   #  #   # ##### #   #   ####      ####  #    # ####  ##### ####  #    #"<<endl;
	cout<<"		#   #  #    #  ##  #  # ##    #   ##  #  #         #       #  # #        #   #     ##  ##"<<endl;
	cout<<" 	#####  ######  # # #  ##      #   # # #  #   ###    ###     ###  ###     #   ####  # ## #"<<endl;
	cout<<" 	#   #  #    #  #  ##  # ##    #   #  ##  #  #  #      #      #      #    #   #     #    #"<<endl;
	cout<<" 	####   #    #  #   #  #   # ##### #   #   ####     ####      #   ####    #   ####  #    #"<<endl;
}
void client()
{
	int choice;
	cout<<" Option 1: View Record"<<endl; 
	cout<<" Option 2: Deposit Money"<<endl;
	cout<<" Option 3: Withdraw Money"<<endl;
	cout<<" What do you want to do?(Enter option number):";
	cin>>choice;
	if(choice==1)
	{
	viewrecord();
	}
	if(choice==2)
	{
	depositmoney();
	}
	if(choice==3)
	{
	withdrawmoney();
	}
}
void viewrecord()
{
	
	if(IDNo==1)
	{
	cout<<"    NAME\t		Account ID\t	 Current Balance"<<endl;
	cout<<" \nAamir Hashmi                2234#$101                       "<<balance1;
	}
	
	if(IDNo==2)
	{
	cout<<"    NAME\t		Account ID\t	 Current Balance"<<endl;
	cout<<" \nAnas Shehrayar                2234#$102                     "<<balance2;
	}
	
	if(IDNo==3)
	{
	cout<<"    NAME\t		Account ID\t	 Current Balance"<<endl;
	cout<<" \nBasit Shehzad                  2234#$103                    "<<balance3;
	}
	
	if(IDNo==4)
	{
	cout<<"    NAME\t		Account ID\t	 Current Balance"<<endl;
	cout<<" \nAhmad Saleem                   2234#$104                   "<<balance4;
	}
}
void depositmoney()
{
	int depositamount;
	cout<<"Enter the amount you want to deposit: ";
	cin>>depositamount;
	if(IDNo==1)
	{
	balance1+=depositamount;
	cout<<"Your Amount is successfully deposited.Now your Current Balance is: "<<balance1;
	}
	if(IDNo==2)
	{
	balance2+=depositamount;
	cout<<"Your Amount is successfully deposited.Now your Current Balance is: "<<balance2;
	}
	if(IDNo==3)
	{
	balance3+=depositamount;
	cout<<"Your Amount is successfully deposited.Now your Current Balance is: "<<balance3;
	}
	if(IDNo==4)
	{
	balance4+=depositamount;
	cout<<"Your Amount is successfully deposited.Now your Current Balance is: "<<balance4;
	}
}
void withdrawmoney(){
		
	
	int withdrawamount;
	cout<<"Enter the amount you want to withdraw: ";
	cin>>withdrawamount;
	if(IDNo==1)
	{
	balance1-=withdrawamount;
	cout<<"Your Amount is successfully withdraw.Now your Current Balance is: "<<balance1;
	}
	if(IDNo==2)
	{
	balance2-=withdrawamount;
	cout<<"Your Amount is successfully withdraw.Now your Current Balance is: "<<balance2;
	}
	if(IDNo==3)
	{
	balance3-=withdrawamount;
	cout<<"Your Amount is successfully withdraw.Now your Current Balance is: "<<balance3;
	}
	if(IDNo==4)
	{
	balance4-=withdrawamount;
	cout<<"Your Amount is successfully withdraw.Now your Current Balance is: "<<balance4;
	}
}	
	
