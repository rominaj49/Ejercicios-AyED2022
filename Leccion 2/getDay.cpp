// 1.3.1.6. Función today
// Dificultad: básica, Requerido: Indispensable.
// Desarrollar la función today que retorna la fecha actual expresada como un entero
// de ocho dígitos con formato aaaammdd. int today();

#include <iostream>
#include <math.h>
using namespace std;
#include <time.h>

// asigna la fecha actual a los parametros dia, mes y anio
void getDate(int& dia, int& mes, int& anio)
{
// fecha actual expresada en segundos
time_t timestamp;
time(&timestamp);
// separo la fecha actual en atributos
struct tm* fechaActual = localtime(&timestamp);
dia = fechaActual->tm_mday;
mes = fechaActual->tm_mon+1;
anio = fechaActual->tm_year+1900;
}

int main(){

  int d,m,a;
 // obtengo la fecha actual invocando a getDate
  getDate(d,m,a);

  cout<< "Dia: " << d <<endl;
  cout<< "Mes: " << m <<endl;
  cout<< "Anio: " << a <<endl;

 return 0;
}