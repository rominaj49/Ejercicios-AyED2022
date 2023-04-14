// Dificultad: básica, Requerido: Indispensable.
// Desarrollar la función factorial que calcula y retorna el factorial de n.
// double factorial(int n);
// Invocando a factorial, desarrollar un programa que muestre el factorial
// de los primeros t números naturales, donde t es un valor que se ingresa por consola.


#include <iostream>
using namespace std;


double factorial(int n){

int i=1, multiplicacion=1, factoriaa=0;

  while (i<=n){
     factoriaa= i*multiplicacion;
     cout<<factoriaa<<" "<<endl;
     multiplicacion=factoriaa;
     i++;
    }

 return factoriaa;
}

int main(){

int t;
cout<<"Ingrese un numero para su factorial: "<<endl;
cin>>t;

return factorial(t);
}