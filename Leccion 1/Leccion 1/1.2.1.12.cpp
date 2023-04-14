//1.1.1.12. Producto mediante sumas sucesivas
//Dados dos enteros, informar su producto calculándolo mediante sumas sucesivas.
//1. Considerando que los valores ingresados serán números positivos o cero.
//2. Considerando que los valores ingresados también podrían ser negativos.

#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){

bool produ=true;
int a, b;
int producto=0; //es un acumulador por lo tanto debe empezar en 0

cout<<"Ingrese un valor: "; cin>>a;   
cout<<"Ingrese un valor: "; cin>>b;


// ej 2x3

while (produ==true){

   producto = producto+a; //en el acumulador se suma 2:   0+2=2 luego  2+2= 4 y luego 4+2=6
   b= b-1;               //en el b se resta 1 vez:        3-1=2 luego  2-1=1 y luego 1-1= 0 por lo que cumple el siguiente if y deja de iterar.

if (b==0) {
   produ=false;

}
}
 cout<<"El producto es: "<<producto<<endl;

return 0;

}