#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float distance,degree,rad,height,tane;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>distance;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>degree;
	#include<iostream>
	rad=degree/(57.2958);
	tane=tan(rad);
	height=(distance)*tane;
	cout<<"The height of the tree is: "<<height<<" feet";
}