// Dado un valor numérico entero positivo n, informar el n-ésimo término de la suce- sión de Fibonacci. 
//Por ejemplo: si n es 6, la salida del programa debe ser 8.

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n,x=0,y=1,z=1;
	
	    cout<<"Digite la cantidad de digitos de la serie: ";
		cin>>n;
		
	for(int i=1;i<n;i++){
		z = x + y;
		x = y;
		y = z;		
	}
	
    cout<<z<<" ";


	return 0;
}