#include <iostream>
using namespace std;
void flowerShop(int,int,int);
main(){
	cout<<"Red Rose:";
	int red_rose;
	cin>>red_rose;
	
	cout<<"White Rose:";
	int white_rose;
	cin>>white_rose;

	cout<<"Tulip:";
	int tulip;
	cin>>tulip;
	
	flowerShop(red_rose,white_rose,tulip);
      }

void flowerShop(int red_rose,int white_rose,int tulip){

	int total_price;
	float discount_price;

	total_price=red_rose+white_rose+tulip;
	if(total_price > 200){
	discount_price=total_price-(total_price*20/100);}

	if(total_price <= 200){
	discount_price=total_price;}

	cout<<"Original price:" << total_price << endl;
	cout<<"Price after discount:" << discount_price;
       }
	
	