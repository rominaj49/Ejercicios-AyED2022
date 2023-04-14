//1.2.1.23. Máximos
//Dificultad: básica, Requerido: Indispensable.
//Cada uno de los siguientes ítems debe considerarse como un ejercicio en sí mismo.
//1. Dados 100 valores enteros positivos, informar cuál es el mayor.
//2. Dados 100 valores enteros, todos mayores que -10, informar cuál es el mayor.
//3. Dados 100 valores enteros, informar cuál es el mayor.
   

#include <iostream>
using namespace std;

int main (){
 int a,mayor;
  mayor=0;


 cout<<"Favor de ingesar valores enteros hasta 100: "<<endl; // tercer enunciado
     
  for (int i=0; i<4; i++){
    cin>>a;

      if(a>mayor){ // 4>0 ,  3>9no cumple
        mayor=a;  // mayor=4
      }
  }
 cout<<"El mayor valor de los enteros es: "<<mayor<<endl;


 cout <<"Favor de ingresar 100 valores enteros mayores a -10: "<<endl; //segundo enunciado
  mayor= -10;
  for (int i=0; i<4; i++){
    cin>>a; // -7, -2, -6,

      if(a>-10) { // -7>-10, -7>-8
        
        if(a>mayor){
        mayor=a;  //mayor = -7, mayor =-2
       }
      }

      else{
        cout<<"ingresar valor mayor a -10"<<endl;
      }
  }
 cout<<"El mayor de los valores enteros mayores que -10 es: "<<mayor<<endl;



 cout <<"Favor de ingresar 100 valores enteros positivos: "<<endl; //primero enunciado
  mayor= 0;
  for (int i=0; i<4; i++){
    cin>>a; // -7, -2, -6,

      if(a>0) { // -7>-10, -7>-8
        
        if(a>mayor){
        mayor=a;  //mayor = -7, mayor =-2
       }
      }

      else{
        cout<<"ingresar valor mayor a cero"<<endl;
      }
  }
 cout<<"El mayor de los valores enteros positivos es: "<<mayor<<endl;

 return 0;

}
