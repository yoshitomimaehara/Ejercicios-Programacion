#include<iostream.h>

int main()
{
 int n,u,d,c,m;
 cout<<"ingrese el numero:";cin>>n;
 

 if(n>9 && n<100)
 {
   d=n/10;
   u=n%10;
  if(u==d)
   cout<<"es capicua de 2 cifras"; 
 }

 else if(n>99 && n<1000)
 { 
   c=n/100;
   d=n%100/10;
   u=n%10;
  if(c==u)
   cout<<"es capicua de 3 cifras";
 }
 else if(n>999 && n<10000)
 {
  m=n/1000;
  c=n%1000/100;
  d=n%100/10;
  u=n%10;
  if(m==u && c==d)
   cout<<"es capicua de 4 cifras";
 }
 cout<<"\n";
 system("pause");
}
