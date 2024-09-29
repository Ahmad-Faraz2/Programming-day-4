#include <iostream>
using namespace std;
void condition(int,int);
main(){
	cout<<"Enter the number of hours:";
	int h;
	cin>>h;

	cout<<"Enter the number of minutes:";
	int m;
	cin>>m;

	condition(h,m);
	}
void condition(int h,int m){
	h=h*60;
	if(h > m){
	cout<<h/60;}

	if(h < m){
	cout<<m;}
        }	
	