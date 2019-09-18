#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
int opcion = 8, i, j, a, b, m, n, k, l, z;

while (opcion != 0)
{
cout<<"Escoge una de las opciones: "<<endl<<endl;
cout<<"1.) Sumar"<<endl;
cout<<"2.) Restar"<<endl;
cout<<"3.) Multiplicar"<<endl;
cout<<"4.) Dividir"<<endl;
cout<<"5.) Salir"<<endl<<endl;
cout<<"Tu opcion es: ";
cin>>opcion;
system ("Cls ()");

switch (opcion)
{
case 1:
cout<<"Ingrese primer numero entero: ";
cin>>i;
cout<<"Ingrese segundo numero entero: ";
cin>>j;
cout<<endl;
cout<<"La suma de los numeros es: "<<i+j<<endl;
cout<<endl;
system ("PAUSE()");
system ("Cls ()");
break;
case 2:
cout<<"Ingrese primer numero entero: ";
cin>>a;
cout<<"Ingrese el segundo numero entero: ";
cin>>b;
cout<<endl;
cout<<"La resta de los numeros es: "<<a-b<<endl;
cout<<endl;
system ("PAUSE()");
system ("Cls ()");
break;
case 3:
cout<<"Ingrese el primer numero entero: ";
cin>>m;
cout<<"Ingrese el segundo numero entero: ";
cin>>n;
cout<<endl;
cout<<"La multiplicacion de los numeros es: "<<m*n<<endl;
cout<<endl;
system ("PAUSE()");
system ("Cls ()");
break;
case 4:
cout<<"Ingrese el primer numero entero: ";
cin>>k;
cout<<"Ingrese el segundo numero entero: ";
cin>>l;
cout<<endl;
cout<<"La division de los numeros es: "<<k/l<<endl;
cout<<endl;
system ("PAUSE()");
system ("cls ()");
break;
case 5:
cout<<"Gracias... "<<endl;
opcion=0;
break;
default:
cout<<endl;
cout<<" No ingreso una de las opciones del menu "<<endl;
cout<<endl;
cout<<" ";
system ("PAUSE()");
system ("CLS()");
}
}
system ("Exit ()");

return 0;
}
