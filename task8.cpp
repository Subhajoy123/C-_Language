// checking for anagrams
#include<iostream>
#include<string.h>
using namespace std ; 
void sort(char *a, int n) ; 
int main(){
	char s[25] ; 
	char p[25] ; 
	int k=0,l ; 
	cout << " enter first string " ; 
	gets(s) ;
	cout << " enter first string " ; 
	gets(p) ;
	if(strlen(s)==strlen(p)){
		l=strlen(s);
		sort(s,l) ; 
		sort(p,l) ; 
		for(int i=0 ; i<strlen(s) ; i++){
			if(s[i]!=p[i])
				k=1 ; 
		}
	if(k==1)
		cout<<" not anagram " ;
	else
		cout << " anagram " ; 
	}
	else
		cout << " not anagram " ; 
	return 0 ; 
}
void sort(char *a, int n){
		char m ; 
		for(int i=0 ; i<n-1 ; i++){
			for(int j=i+1 ; j<n; j++){
				if((int)a[i]> (int)a[j]){
					m=a[i];
					a[i]=a[j]; 
					a[j]=m ; 
				}
			}
		}
	
}
