//Dado un valor numérico entero positivo n, informar los primeros n múltiplos de 5 que no sean múltiplos de 3.
//Por ejemplo: si n fuera 6, la salida deberá ser: 5, 10, 20, 25, 35, 40.

#include <iostream>
using namespace std;

int main (){

  int n;
 cout<<"Ingrese un numero"<<endl;
 cin >> n;

  for (int i=1; i<=n; i++){

    int x = 5*i;
    
    if (x%3!=0){
      cout<<x<<endl; 
    }
    else{ // de otra forma si lleva a ser multipo de 4, la cantidad de veces se sumará una vez mas, para que lleeegue a su
    //totalidad, es decir, ej: n=6 veces, si lo quitamos quedara de salida solo 5 ya que el contador hizo 6 veces su iteración, contando el 13.
      n++; 
    }
  }

 return 0;
}