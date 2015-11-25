#include<iostream.h>

int main()
{
int a,b;
char opcion;
float R;
cout<<"Ingresa el primer numero:";
cin>>a;
cout<<"Ingresa el segundo numero:";
cin>>b; 
cout<<"Ingresa la operacion a realizar:";
cin>>opcion;
switch(opcion)
{
case '+':
     R=a+b;
     cout<<"el resultado es:"<<R<<"\n";
     break;
case '-':
     R=a-b;
     cout<<"el resultado es:"<<R<<"\n";
     break;
case '*':
     R=a*b;
     cout<<"el resultado es:"<<R<<"\n";
     break;
case '/':
     if(b!=0)
       {
       R=a/b;
       cout<<"el resultado es:"<<R<<"\n";
       }           
     else
       cout<<"no se dividir ya que es indeterminado\n";
     break;
}
             
system("PAUSE");
return 0;
    }
