/*
@Autor:Yoshitomi Maehara
Date & Hour:
*/
#include <iostream>
#include <string>
using namespace std;
//definicion de estructura
struct persona
{
  string apellido,telefono;
};
//funcion main()
int main()
{
   struct persona Yoshi;
   cout<<"Ingrese el Apellido:";cin>>Yoshi.apellido;
   cout<<"Ingrese su telefono:";cin>>Yoshi.telefono;
   
   cout<<"Apellido:"<<Yoshi.apellido<<endl;
   cout<<"Telefono:"<<Yoshi.telefono<<endl;
   system("pause");
}
