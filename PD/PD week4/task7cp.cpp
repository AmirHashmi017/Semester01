#include<iostream>
using namespace std;
void flowerShop(float redRose,float whiteRose,float tulip);
main()
{	
	float redRose,whiteRose,tulip;
	cout<<"Red Rose: ";
	cin>>redRose;
	cout<<"White Rose: ";
	cin>>whiteRose;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(redRose,whiteRose,tulip);
}
void flowerShop(float redRose,float whiteRose,float tulip)
{
	float price,discountedprice;
	price=redRose*2.00+whiteRose*4.10+tulip*2.50;
	cout<<"Original Price: $"<<price<<endl;
	if(price>200)
	{
	discountedprice=price-(price*20/100);
	cout<<"Price after Discount: $"<<discountedprice;
	}
	if(price<=200)
	{
	cout<<"No discount applied.";
	}
}

	