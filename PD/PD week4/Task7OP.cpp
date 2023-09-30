#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void movepacman(int x,int y);
main()
{	int strike=0;
	int x=12;
	int y=2;
	while(true)
	{
	system("cls");
	printMaze();
	if(strike == 0){
	y=y+1;}
	if(y>7)
	{
	strike = 1;
	}
	if (strike==1){
		y=y-1;
	}
	if (y < 2){
		strike = 0;
	}
	movepacman(x,y);
	}
		
}
void printMaze()
{
	cout << "#######################"<< endl;
	cout << "#                     #"<< endl;
	cout << "#		      #" << endl;
	cout << "# 		      #" << endl;
	cout << "#                     #" << endl;
	cout << "#                     #" << endl;
	cout << "#                     #" << endl;
	cout << "#                     #" << endl;
	cout << "#######################" << endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void movepacman(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(300);
	cout<<" ";
}
