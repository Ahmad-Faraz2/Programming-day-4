#include <iostream>
using namespace std;
void pet(int);
main(){
	cout<<"Holidays:";
	int holidays;
	cin>>holidays;

	pet(holidays);
      }

void pet(int holidays){
	
	int work_days;
	work_days=365-holidays;

	int game_time;
	game_time=(work_days*63)+(holidays*127);

	int diff;
	diff=30000-game_time;

	int hours;
	hours=diff/60;
	int minutes;
	minutes=diff%60;

	if(game_time <= 30000){
	cout<<"Tom sleeps well" << endl;
	cout<<hours <<"hours and" <<minutes <<"minutes less for play";}
	
	if(game_time > 30000){
	cout<<"Tom will run away" << endl;
	cout<<hours <<"hours and" <<minutes <<"minutes for play";}

      }
	
	