#include <iostream>
using namespace std;
void IsEqual(int,int);
main(){
	cout<<"Enter first number:";
	int num1;
	cin>>num1;

	cout<<"Enter second number:";
	int num2;
	cin>>num2;
	
	IsEqual(num1,num2);
      }
 
void IsEqual(int num1,int num2){

	if(num1 == num2){
	cout<<"true";}

	if(num1 != num2){
	cout<<"false";}
      }