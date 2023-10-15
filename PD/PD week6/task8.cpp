#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
	string yearType;
    	int holidays, hometownWeekends;
	int result;
    	cout << "Enter year type: ";
    	cin >> yearType;
    	cout << "Enter number of holidays: ";
    	cin >> holidays;
    	cout << "Enter number of weekends: ";
    	cin >> hometownWeekends;
    	result=calculateVolleyballGames(yearType, holidays, hometownWeekends);
    	cout << result;
}

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    	int weekends;
	float volleyballgames;
	weekends=48-hometownWeekends;
	volleyballgames=(holidays*0.67)+(weekends*0.75)+(hometownWeekends*1);
	if(yearType=="leap")
	{
	volleyballgames=volleyballgames+(volleyballgames*0.15);
	}
	return volleyballgames;
}
