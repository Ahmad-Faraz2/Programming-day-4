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

void printMaze()
 {
	cout<<"#####################################" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#                                   #" << endl;
	cout<<"#####################################" << endl;
 }

void printPlayer(int x, int y) 
 {
	gotoxy(x, y);
	cout << "P";
 }

void patrolPlayer() 
 {
    int x= 10;
    int y= 1;
    int direction= 1;
    while(true) {
        printPlayer(x, y);
        Sleep(200);
        gotoxy(x, y);
        cout << " ";
        y += direction;
        if(y == 9 || y == 1) {
            direction *= -1;
        }
     }
 }

main() 
 {
    system("cls");
    printMaze();
    patrolPlayer();
 }
