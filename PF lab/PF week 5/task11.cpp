#include <iostream>
using namespace std;
string calculatePoolState(float vol, float pipe1, float pipe2, float hour);
main()
{
	float volume, firstPipe, secondPipe, hoursAbsent;
	cout << "Enter volume of the pool in liters: ";
	cin >> volume;
	cout << "Enter flow rate of the first pipe per hour: ";
	cin >> firstPipe;
	cout << "Enter flow rate of the second pipe per hour: ";
	cin >> secondPipe;
	cout << "Enter hours that the worker is absent: ";
	cin >> hoursAbsent;
	string result;
	result = calculatePoolState(volume, firstPipe, secondPipe, hoursAbsent);
	cout << result;
}
string calculatePoolState(float vol, float pipe1, float pipe2, float hour)
{
	float full;
	full = (pipe1 * hour) + (pipe2 * hour);
	float Percentage;
	Percentage = (full / vol) * 100;
	float percentagePipe1;
	percentagePipe1 = pipe1 * hour / full * 100;
	float percentagePipe2;
	percentagePipe2 = pipe2 * hour / full * 100;
    	if (full <= vol)
	{
        	string ans;
        	ans = "The pool is " + to_string(int(fullPercentage)) + "% full. Pipe 1: " + to_string(int(percentageP1)) + "%. " + "Pipe 2: " + to_string(int(percentageP2)) + "%.";
        	return ans;
        }
    	if (full > vol)
	{
        	string ans;
        	ans ="For " + to_string(hour) + " hours, the pool overflows with " + to_string(int(full - vol)) + " liters.";
        	return ans;
    	}
}