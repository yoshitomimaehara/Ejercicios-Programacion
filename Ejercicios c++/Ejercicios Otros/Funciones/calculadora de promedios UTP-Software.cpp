//no esta terminado
#include<iostream>
#include<cmath>
using namespace std;

  int i,sump=0,ep,ef,pl,m,nt; 
  float pp;

int menor(int a[],int l);
float promediopract(int a[],int l);
float promediolab(int a[]);
int efep();
  
int main()
{
  int n1[8];
  float pf;	
  char k;
  cout<<"ingrese el tipo de evaluacion:";cin>>k;
  
  if(k=='A' || k=='B')
  {
      promediopract(n1,5);
      efep();
      pf=(ep+2*ef+pp)/4;
      cout<<"su promedio es:"<<pf;
  }
  else if(k=='C' || k=='D')
  {
   pf=promediolab(n1);
   cout<<"su promedio es:"<<pf;
  }
  else if(k=='E')
  {
      promediopract(n1,nt);
      efep();
      pf=(ep+2*ef+pp)/4;
  }
  cout<<"\n";
system("pause");
}
 
 int menor(int a[],int l)
 {
  m=a[0];
  for(i=0;i<l;i++)
   if(a[i]<m) m=a[i];
  return m;
 }

 float promediopract(int a[],int l)
 {
  for(i=0;i<l;i++) 
  {
  cout<<"ingrese su practica "<<i+1<<":";cin>>a[i];
  sump=sump+a[i];
  }
  m=menor(a,l);
  pp=(sump-m)/(l-1);
  return pp;
 }
 
 float promediolab(int a[])
 {
  for(i=0;i<8;i++) 
  {
  cout<<"ingrese su laboratorio o Taller"<<i+1<<":";cin>>a[i];
  sump=sump+a[i];
  }
  m=menor(a,8);
  pp=(sump-m)/7;
  return pp;
 }
 
 int efep()
 {
  cout<<"ingrese su parcial:";cin>>ep;
  cout<<"ingrese su final:";cin>>ef;
  return ep,ef;
 }
