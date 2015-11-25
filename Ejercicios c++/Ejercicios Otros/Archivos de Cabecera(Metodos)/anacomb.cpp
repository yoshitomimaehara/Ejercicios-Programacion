#include<iostream.h>
#include"anacomb.h"

/*metodo factorial*/
int fact(int n)
{
  int fact;
  fact=1;
  while (n>0)
  {
  fact=fact*n;
  n=n-1;
  }
  return fact;
}

/*metodo combinatoria*/
int comb(int n,int r)
{
 int comb;
 comb= fact(n)/fact(n-r)*fact(r);
 cout<<" resultado:"<<comb<<"\n";
}

/*metodo de n tomados de n*/
int permnn(int n)
{
 int p;
 p=fact(n);
 cout<<" resultado:"<<p<<"\n";
}

/*metodo de n tomados de r*/
int permnr(int n,int r)
{
 int pnr;
 pnr=fact(n)/fact(n-r);
 cout<<" resultado:"<<pnr<<"\n";
}

/*metodo circular*/
int permcir(int n)
{
 int pc;
 pc=fact(n-1);
 cout<<" resultado:"<<pc<<"\n";
}

/*permutacion con repeticion*/
int permrep(int n,int nr,int num[])
{
 int j,pcr,factrep,d;
 
 //hacer factorial de abajo
 factrep=1;
 for(j=0;j<nr;j++)
 {
 d=num[j];
 factrep=factrep*fact(d);
 }
    
 pcr=fact(n)/factrep;
 cout<<" resultado:"<<pcr<<"\n";
}
