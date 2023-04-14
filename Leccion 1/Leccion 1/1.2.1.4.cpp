//1.1.1.4. Mayor valor entre dos números
//Se ingresa por teclado dos valores numéricos enteros diferentes entre sí, informar cuál es el mayor.


#include<iostream>
using namespace std;

int main(){

int a,b;

cout<<"Ingrese un valor: ";
cin>>a;

cout<<"Ingrese otro valor: ";
cin>>b;

if (a>b)
{
   cout<<"Es valor mayor es: "<< a ;
}
else{
   cout<<" El valor mayor es: "<< b;
}

return 0;
}