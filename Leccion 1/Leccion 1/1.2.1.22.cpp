//1.2.1.22. Primeros múltiplos flexible
//Dificultad: básica, Requerido: Indispensable.
//Dados tres valores numéricos enteros positivos: n, a y b, informar el n-ésimo múltiplo de a que no es múltiplo de b.
//Por ejemplo: si n=10, a=5, b=3 entonces el n-ésimo múltiplo de 5 que no es múltiplo de 3 es: 70; y surge de la siguiente lista:
//Múltiplos de 5 = { 5, 10, 15no, 20, 25, 30no, 35, 40, 45no, 50, 55, 60no, 65, 70 }

#include <iostream>
using namespace std;

int main (){

 int n,a,b;

 cout<<"Ingrese un número: "<<endl;
 cin >> n;
  cout<<"Ingrese un número: "<<endl;
 cin >> a;
  cout<<"Ingrese un número: "<<endl;
 cin >> b;

 int res = 0;

 for (int i = 1; i<=n; i++){
    res = a*i;

     if (res%b!=0){
       //cout<<res<<endl;
     }

     else {
        n++;
      }
  }
 cout<<"El n-ésimo múltiplo de a que no es múltiplo de b es: "<<res<<endl;
 return 0;
}