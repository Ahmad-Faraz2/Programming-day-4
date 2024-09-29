#include <iostream>
using namespace std;
void final_price(string,int);
main(){
	cout<<"Enter the country's name:";
	string coun_name;
	cin>>coun_name;

	cout<<"Enter the ticket price in dollars:$";
	int price;
	cin>>price;

	final_price(coun_name,price);
      }

void final_price(string coun_name,int price){

	float total_price;
	if(coun_name == "Pakistan"){
	total_price=price-(price*5/100);}

	if(coun_name == "Ireland"){
	total_price=price-(price*10/100);}

	if(coun_name == "India"){
	total_price=price-(price*20/100);}

	if(coun_name == "England"){
	total_price=price-(price*30/100);}

	if(coun_name == "Canada"){
	total_price=price-(price*45/100);}

	cout<<"Final ticket price after discount:$" <<total_price;
      }
