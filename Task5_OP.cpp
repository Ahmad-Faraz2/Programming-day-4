#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y)
 {
	COORD coordinates;
	coordinates.X =x;
	coordinates.Y =y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }

main()
 {
	system("cls");

	gotoxy(60,20);
	cout << "     ####    ##    ##  ##     ##    ####    ####          " << endl;
	gotoxy(60,21);
	cout << "   ##    ##  ##    ##  ###   ###  ##    ##  ### ##        " << endl;
	gotoxy(60,22);
	cout << "   ##    ##  ########  #### ####  ##    ##  ##   ##       " << endl; 
	gotoxy(60,23);
	cout << "   ########  ########  ## ### ##  ########  ##   ##       " << endl;
	gotoxy(60,24);
	cout << "   ##    ##  ##    ##  ##     ##  ##    ##  ##   ##       " << endl;
	gotoxy(60,25);
	cout << "   ##    ##  ##    ##  ##     ##  ##    ##  ### ##        " << endl; 
	gotoxy(60,26);
	cout << "   ##    ##  ##    ##  ##     ##  ##    ##  ####          " << endl;
  }  


	