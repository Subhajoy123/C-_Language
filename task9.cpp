// converting days to years, weeks and days
#include<iostream>
using namespace std;
int main(){
	int n,y,w,d;
	cout<< " enter the no. of days " ; 
	cin >> n ;
	
	y=n/365;
	d=n%365;
	w=d/7;
	d=d%7;
 
	cout<<"\nYears: "<<y<<"\nWeeks: "<<w<<"\nDays: "<<d;
	return 0;
}

