//Programa que calcula promedio con apuntador
//Autor: Daniela Canul Garcia
//Creado el 30 de Octubre de 2017
#include <vector>
#include <iostream>
using namespace std;
int main (){
 size_t talla=14;
 vector<int> edad(talla);
int suma=0;
for(int i=0; i<talla; i++)
{
 cout<<"¿a que edad terminaste la carrera? "<<endl;
 cin>>edad[i];
 suma+=edad[i];
}
for (int j=0; j<talla; j++)
 cout<<edad[j]<< ",";
 cout<<endl;
 cout<<"La edad promedio de graduaciòn esperada es "<<suma/talla<<endl;
return 0;
}
