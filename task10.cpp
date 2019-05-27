// converting to lower case
#include<iostream>
#include<string.h>
using namespace std ;  
int main(){
	char s[25] ;
	int n ;   
	cout << " enter the string " ; 
	gets(s) ;
	for(int i=0 ; s[i]!='\0' ; i++){
		if(s[i]>='A' && s[i]<='Z'){
			n=s[i] ; 
			n=n+32 ; 
			s[i]=n ; 
		}
		
	}
	cout<< "\n the necessary string " ; 
	puts(s) ; 
	return 0; 
}
