//1.1.1.10. Fecha más próxima
//Se ingresan dos fechas, informar cuál es la más cercana a hoy. Determinar:
// 1. En qué formato el usuario deberá ingresar las fechas solicitadas.
//2. Datos de entrada que el algoritmo necesita para resolver el problema.
//Hay que tener en cuenta los años bisiestos. NOTA: Un año es bisiesto si es divisible por 4, o por 400 pero no por 100.

#include <iostream>
using namespace std;

int main(){
    
int dd, mm, aa, dd1, mm1, aa1, dd2, mm2, aa2, fecha, fecha1, fecha2;

cout << "Digite el dia, mes, y anio de hoy: "; cin>>dd>>mm>>aa;
cout << "Digite un dia, mes y anio: "; cin>>dd1>>mm1>>aa1;            
cout << "Digite otro dia, mes y anio: "; cin>>dd2>>mm2>>aa2;        

fecha = (aa*10000) + (mm* 100) + dd;
fecha1 = (aa1*10000) + (mm1* 100) + dd1;
fecha2 = (aa2*10000) + (mm2* 100) + dd2;


if ( (aa%4==0) && (aa%100!=0) || (aa%400==0)){ //Esto indica que el año de esa fecha es bisiesto = 366 días
  if (fecha>fecha2 && fecha2<fecha1){

  cout<<"La fecha mas cercana es: "<<fecha2<<endl;
  cout<<"La fecha mas cercana es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;

  }

}


else{ //Esto indica que el año de esa fecha NO es bisiesto = 365 días
    cout<<"No es bisiesto"<<endl;

cout<<"La fecha es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
}





return 0;
}