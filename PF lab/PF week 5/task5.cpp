#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float a,b,c,det,root1,root2,img1;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	det=(b*b)-4*(a*c);
	if(det==0)
	{
	root1=-b/(2*a);
	root2=-b/(2*a);
	cout<<"Solution: x = "<<root1;
	}
	if(det>0)
	{
	root1=(-b+sqrt(det))/(2*a);
	root2=(-b-sqrt(det))/(2*a);
	cout<<"Solutions: x = "<<root1<<" and x = "<<root2;
	}
	if(det<0)
	{
	root1=-b/(2*a);
	img1=((sqrt(-det))/(2*a));
	root2=-b/(2*a);
	cout<<"Complex Solutions: x = "<<root1<<" + "<<img1<<"i and x = "<<root2<<" - "<<img1<<"i";
	}
}