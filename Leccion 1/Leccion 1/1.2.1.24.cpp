//1.2.1.24. Mínimos
//Dificultad: básica, Requerido: Indispensable.
//Cada uno de los siguientes ítems debe considerarse como un ejercicio en sí mismo.
//1. Dados 100 valores enteros negativos, informar cuál es el menor.
//2. Dados 100 valores enteros menores que 10, informar cuál es el menor.
//3. Dados 100 valores enteros, informar cuál es el menor.

#include <iostream>
using namespace std;

int main (){
 int a,menor;
 menor=0;

 cout<<"Favor de ingesar valores enteros hasta 100: "<<endl; // tercer enunciado
     
  for (int i=0; i<4; i++){
    cin>>a;

      if(a<menor){ //
        menor=a;  // 
      }
  }
 cout<<"El menor valor de los enteros es: "<<menor<<endl;


 cout <<"Favor de ingresar 100 valores enteros menores a -10: "<<endl; //segundo enunciado
  menor= -10;
  for (int i=0; i<4; i++){
    cin>>a; 

      if(a<-10) { 
        
        if(a<menor){
        menor=a;  
       }
      }

      else{
        cout<<"ingresar valor menor a -10"<<endl;
      }
  }
 cout<<"El menor de los valores enteros menores que -10 es: "<<menor<<endl;



 cout <<"Favor de ingresar 100 valores enteros negativos: "<<endl; 
  menor= 0;
  for (int i=0; i<4; i++){
    cin>>a; 

      if(a<0) { 
        
        if(a<menor){
        menor=a; 
       }
      }

      else{
        cout<<"ingresar valor menor a cero"<<endl;
      }
  }
 cout<<"El mayor de los valores enteros positivos es: "<<menor<<endl;

 return 0;

}