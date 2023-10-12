#include<iostream>
using namespace std;
float perimeter(string shape,float value);
main()
{
	float value,result;
	string shape;
	cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
	cin>>shape;
	cout<<"Enter the value: ";
	cin>>value;
	result= perimeter(shape,value);
	cout<<"The perimeter is: "<<result;
}
float perimeter(string shape,float value)
{
	float per;
	if(shape=="s")
	{
	per=value*4;
	}
	if(shape=="c")
	{
	per=value*6.28;
	}
	if(shape=="t")
	{
	per=value*3;
	}
	if(shape=="h")
	{
	per=value*6;
	}
	return per;
}
	