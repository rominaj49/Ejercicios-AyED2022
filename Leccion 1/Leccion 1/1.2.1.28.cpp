// Se ingresan n conjuntos de m valores numéricos cada uno. Se pide informar:
// 1. Para cada uno de los n conjuntos:
// a. El valor promedio.
// b. El máximo valor.
// c. Porcentaje de valores positivos.}

// 2. Para todo el lote de datos:
// a. Valor promedio.
//b. Porcentaje de valores negativos.
//c. Valor mínimo.


#include <iostream>
using namespace std;



int main(){

int n,lotes=0, valores, minimo;
double suma, y=0, valoresNeg=0;

double sumaDos=0,valoresNegUno=0;
int minimoValor=valores, g;

 cout<<"Favor de ingresar cantidad de lotes por  : "<<endl;
 cin>>lotes;
 cout<<"Favor de ingresar cantidad de valores numericos: "<<endl;
 cin>>n;


 for (int z=1; z<=lotes; z++){

 cout<<"Ingrese los valores para el lote numero "<<z<<":"<<endl;


   for (int i=1; i<=n; i++){  //Aca hacemos que pida la cantidad de valores que ingreso el usuario y haceoms todas las operaciones
    cin>> valores;


    suma = suma + valores; //Aca hago el promedio de los valores del lote
    y++;

    if (valores<0){ //aca hago el porcentaje de los lotes
      valoresNeg++;
    }
    
    if (valores<=minimo){ // y aca saco el valor minimo
       minimo=valores;
    }


    if(i<n+1) //para que calcule los valores negativos para CADA UNO de los lotes
    {
       sumaDos = sumaDos + valores;

         if (valores<0)
        {
         valoresNegUno++;
        }

       g++; 

       if (valores<=minimoValor || minimoValor==0)
       {
          minimoValor=valores;
       }
    }
   }

   cout<<"El valor promedio del lote numero " <<z<< " es del: "<<(sumaDos/g)<<endl; //condicion 1
   cout<<"El porcentaje de valores negativos del lote numero " <<z<< " es del: "<<(valoresNegUno*100)/g<<"%"<<endl; //condicion 1
   cout<<"El valor minimo del lote numero " <<z<< " es el: "<<minimoValor<<endl; //condicion 1
 valoresNegUno=0;
 sumaDos=0;
 g=0;
 minimoValor=0;
}



cout<<"FINAL El valor promedio los " <<lotes<< " lotes es: "<<(suma/y)<<endl; //condicion 2
cout<<"FINAL El porcentaje de valores negativos de los " <<lotes<< " lotes es del: "<<(valoresNeg*100)/y<<"%"<<endl; //condicion 2
cout<<"FINAL El valor minimo de los " <<lotes<< " lotes es el: "<<minimo<<endl; //condicion 2




 return 0;
}