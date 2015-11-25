#include <iostream>
#include <string>
#define pi 3.14
using namespace std;
float areacir(float);
float areacuad(float);
float arearect(float,float);

int main()
{
 int i;
 char res;
 float r,l,b,h,area;
 res='s';
 while(res=='s')
 {
 cout<<"============Areas============\n";
 cout<<"1.- Calcular Area del Circulo\n";
 cout<<"2.- Calcular Area del Cuadrado\n";
 cout<<"3.- Calcular Area del Rectangulo\n";
 do
 {
 cout<<"Ingrese la opcion:";cin>>i;
 }while(i!=1 && i!=2 && i!=3);
 
 switch(i)
 {
    case 1:
        cout<<"ingrese el radio:";cin>>r;
        area=areacir(r);
        cout<<"el area es:"<<area<<"\n";
        break;
    case 2:
        cout<<"ingrese el lado:";cin>>l;
        area=areacuad(l);
        cout<<"el area es:"<<area<<"\n";
        break;
    case 3:
        cout<<"ingrese la base:";cin>>b;
        cout<<"ingrese la altura:";cin>>h;
        area=arearect(b,h);
        cout<<"el area es:"<<area<<"\n";
        break;
 }
 
 do
 {
 cout<<"desea hallar otra area(s/n):";cin>>res;
 }while(res!='s' && res!='n');
 
 if(res=='s')
 {
  system("cls");
 }

 }
 system("pause");
}

float areacir(float r)
{
    return pi*r*r;
}

float areacuad(float l)
{
    return l*l;
}

float arearect(float b,float h)
{
    return b*h;
}
