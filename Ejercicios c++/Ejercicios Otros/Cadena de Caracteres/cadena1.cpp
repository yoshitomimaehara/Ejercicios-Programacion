#include<iostream>
#include<string>
using namespace std;

int main(){
 string cadena,name,cad;
 cout<<"ingrese la cadena:";cin>>cadena;
 cout<<cadena.length()<<endl;//longitud
 cout<<cadena.size()<<endl;//tamaño
 cout<<cadena[1]<<endl;//caracter de la posicion 4
 cout<<"ingrese la cadena:";cin>>name;
 cad=cadena+=name+=name;//+=:concatenar o anexar
 cout<<cad<<endl;//longitud
 cout<<cad.length()<<endl;//longitud
 //append() tambien concatena
 system("pause");
}

