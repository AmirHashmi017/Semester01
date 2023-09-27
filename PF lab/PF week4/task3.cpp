#include<iostream>
using namespace std;
void howManyStickers(int n);
main()
{
	int n;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>n;
	howManyStickers(n);
}
void howManyStickers(int n)
{
	int stickers;
	stickers=n*n*6;
	cout<<"Number of stickers needed: "<<stickers;
}