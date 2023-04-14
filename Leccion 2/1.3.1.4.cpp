// 1.3.1.4. Unificar los atributos de una fecha
// Dificultad: básica, Requerido: Indispensable.
// Desarrollar la siguiente función:
// int fechaUnificar(int anio,int mes,int dia);

// La función debe unificar los valores de anio, mes y dia en un número en-
// tero de ocho dígitos, con formato aaaammdd. Por ejemplo: si anio fuese 2020, mes

// 10 y dia 15, entonces, el valor de retorno de fechaUnificar será: 20201015.
// Invocando a fechaUnificar, desarrollar un programa donde el usuario
// ingresa el día, mes y año de una fecha (como valores separados), y obtiene por
// consola la fecha unificada con formato aaaammdd.


#include <iostream>
#include <math.h>
using namespace std;

int fechaUnificar(int a, int m, int d)
{
return a*10000 + m*100 + d;
}

int main(){

int anio,mes,dia;
cout<<"Ingresar anio: "<<endl;
cin>>anio;
cout<<"Ingresar mes: "<<endl;
cin>>mes;
cout<<"Ingresar dia: "<<endl;
cin>>dia;

cout<<fechaUnificar(anio,mes,dia)<<endl;

return 0;
}