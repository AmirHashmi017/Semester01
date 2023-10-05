#include <iostream>


using namespace std;


string timeTravel(int h, int m);


main()
{
    
	int minutes,hours;
	string result;

	cout << "Enter Hours: ";
 
	cin >> hours;

    
	cout << "Enter Minutes: ";
    
	cin >> minutes;

    
    
	result= timeTravel(hours, minutes);
    
	cout << result;

}

string timeTravel(int h, int m)
{
    
	m = m + 15;
    
	if (m >= 61)
	{
        
	h = h + 1;
        
	m = m - 60;
	}
        
	if (h >= 24)
	{
            
	h = 0;
        
	}
        
    

    
	return to_string(h) + ":" + to_string(m);


}