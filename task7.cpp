// swapping of no.s
#include<iostream>
using namespace std ; 
void swap( int &x , int &y) ; 
int main(){
	int a,b ;
	cout << " enter two values of a and b " ;
	cin>> a>> b ;  
	 
	cout << " the actual values " ; 
	cout << " a = " << a << " b = " << b ; 
	cout << "\n after swapping " ; 
	swap(a,b) ;
	cout << " a = " << a << " b = " << b ;
	return 0 ; 
}
void swap( int &x , int &y){
	int t ; 
	t=x;
	x=y ; 
	y=t ;
	
}
