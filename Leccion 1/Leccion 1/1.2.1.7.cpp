//1.1.1.7. Tipo de triángulo según sus lados
//Se ingresan tres valores que representan la longitud de los lados de un triángulo, informar cuál es el tipo del triángulo ingresado (isósceles, equilátero o escaleno).


#include<iostream>
using namespace std;

int main(){

int a,b,c;

cout<<"Ingrese un valor: ";
cin>>a;

cout<<"Ingrese otro valor: ";
cin>>b;

cout<<"Ingrese otro valor: ";
cin>>c;

if (a==b && b==c )
{
 
  cout<<"El triangulo es equilatero."<<endl;
  
}


else if (a==b || b==c || a==c ) // Puede cumplirse que sea isosceles si algun valor es igual al otro ya sea el segundo o tercero
{

  cout<<"El triangulo es isosceles"<<endl;

  
}


else if (a!=b && b!=c && a!=c)
{
  
  cout<<"El triangulo es escaleno"<<endl;
 
}

return 0;
}