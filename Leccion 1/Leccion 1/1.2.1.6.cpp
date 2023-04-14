//1.1.1.6. Mayor, medio y menor valor entre tres números
//Se ingresan tres valores numéricos enteros, diferentes entre sí, informar cuál es el mayor, cuál está en el medio y cuál es el menor.

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


//If para saber que valor es mayor

//9,4,3

if (a>b){     //Si detecta que A es mayor a C
    if (a>c) //y además detecta que a es mayor A también a B
    {
        cout<<"El valor mayor es: "<<a<<endl;
    }
    else{ //(a<c), detecta que A es menor a C
         cout<<"El valor mayor es: "<<c<<endl;
    }
}

 else{  //(a<b), detecta que A es menor que B
    if (b>c) // detecta que B es mayor a C
    {
         cout<<"El valor mayor es: "<<b<<endl;

    }
    else{ //(b<c), detecta que B es menor que C
         cout<<"El valor mayor es: "<<c<<endl;
    }
}

//if para saber que valor es el medio  SEGUIR SEGUIR SEGUIR SEWGUIR SEGUIR
//9,4,3

if (a>b){//
    if (a<c){
        cout<<"El valor que esta en el medio es: "<<a<<endl;
    } 
}

else {
    if (a>c){
         cout<<"El valor que esta en el medio es: "<<a<<endl;
    }
}


if (b>a){     //
    if (b<c){
        cout<<"El valor que esta en el medio es: "<<b<<endl;
    } 
}

else {
    if (b>c){
         cout<<"El valor que esta en el medio es: "<<b<<endl;
    }
}


if (c>a){     // 5 8 7
    if (c<b){
        cout<<"El valor que esta en el medio es: "<<c<<endl;
    } 
}

else {
    if (c>b){
         cout<<"El valor que esta en el medio es: "<<c<<endl;
    }
}



//if para saber que valor es menor

//9,4,3


if (a<b){     //Si detecta que A es menor a B
    if (a<c){ //y además detecta que A es menor también a C
    
        cout<<"El valor menor es: "<<a<<endl;

    }
    else{ //(a>C), detecta que A es mayor a C
         cout<<"El valor menor es: "<<c<<endl;

    }
}

else{  //(a>c), detecta que A es mayor que C
    if (b<c){//y detecta que B es menor que C
         cout<<"El valor menor es: "<<b<<endl;
    }
    else{ //(b>c), detecta que B es menor que C
         cout<<"El valor menor es: "<<c<<endl;
    }
}

return 0;

}
