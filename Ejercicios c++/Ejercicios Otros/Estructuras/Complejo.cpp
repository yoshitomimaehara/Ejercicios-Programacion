#include <iostream>
#include <cmath>
using namespace std;

//Constante global
const double PI = 3.1415926;

//estructura complejo
struct complejo{
 double real ,imag;   
};

//definicion de funciones y metodos
complejo leecomplejo(void);
complejo suma(struct complejo,struct complejo);
complejo resta(struct complejo a,struct complejo b);
void transpol(struct complejo c);
void transeu(struct complejo c);
void impcomplejo(struct complejo);


//metodo main
int main(void)
{
 complejo i,op,c,c1,c2;
 c1=leecomplejo();
 c2=leecomplejo();
 cout<<"Que desea Hacer:";
 cout<<"1.Sumar\n";
 cout<<"2.Transformar a Polar\n";
 cout<<"3.Transformar a Euleriano\n";
 cout<<"ingrese la opcion:";
 cin>>i;
 switch(i)
 {
  case 1:
       c=suma(c1,c2);
       cout<<"la suma es:"<<endl;
       impcomplejo(c);
  case 2:
       cout<<"Cual de los 2 el primero o el segundo";cin>>op;
       if(op==1)
         c=c1;
       else
         c=c2; 
       cout<<"la forma polar es:"<<endl;
       transpol(c);
  case 3:
       cout<<"Cual de los 2 el primero o el segundo";cin>>op;
       if(op==1)
         c=c1;
       else
         c=c2;
       cout<<"la forma Euleriana es:"<<endl;
       transeu(c);
 }
 system("pause");	
}

//metodo de estructura leer complejo
 complejo leecomplejo(void)
{
  complejo c;
  cout<<"ingrese complejo\n";
  cout<<"ingrese la parte real:";cin>>c.real;
  cout<<"ingrese la parte imaginaria:";cin>>c.imag;
  return c;
}

//funcion suma complejo
 complejo suma(struct complejo a,struct complejo b)
{
 complejo c;
 c.real=a.real+b.real;
 c.imag=a.imag+b.imag;
 return c;
}

//funcion resta complejo
 complejo resta(struct complejo a,struct complejo b)
{
 complejo c;
 c.real=a.real-b.real;
 c.imag=a.imag-b.imag;
 return c;
}

//metodo transformar a polar
void transpol(struct complejo c)
{
 double ang,mod,arg;
 
 mod=sqrt(c.real*c.real + c.imag*c.imag);
 ang=atan2(c.imag, c.real);
 if(ang<0)  
 {
   ang=2*PI+ang;
 }
 arg=ang*180/PI;
 cout<<"Z="<<mod<<"(cos"<<arg<<" + isen"<<arg<<")"<<endl;  
}

//metodo Transformar a Euler

void transeu(struct complejo c)
{
 double ang,mod,arg;
 
 mod=sqrt(c.real*c.real + c.imag*c.imag);
 ang=atan2(c.imag, c.real);//atan2:arcotangente de 2 parametros
 if(ang<0)  
 {
   ang=2*PI+ang;
 }
 arg=ang*180/PI;
 cout<<"Z="<<mod<<"e^(i"<<arg<<")"<<endl;  
}

//metodo imprimir complejo
void impcomplejo(struct complejo c)
{
 char signo=(c.imag>0)?'+':' ';
 cout<<c.real<<signo<<c.imag<<"i"<<endl;
}
