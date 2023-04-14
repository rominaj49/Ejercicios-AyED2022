//1.2.1.18. Factorial de los primeros números naturales Dificultad: básica, Requerido: Indispensable.
//Dado un valor numérico entero positivo n, se pide mostrar el factorial de los primeros n números naturales.
//Por ejemplo: si n=7, entonces la salida debe ser: 1, 2, 6, 24, 120, 720, 5040.


#include <iostream>
using namespace std;

int main (){
int n;

 cout<<"Ingrese un numero: ";
 cin>>n;

 int z, x=1, y=1;

 for (int i = 1; i<=n; i++){

 z= x*i;
 cout<< z << endl; //1 
 x=z;
 }
return 0;
}