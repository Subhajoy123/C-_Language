// sorting array in ascending order
#include<iostream>
using namespace std ; 
int main(){
	int n,t; 
	int a[10] ;
	cout<< " enter the size " ; 
	cin >> n ; 
	cout<< " enter the elements \n" ; 
	for(int i=0 ; i<n; i++)
		cin>> a[i];
	cout<< "\n the array \n" ; 
	for(int i=0 ; i<n; i++)
		cout<< a[i] <<"," ; 
	cout << "\n the sorted array \n" ; 
	for(int i=0 ; i<n; i++){
		for(int j=0 ; j<n-i-1 ; j++){
			if(a[j]>a[j+1]){
				t=a[j] ; 
				a[j]=a[j+1] ; 
				a[j+1]=t ; 
			}
		}
	}
	for(int i=0 ; i<n; i++)
		cout<< a[i] <<"," ; 
	
	return 0 ; 
}
