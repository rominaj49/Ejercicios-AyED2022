// 1.4.1.3. TAD Hora
// Crear un TAD para encapsular la lógica de una hora.
// 1. Analizar qué atributos debe tener su estructura.
// 2. Analizar qué funcionalidad debe proveer.
// 3. Desarrollar las funciones y la estructura del TAD.
// 4. Probar el desarrollo anterior.#include <iostream>

#include <time.h>
#include <ctime>



struct Hora
{

  int horas;
  int minutos;
  int segundos;
};

Hora hora(int hr, int min, int seg){
   
Hora d;
d.segundos= hr*3600 + seg;
d.minutos= hr/60 + min;
return d;
}

string horaToString (Hora f){

}


#include <iostream>
using namespace std;

int main (){
   
return 0;
}