//Dificultad: básica, Requerido: Indispensable.
//Dados 50 valores numéricos enteros, que se ingresan de a uno por vez, se pide


#include <iostream>
using namespace std;

int main(){

int v;
int i=1, mayoresCien=0, sumaMen=0, sumaMayores=0;

cout<<"Ingresar valores hasta 50: "<<endl;

 while (i<=5){
  cin>>v;
    i++;


 if(v>100){
 mayoresCien++; //cantidad de mayores a cien
 sumaMayores = sumaMayores + v; //se ira sumando las cantidades mayores a cien que esten en v
 }

 else if (v<-10){
 sumaMen= sumaMen + v;
  }


 }

 //informar el promedio de los mayores que 100, y la suma de los menores que -10.
double promedioFinal= (sumaMayores)/(mayoresCien);

 cout<< "La suma de menores que menos 10 es: " <<sumaMen<<endl;
 cout<< "El promedio de los mayores que 100 es: " <<promedioFinal<<endl;


 return 0;
}