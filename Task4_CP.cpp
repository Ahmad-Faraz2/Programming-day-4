#include <iostream>
using namespace std;
void checkSpeed(int);
main(){
	cout<<"Speed:";
	int speed;
	cin>>speed;

	checkSpeed(speed);
      }

void checkSpeed(int speed){
	if(speed > 100){
	cout<<"Halt.....You will be challenged";}

	
	if(speed <= 100){
	cout<<"Perfect, you are going good";}
      }