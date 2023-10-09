#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void printplayertank();
void removeplayertank();
void printenemytank();
void removeenemytank();
void moveplayertankup();
void moveplayertankdown();
void moveenemytank();
char getCharAtxy(short int x, short int y);
int ptx=7;
int pty=9;
int etx=40;
int ety=3;
main()
{
	system("cls");
	system("Color 04");
	printmaze();
	printplayertank();
	printenemytank();
	while(true)
	{
	if (GetAsyncKeyState(VK_UP))
	{
	moveplayertankup();
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
	moveplayertankdown();
	}
	moveenemytank();
	Sleep(200);
}
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
	: ' ';
}
void printmaze()
{
	cout << "################################################################################################"<< endl;
	cout << "#                     									        #"<< endl;
	cout << "#		     									       	#" << endl;
	cout << "# 		      									        #" << endl;
	cout << "#                    									      	#" << endl;
	cout << "#                    									       	#" << endl;
	cout << "#                    									      	#" << endl;
	cout << "#                     									        #" << endl;
	cout << "#                     									       	#"<< endl;
	cout << "#		     									      	#" << endl;
	cout << "# 		      									        #" << endl;
	cout << "#                    									       	#" << endl;
	cout << "#                    									        #" << endl;
	cout << "#                    									       	#" << endl;
    	cout << "#           									                #" << endl;
	cout << "#		     									       	#" << endl;
	cout << "# 		      									       	#" << endl;
	cout << "#                    									        #" << endl;
	cout << "#                    									       	#" << endl;
	cout << "#                    									       	#" << endl;
    	cout << "#                    									      	#" << endl;
	cout << "#                    									        #" << endl;
    	cout << "#           									               	#" << endl;
	cout << "#		     									       	#" << endl;
	cout << "# 		      									      	#" << endl;
	cout << "#                    									       	#" << endl;
	cout << "#                    									      	#" << endl;
	cout << "#                    									      	#" << endl;
	cout << "#                    									       	#" << endl;
	cout << "#                    									        #" << endl;
	cout << "################################################################################################" << endl;
}

void printplayertank()
{
	gotoxy(ptx,pty);
	cout<<"#############|";
	gotoxy(ptx,pty+1);
	cout<<"#            |";
	gotoxy(ptx,pty+2);
	cout<<"#      |##############)";
	gotoxy(ptx,pty+3);
	cout<<"#      |##############)";
	gotoxy(ptx,pty+4);
	cout<<"#            |";
	gotoxy(ptx,pty+5);
	cout<<"#############|";
}	
void removeplayertank()
{
	gotoxy(ptx,pty);
	cout<<"              ";
	gotoxy(ptx,pty+1);
	cout<<"              ";
	gotoxy(ptx,pty+2);
	cout<<"                       ";
	gotoxy(ptx,pty+3);
	cout<<"                       ";
	gotoxy(ptx,pty+4);
	cout<<"              ";
	gotoxy(ptx,pty+5);
	cout<<"              ";	
}
void moveplayertankup()
{
	if (getCharAtxy(ptx,pty-1) == ' ')
	{
	removeplayertank();
	pty=pty-1;
	printplayertank();
	} 
}
void moveplayertankdown() 
{	if (getCharAtxy(ptx,pty+6) == ' ')
	{
	removeplayertank();
	pty = pty+1;
	printplayertank();
	} 
}
void printenemytank()
{
	gotoxy(etx,ety);
	cout<<"           |############";
	gotoxy(etx,ety+1);
	cout<<"           |           #";
	gotoxy(etx,ety+2);
	cout<<"  (###########|        #";
	gotoxy(etx,ety+3);
	cout<<"  (###########|        #";
	gotoxy(etx,ety+4);
	cout<<"           |           #";
	gotoxy(etx,ety+5);
	cout<<"           |############";
}
void removeenemytank()
{
	gotoxy(etx,ety);
	cout<<"                   			";
	gotoxy(etx,ety+1);
	cout<<"                   			";
	gotoxy(etx,ety+2);
	cout<<"                   			";
	gotoxy(etx,ety+3);
	cout<<"                   			";
	gotoxy(etx,ety+4);
	cout<<"                  	        ";
	gotoxy(etx,ety+5);
	cout<<"                   			";
}
void moveenemytank()
{
	removeenemytank();
	ety=ety+1;
	if(ety>=25)
	{
	ety=3;
	}
	printenemytank();
}
		
		

