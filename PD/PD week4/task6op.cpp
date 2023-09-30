#include<iostream>
using namespace std;
void printH();
void printa();
void prints();
void printn();
main()
{
	printH();
	cout<<""<<endl;
	printa();
	cout<<""<<endl;
	prints();
	cout<<""<<endl;
	prints();
	cout<<""<<endl;
	printa();
	cout<<""<<endl;
	printn();
}
void printH()
{
	cout<<" #   #"<<endl;
	cout<<" #   #"<<endl;
	cout<<" #####"<<endl;
	cout<<" #   #"<<endl;
}
void printa()
{
	cout<<"  ####"<<endl;
	cout<<" #    #"<<endl;
	cout<<"  #####("<<endl;
}
void prints()
{
	cout<<" ####"<<endl;
	cout<<" ##"<<endl;
	cout<<" #####"<<endl;
	cout<<"    ##"<<endl;
	cout<<" #####"<<endl;
}
void printn()
{
	cout<<" '###"<<endl;
	cout<<"  #  #"<<endl;
	cout<<"  #  #"<<endl;
}