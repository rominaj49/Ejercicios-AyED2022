//1.2.1.25. Mayor de los negativos, menor de los positivos
//Dificultad: moderada, Requerido: Indispensable.
//Dado un conjunto de valores numéricos que finaliza con el ingreso de un 0 (cero),
//informar cuál es el mayor de los negativos, y cuál el menor de los positivos.

#include <iostream>
using namespace std;

int main (){

int a, mayor=a, menor=a;

cout<<"Ingresar valores excepto 0: "<<endl;
cin>>a;

while (a!=0){

 if (a>0){ //caso en que las variables ingresadas sean positivos 64>0

 if (a<=menor){ //49<-1
    menor=a; /// mayor=49
    }
 }

 else{  //-64<0 || -70<0 
    if (a<=mayor){ // aca hacer -70<=-70
  mayor=a;//mayor= --70
 }
 }
 
 cin>>a;
 
}

cout<<"El menor de los positivos es: "<<menor<< endl; 
cout<<"El mayor de los negativos es: "<<mayor<< endl;

return 0;
}