//Dificultad: básica, Requerido: Indispensable.
//Dado un valor entero positivo, informar si es un número primo.
//NOTA: Un número es primo si sólo es divisible por sí mismo y por 1.

#include<iostream>
using namespace std;

int main(){

int a;

cout<<"Ingrese un numero: ";
cin>>a;
bool primo = true;

if (a>0){

for (int i = 2 ; i<'a' ; i++){

  if(a % i == 0) {
  primo = false;
}

if (primo == true){

  cout<<"El numero no es primo"<<endl;
}

else{
 cout<<"Ingrese un valor positivo"<<endl;
 }
}

return 0;
}
