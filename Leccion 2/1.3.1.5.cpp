// 1.3.1.5. Separar los atributos de una fecha
// Dificultad: básica, Requerido: Indispensable.
// Desarrollar la siguiente función:
// void fechaDividir(int f,int& a,int& m,int& d);
// La función recibe en f una fecha representada como un entero de ocho
// dígitos con formato aaaammdd, y debe dividir sus componentes y asignarlos a los
// parámetros a, m y d (año, mes y día, respectivamente).
// Invocando a fechaDividir, desarrollar un programa donde el usuario
// ingresa una fecha con formato aaaammdd y obtiene sus atributos por separado.
#include <iostream>
#include <math.h>
using namespace std;

void fechaDividir(int f, int& a, int& m, int& d)
{
a=f/10000;
m= f%100; // dia vale: 30
d= (f/100) % 100;

cout<<d<<"/"<<m<< "/"<<a<<endl;

}

int main(){

int fecha,a=0,m=0,d=0;
cout<<"Favor de ingresar fecha en formato AAAAMMDD: "<<endl;
cin>>fecha;

fechaDividir(fecha, a, m, d);

return 0;
}