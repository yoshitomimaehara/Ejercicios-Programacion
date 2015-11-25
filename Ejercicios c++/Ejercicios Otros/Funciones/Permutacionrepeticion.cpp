#include<iostream>
using namespace std;

int fact(int);

int main()
{
    int n,resp,factrep,nr,i,d,f;
    int num[30];
    
    cout<<"ingrese el numero de elementos:";cin>>n;
    cout<<"ingrese el numero de elementos repetidos:";cin>>nr;
    
    i=0;  
    //leer repeticiones
    while(i<nr)
    {
    cout<<"ingrese la repeticion "<<i+1<<":";cin>>num[i];
    i++;
    }
    factrep=1;
    //hacer la permutacion de repeticiones 
    for(i=0;i<nr;i++)
    {
        d=num[i];
        factrep=factrep*fact(d);
    }
    
    resp=fact(n)/factrep;
   cout<<"la respuesta es:"<<resp<<"\n";
   system("pause");
   return 0;
}

//funcion factorial
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
