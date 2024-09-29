#include <iostream>
using namespace std;
void tpChecker(int,int);
main(){
	cout<<"Number of people in the household:";
	int people;
	cin>>people;

	cout<<"Number of rolls:";
	int tp;
	cin>>tp;
	
	tpChecker(people,tp);
      }

void tpChecker(int people,int tp){
	
	int rolls_needed;
	rolls_needed=people*57*14;

	int rolls_available;
	rolls_available=tp*500;

	int usage;
	usage=people*57;

	int days;
	days=rolls_available/usage;

	if (rolls_available < rolls_needed){
	cout<<" Tp will only last " << days <<" days,buy more ";}

	if(rolls_available >= rolls_needed){
	cout<<" Tp will last " << days <<" days,no need to panic ";}
      }
	
	