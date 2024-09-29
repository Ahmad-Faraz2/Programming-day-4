#include <iostream>
using namespace std;
void condition(int,int);
main(){
	cout<<"Enter your position:";
	int my_position;
	cin>>my_position;
	
	cout<<"Enter your friend's position:";
	int friend_position;
	cin>>friend_position;
	condition(my_position,friend_position);
      }

void condition(int my_position,int friend_position){
	
	if(friend_position-my_position <= 6){
	cout<<"true";}

	if(friend_position-my_position > 6){
	cout<<"false";}
      }