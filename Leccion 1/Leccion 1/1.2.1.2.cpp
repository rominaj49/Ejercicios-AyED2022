
#include <iostream>
using namespace std;

int main(){

   int a,B, division = 0;//Asignamos las variables.
   
   //Le pedimos al usuario los dos numeros.
   
   cout << "Digite un numero: "; cin>> a;
   cout << "Digite otro numero: "; cin>> B;


   //Programamos las operaciones.

 if ( B == 0)
 {
   cout<<"Error, el segundo valor no puede ser cero."<<endl;

 }

 else{
   division = a / B;
   cout<<"El cociente de la division es: "<< division <<endl;

 }
   return 0;
}
