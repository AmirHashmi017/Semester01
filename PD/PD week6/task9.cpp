#include<iostream>
using namespace std;
string checkPointPosition(int h,int x,int y);
main()
{
	int h,x,y;
	string result;
	cout<<"Enter height: ";
	cin>>h;
	cout<<"Enter x coordinate: ";
	cin>>x;
	cout<<"Enter y coordinate: ";
	cin>>y;
	result=checkPointPosition(h,x,y);
	cout<<result;
}
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