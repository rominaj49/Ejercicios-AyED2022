//1.1.1.9. Unificar los atributos de una fecha Dada una terna de números naturales que representan el día, mes y año de una fecha, 
//se pide unificarlos en un único valor numérico entero de ocho dígitos (aaaammdd), tal que
//los primeros cuatro dígitos representen el año, los dos siguientes el mes, y los últimos el día.

#include <iostream>
using namespace std;

int main(){
int anio, dd, mm , aa ;


cout << "Digite su dia de nacimiento: "; cin>>dd;
cout << "Digite su mes de nacimiento: "; cin>>mm;
cout << "Digite su anio de nacimiento: "; cin>>aa;

anio = (aa*10000) + (mm * 100) + dd;

cout<<anio;

return 0;
}
