#include <iostream>
using namespace std;
//Programa de la ultima practica
int main()
{
 int n,u,d,c;
 float p;
 //inicializa la variable contadora
 c=0;
 //leer numero
 cout<<"ingrese el numero:";cin>>n;
 //solamente permite ingresar de 2 cifras
 while(n>=10 && n<=99)
 {
   //decenas
   d=n/10;
   //unidades
   u=n%10;
   //promedio
   p=(u+d)/2;
   cout<<"promedio:"<<p<<endl;
   //condicion si es par
   if(n%2==0)
   {
    //contador de pares
    c+=1;   
   }
   //deja ingresar otro numero
   cout<<"ingrese otro numero:";cin>>n;
 }
 //se muestra la cuenta de pares
 cout<<"Se ingresaron "<<c<<" pares"<<endl;
 //se para la ejecucion
 system("pause");
}
