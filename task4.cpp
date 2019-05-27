// printing sum of all elements of array
#include<iostream>
using namespace std ; 
int main(){
	int n,s=0; 
	int a[10] ;
	cout<< " enter the size " ; 
	cin >> n ; 
	cout<< " enter the elements \n" ; 
	for(int i=0 ; i<n; i++)
		cin>> a[i];
	for(int i=0 ; i<n; i++)
		s=s+a[i] ; 
	cout<< "\n the array " ; 
	for(int i=0 ; i<n; i++)
		cout<< a[i] <<"," ; 
	cout << "\n sum of elements is " << s ; 
	return 0 ; 
}
