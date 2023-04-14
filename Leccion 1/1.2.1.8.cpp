//1.1.1.8. Separar los atributos de una fecha Dado un número de ocho dígitos que representa una fecha con formato aaaammdd, 
//se pide mostrar por separado el día, el mes y el año de la fecha ingresada.

#include <iostream>
using namespace std;

int main(){
int anio, dd = 0, mm = 0, aa = 0;
 cout << "Digite su fecha de nacimiento en AAAAMMDD: ";
 cin>>anio;


aa = anio/10000; // anio vale: 2020
dd = anio%100; // dia vale: 30
mm = (anio/100) % 100;

cout <<dd<<" del "<<mm<< " del "<< aa <<endl;

return 0;
}
