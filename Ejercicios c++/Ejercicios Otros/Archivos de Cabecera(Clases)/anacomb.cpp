#include "anacomb.h"

/*metodo factorial*/
int anacomb::fact(int n)
{
  int fact;
  fact=1;
  while (n>0){
  fact=fact*n;
  n=n-1;
  }
  return fact;
}

/*metodo combinatoria*/
int anacomb::comb(int n,int r)
{
 int comb;
 comb= fact(n)/fact(n-r)*fact(r);
 return comb;
}

/*metodo de n tomados de n*/
int anacomb::permnn(int n)
{
 int p;
 p=fact(n);
 return p;
}

/*metodo de n tomados de r*/
int anacomb::permnr(int n,int r)
{
 int pnr;
 pnr=fact(n)/fact(n-r);
 return pnr;
}

/*metodo circular*/
int anacomb::permcir(int n)
{
 int pc;
 pc=fact(n-1);
 return pc;
}

/*permutacion con repeticion*/
int anacomb::permrep(int n,int nr,int num[])
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
 return pcr;
}
