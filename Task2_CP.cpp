#include <iostream>
using namespace std;
void Reverse(string);
main(){
	cout<<"Enter 'true' or 'false':";
	string value;
	cin>>value;

	Reverse(value);
      }

void Reverse(string value){

	if(value == "true"){
	cout<<"false";}

	if(value == "false"){
	cout<<"true";}
      }