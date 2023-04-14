// 1.3.1.3. Cuántos días tiene el mes
// Dificultad: básica, Requerido: Indispensable.
// Desarrollar las siguientes funciones:
// bool fechaEsAnioBisiesto(int a);
// La función debe retornar true o false según el año a que recibe como
// parámetro sea o no bisiesto.
// int fechaDiasMes(int m,int a);
// La función debe retornar la cantidad de días que tiene el mes m, donde 1 es
// enero; 2, febrero, etcétera.
// Invocando a las funciones anteriores, desarrollar un programa que, dado un
// mes y año que el usuario ingresará por teclado, le indicará cuántos días tiene el mes.


#include <iostream>
#include <math.h>
using namespace std;

bool fechaEsAnioBisiesto(int a)
{
  if (a%4==0 || (a%400!=0 && a%100==0))
  {
   return true;
  }

return false;
}

int fechaDiasMes(int m, int a){

if (m!=2){
   if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
   {
  cout<< "El mes tiene 31 dias"<<endl;
   }

  else
  {
  cout<< "El mes tiene 30 dias"<<endl;
  }
}

else{
  if (fechaEsAnioBisiesto(a) ){
      cout<<"El mes tiene 29 dias"<<endl;
  }

  else{
      cout<<"El mes tiene 28 dias"<<endl;
  }
}

return 1;
}
    



int main(){

int mes,anio;
cout<<"Ingrese anio: "<<endl;
cin>>anio;
cout<<"Ingrese mes: "<<endl;
cin>>mes;


return fechaDiasMes(mes, anio);
}