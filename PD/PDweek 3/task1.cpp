#include<iostream>
using namespace std;
main()
{
	int n;
	int angle;
	cout<<"Enter the number of sides of the polygon: ";
	cin>> n;
	angle=(n-2)*180;
	cout<<"The sum of internal angles of a "<<n<<"-sided polygon is: " <<angle<<" degrees";
}