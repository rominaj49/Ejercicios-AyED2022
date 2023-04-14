//1.1.1.5. Mayor y menor valor entre dos números
//Se ingresa por teclado dos valores numéricos enteros, informar cuál es el mayor y cuál el menor. Si son iguales, entonces, mostrar un mensaje con el siguiente texto:
//“Los valores ingresados son iguales”.

#include<iostream>
using namespace std;

int main(){

int a,b;

cout<<"Ingrese un valor: ";
cin>>a;

cout<<"Ingrese otro valor: ";
cin>>b;


if (a==b){
    cout<<"Los valores son iguales: "<< b;
}

else if (a>b){

     cout<<"Es valor mayor es: "<< a;

}

else{
cout<<"El valor mayor es: "<< b;
}



return 0;
}

