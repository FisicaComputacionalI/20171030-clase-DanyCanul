//Programa que calcula promedio
//Autor: Daniela Canul Garcia
//Creado el 30 de Octubre de 2017
#include <iostream>
using namespace std;
int main (){
 int edad[14];
 int suma=0;
for(int i=0; i<14; i++)
{
 cout<<"¿a que edad terminaste la carrera? "<<endl;
 cin>>edad[i];
 suma+=edad[i];
}
for (int j=0; j<14; j++)
 cout<<edad[j]<< ",";
 cout<<endl;
 cout<<"La edad promedio de graduaciòn esperada es "<<suma/14<<endl;
return 0;
}

