#include<iostream.h>

int main()
{
 int ang,i;
 cout<<"ingrese el angulo en sexagesimales:";cin>>ang;
  if(ang>0 && ang<90)
           i=1;
  else if(ang>90 && ang<180)
           i=2;
  else if(ang>90 && ang<180)
           i=3;
  else if(ang>90 && ang<180)
           i=4;  
  cout<<"Pertenece ";
  switch(i)
  {
  //I cuadrante
  case 1:
  cout<<"al I cuadrante\n";
  break;
 //II cuadrante
 case 2:
  cout<<"al II cuadrante\n";
  break;
 //III cuadrante
 case 3:
  cout<<"al III cuadrante\n";
  break;
 //IV cuadrante
 case 4:
  cout<<"al IV cuadrante\n";
  break;
 }
 
 system("pause");
}
