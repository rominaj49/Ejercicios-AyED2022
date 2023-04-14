//1.2.1.26. Mínimo valor dentro de un intervalo
//Dificultad: moderada, Requerido: Indispensable.
//Sea un conjunto de valores numéricos que finaliza al ingresar un 0 (cero), informar
//cuál es el mínimo valor considerando sólo aquellos que pertenecen al intervalo [-16, 27].

#include <iostream>
using namespace std;

int main (){

int a, minimo=a;
cout<< "Ingresar valores a excepción del 0: "<<endl;
cin>>a;

while (a!=0){

 if (a>=-16 && a<=27){
  if (a<=minimo){
   minimo=a;
  }
 }

cin>>a;
}

    cout<< "El minimo valor entre el intervalo [-16, 27] es: "<<minimo<<endl;

return 0;
}