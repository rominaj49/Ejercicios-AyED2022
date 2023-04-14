// 1.4.1.2. TAD Fecha
// Crear un TAD para encapsular la lógica de una fecha.
// 1. Analizar qué atributos debe tener su estructura.
// 2. Analizar qué funcionalidad debe proveer.
// 3. Desarrollar las funciones y la estructura del TAD.
// 4. Probar el desarrollo anterior.

struct Fecha{

int anio;
int mes;
int dia;
};

Fecha fecha (int d, int m, int a){
  Fecha c;
  c.dia=d;
  c.mes=m;
  c.anio=a;

  return c;
}

bool fechaValida (Fecha f){

 bool ret= false;

 if (f.mes!=2  && f.mes>0 && f.mes<=12)
   {
     if (f.mes==1 || f.mes==3 || f.mes==5 || f.mes==7 || f.mes==8 || f.mes==10 || f.mes==12){
         if (f.dia<=31 && f.dia>0){
          ret=true;
        }
      }
     else {
        if(f.dia<=30 && f.dia>0){
         ret=true;
        }
    }
  }

  else if (f.mes==2 && f.anio%4==0 || (f.anio%400!=0 && f.anio%100==0)){
    if(f.dia<=29 && f.dia>0){
    ret=true;
    }
  }

  else if(f.dia>0 && f.dia<=28 && f.mes==2 && f.mes>0 && f.mes<=12 ){
      ret=true;
    }
  

 return ret;
}


#include <iostream>
using namespace std;

int main (){
 

  Fecha f1 = fecha(9,2,2020);

  if(fechaValida(f1)==true){
    cout<<"La fecha es correcta"<<endl;
  }
  else{
    cout<<"La fecha es incorrecta"<<endl;
  }


return 0;
}