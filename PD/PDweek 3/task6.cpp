#include<iostream>
using namespace std;
main()
{
	float size,cost,area;
	float costpp,costps;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>size;
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	costpp=cost/size;
	costps=cost/area;
	cout<<"Cost of fertilizer per pound: $"<<costpp<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<costps;
}
