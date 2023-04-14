//Se ingresan dos valores numéricos enteros que corresponden a un mes y un año (1
//para enero, 2 para febrero, etcétera), se pide informar cuántos días tiene el mes;
//teniendo en cuenta que el año podría ser bisiesto.

#include <iostream>
using namespace std;

 
  int main(){

int mes, anio;

cout<< "Favor de ingresar un mes"<< endl;
cin>>mes;
cout<< "Favor de ingresar un anio"<< endl;
cin>>anio;


if (mes!=2 ){

if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)

cout<<"El mes tiene 31 dias"<<endl;

else{
  cout<< "El mes tiene 30 dias"<<endl;
  }

}

else if (anio%4!=0 || (anio%400==0 && anio%100!=0)){
//Aca filtramos si NO ES BISIESTO, para eso la division por 
  cout<< "El mes tiene 28 dias"<< endl;
}

 else{
    cout<< "El mes tiene 29 dias bisiesto"<<endl;
  }

return 0;
};