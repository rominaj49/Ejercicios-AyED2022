//============================================================================
// Name        : Demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Fecha
{
   int dia;
   int mes;
   int anio;
};

Fecha fecha(int d,int m,int a) // aca hae una funcion de la estructura y la inicializa
{
   return {d,m,a};
}

string fechaToString(Fecha x)
{
   return to_string(x.dia)+"/"+to_string(x.mes)+"/"+to_string(x.anio);
}

struct Direccion
{
   string calle;
   int nro;
};

Direccion direccion(string c,int n)
{
   Direccion x;
   x.calle = c;
   x.nro = n;
   return x;
}

string direccionToString(Direccion d)
{
   return d.calle+" "+to_string(d.nro);
}



struct Persona //definicion de la estructura
{
   int dni;
   string nombre;
   Fecha fechaNacimiento;
   Direccion dir;
};

Persona persona(int dni,string n,Fecha f,Direccion d)
{
   return {dni,n,f,d};
}

string personaToString(Persona p)
{
   string x = "";
   x = x+p.nombre+", ";
   x = x+to_string(p.dni)+", ";
   x = x+direccionToString(p.dir)+", ";
   x = x+fechaToString(p.fechaNacimiento);
   return x;
}

int main()
{
//   Persona p;
//   p.nombre="Pablo";
//   p.dni = 23232;
//   p.fechaNacimiento = {2,10,1938};
//   p.dir.calle = "San Martin";
//   p.dir.nro = 233
   Persona p = persona(23232,"Pablo",fecha(2,10,1938),direccion("San Martin",233));
   cout << personaToString(p) << endl;

   return 0;
}














