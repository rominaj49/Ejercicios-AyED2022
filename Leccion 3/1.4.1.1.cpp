#include <iostream>
#include <math.h>
using namespace std;


struct Fraccion
{
    double suma;
    double resta;
    double division;
    double multi;
};

Fraccion fraccionOperacion(double x, double y){

Fraccion c;

c.suma = x+y;
c.resta= x-y;
c.division= x/y;
c.multi= x*y;

return c;
}

string fraccionOperacionToString(Fraccion b){

string d = "La suma es: ";

d= d + to_string(b.suma)+ ", La resta es: ";
d= d + to_string(b.resta)+", La division es: ";
d= d + to_string(b.division)+ ", la multiplicacion es: ";
d= d + to_string(b.multi)+ " ";

return d;
}

int main (){

cout<<fraccionOperacionToString(fraccionOperacion(4/2,2/2));
return 0;
}
