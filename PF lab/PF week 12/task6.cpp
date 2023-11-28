#include <iostream>
using namespace std;
string hitship(string ship[][5], int i, int j);
main()
{
	string ship[5][5] = {{".", ".", ".", "*", "*"}, {".", "*", ".", ".", "."}, {".", "*", ".", ".", "."}, {".", "*", ".", ".", "."}, {".", ".", "*", "*", "."}};
	string option;
	cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
	cin >> option;
	int i, j;
	i=option[0]-'A';
	j=option[1]-'1';
	cout << "Result: " << hitship(ship, i, j);
}
string hitship(string ship[][5], int i, int j)
{
	if (ship[i][j] == ".")
	{
		return "splash";
	}
	else
	{
		return "BOOM";
	}
}
