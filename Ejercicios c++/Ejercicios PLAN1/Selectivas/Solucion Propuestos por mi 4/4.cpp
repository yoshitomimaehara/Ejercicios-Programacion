#include<iostream.h>

int main()
{
 int s;
 double sf,a;
 char nomtra[10];
 
 cout<<"ingrese el nombre del trabajador:";cin>>nomtra;
 cout<<"ingrese sueldo:";cin>>s;
 if(s>=500 && s<1000)
      a=s*0.30;
 else if(s>=1000 && s<2000)
      a=s*0.20;
 else if(s>=2000 && s<3000)
      a=s*0.15;
 else if(s>3000)
      a=s*0.10;
 else
      a=0;
      
 sf=s+a;
 cout<<"el sueldo final es:"<<sf;
 cout<<"\n";
 system("pause");
}
