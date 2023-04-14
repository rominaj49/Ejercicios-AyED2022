//Dificultad: básica, Requerido: Indispensable.
//Se ingresan varios valores numéricos enteros, finalizando la carga de datos al ingresar un 0 (cero). Se pide informar:
//1. Cantidad positivos.
//2. Cantidad de negativos.
//3. Porcentaje de pares.
//4. Promedio de los positivos.
//5. Porcentaje de negativos.

#include <iostream>
using namespace std;

int main (){

int v;
int positivos = 0;
int negativos = 0;
int sumapos = 0;
int sumaneg = 0;
int total =0;
int parespo=0;
int paresne=0;
cout << "Ingrese un valor: "<<endl;
cin >>v;

while (v!=0){

 if ( v>0 )
 {
    positivos++;
    sumapos= sumapos +v;
    if (v%2==0)
    {
      parespo++;

    }
    
 } 

 else
 {
    negativos++;
    sumaneg= sumaneg +v;

  if (v%2==0)
    {
      paresne++;

    }
 }
 total++;
 cin>>v;
}

int promediopos  = sumapos/positivos;
int porcentajeneg = negativos*100/total;
int porcentajepar = (paresne+parespo)*100/total;

cout<< "La cantidad de positivos es: "<<positivos<<endl;
cout<< "La cantidad de negativos es: "<<negativos<<endl;
cout<< "El porcentaje de pares es del: "<<porcentajepar<<"%"<<endl;
cout<< "El promedio de positivos es: "<<promediopos<<endl;
cout<< "El porcentaje de negativos es del : "<<porcentajeneg<<"%"<<endl;

return 0;

}