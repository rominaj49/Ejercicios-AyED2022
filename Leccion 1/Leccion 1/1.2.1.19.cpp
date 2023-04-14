//1.2.1.19. Docenas
//Dificultad: básica, Requerido: Indispensable.
//Se ingresan por teclado varios valores enteros positivos, de a uno por vez. Se solicita informar:

//1. Cuántos valores v fueron ingresados, tal que v<=12.
//2. Cuántos valores v fueron ingresados, tal que12<v<=24.
//3. Cuántos valores v fueron ingresados, tal que 24<v<=36.
//4. Cuántos valores v fueron ingresados, tal que v==0 (cero).
//La carga de datos finaliza cuando se ingresa un valor negativo.

#include <iostream>
using namespace std;

int main (){
 int v;
 cin >> v;

 int i=1;
 int cero=0; //informe 4
 int uno =0; // informe 1
 int dos =0; //informe 2
 int tres=0;

 while( v>=0 ) 
 {
  i++;

  if (v==0)
  {
    cero++;
  }

  if (v<=12 && v!=0){
    uno++;
  }

  if (v>12 && v<=24){
    dos++;
  }

  if ( v>24 && v<=36){
    
    tres++;
  }

  cin >> v;

 }

 cout <<"Cantidad de valores v ingresados, tal que v<=12son: "<<uno<<endl;
 cout <<"Cantidad de valores v ingresados, tal que12<v<=24: "<<dos<<endl;
 cout <<"Cantidad de valores v ingresados, tal que 24<v<=36: "<<tres<<endl;
 cout <<"Cantidad de valores v ingresados, tal que v==0 son: "<<cero<<endl;

 return 0;

}