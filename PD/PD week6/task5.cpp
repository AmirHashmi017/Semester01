#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main()
{
    	string fruit, dayOfWeek;
    	double quantity;
	float result;
    	cout<<"Enter the fruit name: ";
    	cin>>fruit;
    	cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    	cin >>dayOfWeek;
    	cout<<"Enter the quantity: ";
    	cin>>quantity;
	if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday"||dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")
	{
	if(fruit=="banana"||fruit== "apple"||fruit=="orange"||fruit=="grapefruit"||fruit=="kiwi"||fruit=="pineapple"||fruit=="grapes")
	{	
	result=calculateFruitPrice(fruit, dayOfWeek, Quantity);
    	cout << result;
	}
	}
	else
	{
	cout<<"error";
	}
}

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    	float Price;
    	if((dayOfWeek=="Saturday")||(dayOfWeek=="Sunday"))
	{
        if(fruit=="banana")
	{
        Price=quantity*2.70;
        }
        else if(fruit=="apple")
	{
        Price=quantity*1.25;
        }
        else if(fruit=="orange")
	{
        Price=quantity*0.90;
        }
        else if(fruit=="grapefruit")
	{
        Price=quantity*1.60;
        }
        else if(fruit=="kiwi")
	{
        Price=quantity*3.00;
        }
        else if(fruit=="pineapple")
	{
        Price=quantity*5.60;
        }
        else if(fruit=="grapes")
	{
        Price=quantity*4.20;
        }
    	}
	else
	{
        if(fruit=="banana")
	{
        Price=quantity*2.50;
        }
        else if(fruit=="apple")
	{
        Price=quantity*1.20;
        }
        else if(fruit=="orange")
	{
        Price=quantity*0.85;
        }
        else if(fruit=="grapefruit")
	{
        Price=quantity*1.45;
        }
        else if(fruit=="kiwi")
	{
        Price=quantity*2.70;
        }
        else if(fruit=="pineapple")
	{
        Price=quantity*5.50;
        }
        else if(fruit=="grapes")
	{
        Price=quantity*3.85;
        }
	}
	return Price;
}


