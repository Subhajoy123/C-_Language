// finding max. and min. no. from an array
#include<iostream>
using namespace std ; 
int main(){
	int n,max=-1,min=99999; 
	int a[10] ;
	cout<< " enter the size " ; 
	cin >> n ; 
	cout<< " enter the elements \n" ; 
	for(int i=0 ; i<n; i++)
		cin>> a[i];
	cout<< "\n the array " ; 
	for(int i=0 ; i<n; i++)
		cout<< a[i] <<"," ; 
	for(int i=0 ; i<n; i++){
		if(a[i]>max)
			max=a[i] ; 
		if(a[i]<min)
			min=a[i] ; 
	}
	cout << "\n the maximum no. is " << max << " and minimum no. is "<< min ; 
	return 0 ; 
}
