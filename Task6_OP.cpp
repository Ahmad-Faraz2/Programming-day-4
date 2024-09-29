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

void printH()
 {
	gotoxy(10, 5);  
	              cout << " ##    ## " << endl;
	gotoxy(10, 6);
	              cout << " ##    ## " << endl;
	gotoxy(10, 7);
	              cout << " ##    ## " << endl;
	gotoxy(10, 8);
	              cout << " ######## " << endl;
	gotoxy(10, 9);
	              cout << " ##    ## " << endl;
	gotoxy(10, 10);
	              cout << " ##    ## " << endl;
	gotoxy(10, 11);
	              cout << " ##    ## " << endl;
 }	

void printA()
 {
	gotoxy(10, 13);  
	               cout << "   ####   " << endl;
	gotoxy(10, 14);
	               cout << " ##    ## " << endl;
	gotoxy(10, 15);
	               cout << " ##    ## " << endl;
	gotoxy(10, 16);
	               cout << " ######## " << endl;
	gotoxy(10, 17);
	               cout << " ##    ## " << endl;
	gotoxy(10, 18);
	               cout << " ##    ## " << endl;
	gotoxy(10, 19);
	               cout << " ##    ## " << endl;
 }

void printS() 
 {
	gotoxy(10, 21);
	               cout << "#######  " << endl;
	gotoxy(10, 22);
	               cout << "#     #  " << endl;
	gotoxy(10, 23);
	               cout << "#        " << endl;
	gotoxy(10, 24);
	               cout << "#######  " << endl;
	gotoxy(10, 25);
	               cout << "      #  " << endl;
	gotoxy(10, 26);
	               cout << "#     #  " << endl;
	gotoxy(10, 27);
	               cout << "#######  " << endl;
 }

void printSagain() 
 {
	gotoxy(10, 29);
	               cout << "#######  " << endl;
	gotoxy(10, 30);
	               cout << "#     #  " << endl;
	gotoxy(10, 31);
	               cout << "#        " << endl;
	gotoxy(10, 32);
	               cout << "#######  " << endl;
	gotoxy(10, 33);
	               cout << "      #  " << endl;
	gotoxy(10, 34);
	               cout << "#     #  " << endl;
	gotoxy(10, 35);
	               cout << "#######  " << endl;
 }

void printAagain()
 {
	gotoxy(10, 37);  
	               cout << "   ####   " << endl;
	gotoxy(10, 38);
	               cout << " ##    ## " << endl;
	gotoxy(10, 39);
	               cout << " ##    ## " << endl;
	gotoxy(10, 40);
	               cout << " ######## " << endl;
	gotoxy(10, 41);
	               cout << " ##    ## " << endl;
	gotoxy(10, 42);
	               cout << " ##    ## " << endl;
	gotoxy(10, 43);
	               cout << " ##    ## " << endl;
 }

void printN()
 {
	gotoxy(10, 45);
	               cout << "#   #" << endl;
	gotoxy(10, 46);
	               cout << "##  #" << endl;
	gotoxy(10, 47);
	               cout << "# # #" << endl;
	gotoxy(10, 48);
	               cout << "#  ##" << endl;
	gotoxy(10, 49);
	               cout << "#   #" << endl;
	gotoxy(10, 50);
	               cout << "#   #" << endl;
	gotoxy(10, 51);
	               cout << "#   #" << endl;
	gotoxy(10, 52);
	               cout << "#   #" << endl;
}

main()
 {  
	printH();
	printA();
	printS();
	printSagain();
	printAagain();
	printN();
 }


	