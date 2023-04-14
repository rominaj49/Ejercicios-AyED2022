
#include <iostream>
using namespace std;

int fechaDiasUno(int fecha){

int anio= (fecha/10000);
int mes= fecha%100;
int dia= (fecha/100) % 100;

return 2022-anio;
}

int fechaDiasDos(int fecha){

int anio= fecha/10000;
int mes= fecha%100;
int dia= (fecha/100) % 100;

return 2022-anio;
}

int main() {
	
   string nombre, nombre1;
   int fecha, fecha2;
   
   cout<< "Favor de ingresar nombres: "<<endl;
   cin>> nombre;
   cin>> nombre1;
   
   cout<< "Favor de ingresar fechas de nacimiento en formato AAAAMMDDe: "<<endl;
   cin>>fecha;
   cin>>fecha2;
   
   if (fechaDiasUno(fecha)>fechaDiasDos(fecha2)){
       cout<< "El mas viejo es: " << nombre<<endl;
       cout<< "El mas joven es: " << nombre1<<endl;
   }

   else{
       cout<< "El mas joven es: " << nombre<<endl;
       cout<< "El mas viejo es: " << nombre1<<endl;
   }
	
 return 0;
}