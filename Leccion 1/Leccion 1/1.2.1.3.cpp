//1.1.1.3. División entera y módulo
//Se ingresa por teclado un valor numérico entero, informar:
//1. La quinta parte de dicho valor.
//2. El resto que surge al dividir el valor ingresado en cinco partes iguales.
//3. La séptima parte de la quinta parte.

#include <iostream>
using namespace std;

int main(){

 int a, division, residuo, septimaParte;

cout<<"Ingrese un numero entero: "; cin>>a; //Guarda en la memoria aquél valor que ingreso el usuario.


//Procedemos con las operaciones

division = a/5;
residuo = a%5;
septimaParte = division/7;

cout<<"La quinta parte de la division entre 5 es: "<<division<<endl;
cout<<"El resto de la division entre 5 es: "<<residuo<<endl;
cout<<"La septima parte de la division es: "<<septimaParte<<endl;

return 0;
}