
#include <iostream>
using namespace std;

int main(){

   int n1,n2, suma = 0, resta = 0, multiplicacion = 0, cociente = 0; //Asignamos las variables.
   
   //Le pedimos al usuario los dos numeros.
   
   cout << "Digite un numero: "; cin>>n1;
   cout << "Digite otro numero: "; cin>>n2;
   
   //Programamos las operaciones.
   

   suma = n1 + n2;
   resta = n1 - n2;
   multiplicacion = n1 * n2;
   cociente = n1 / n2;



   
   cout<<"La suma es: "<<suma<<endl; //el endl da un salto de linea.
   cout<<"La resta es: "<<resta<<endl;
   cout<<"La multiplicacion es: "<<multiplicacion<<endl;
   cout<<"El cociente de la division es: "<<cociente<<endl;
   return 0;
}
