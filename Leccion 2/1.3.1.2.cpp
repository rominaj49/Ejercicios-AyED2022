// 1.3.1.2. Función esPrimo
// Dificultad: básica, Requerido: Indispensable.
// Desarrollar la función esPrimo que retorna true o false según se determine
// que n es un número primo o no:
// bool esPrimo(int n);
// Invocando a la función esPrimo, desarrollar un programa que muestre por
// consola los primeros t números primos, donde t es un valor que ingresa el usuario.

#include <iostream>
#include <math.h>

bool esPrimo(int n){
  bool primo = true;

    int i=2;

    while (i<n && primo==true)  // 2<2 no cumple || 2<3 cumple entaa al while
    {
       if (n%i==0 ) //   
      {
      primo=false; //no es primo el numero q estoy evaluando
     }

     else //3%2
     {
      i++; //2+1=3
     }
   }

   return primo;
}

using namespace std;
int main(){

 cout<<"Ingrese un numero"<<endl;
 int n;
 cin>>n;

 int cont = 0;

 
 int nroAEval =2; //el numero desde donde va a empezar|| 3

  while (cont<n) // 0<6| 1<6
   {
  


   if (esPrimo(nroAEval))  // 2 es primo
   {
      cout<<nroAEval<<endl; //mostramos si es primo
      cont = cont + 1; // aumentamos el contador
   }

  nroAEval = nroAEval +1;
 }

  return 0;

} 