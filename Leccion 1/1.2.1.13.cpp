//1.2.1.13. Factorial de un número
//Dificultad: básica, Requerido: Indispensable.
//Dado un valor numérico entero positivo, informar su factorial.
//NOTA: El factorial de un número n (se indica n!) se calcula así: n * n-1 * n-2 * ... * 3 *
//2 * 1. El factorial de 0 es 1. Por ejemplo: 5! es: 120, 4! es: 24 y 0! es: 1.

#include<iostream>
using namespace std;

int main(){

bool produ=true;
int a;
float factorial=1;

cout<<"Ingrese un valor: ";
cin>>a;

if (a>0)
{
  while (produ==true) {

    factorial= factorial*a;
    a= a-1;

if (a==0) {
    produ=false;
    }
}
 cout<<"El factorial es: "<<factorial<<endl;

}

else{

    cout<<"Ingrese un valor positivo."<<endl;
}
return 0;
}