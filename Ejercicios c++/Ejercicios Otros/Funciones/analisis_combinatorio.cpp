#include<iostream>
using namespace std;

//funciones prototipo
int fact(int);
int comb(int,int);
int permnn(int);
int permnr(int,int);
int permcir(int);
int permrep(int,int,int[]);

//funcion main()
int main()
{
 int res,n,r,i,nr,j;
 int num[30];
 char rpta;
 
 rpta='s';
 while(rpta=='s')
 {
 //menu de programa
 cout<<" -------------------------------\n";
 cout<<"      Analisis Combinatorio     \n";
 cout<<" -------------------------------\n";
 cout<<" 1.Permutacion de n a n\n";
 cout<<" 2.Permutacion de n a r\n";
 cout<<" 3.Permutacion circular\n";
 cout<<" 4.Combinacion\n";
 cout<<" 5.Permutacion con repeticion\n";
 do
 {
 cout<<" Elija su alternativa:";cin>>i;
 }while(i!=1 && i!=2 && i!=3 && i!=4 && i!=5); 
 cout<<"\n";
 if(i==1 || i==2 || i==3 || i==4|| i==5)
 {
         
  if(i==1 || i==3)
  {
  cout<<"ingrese el numero de elementos:";cin>>n;
  }
  else if(i==2 || i==4)
  {
  cout<<"ingrese el numero de elementos:";cin>>n;
  cout<<"tomados de:";cin>>r;
  }
  else
  {
  cout<<"ingrese el numero de elementos:";cin>>n;
  cout<<"ingrese el numero de elementos repetidos:";cin>>nr;
  j=0;  
  /*leer repeticiones*/
  while(j<nr)
  {
  cout<<"ingrese la repeticion "<<j+1<<":";cin>>num[j];
  j++;
  }
  
  }
   switch(i)
 {
        case 1:          
          res=permnn(n);

        break;
         
        case 2:
          res=permnr(n,r);

        break;
         
        case 3:
          res=permcir(n);

        break;  
         
        case 4:
          res=comb(n,r);
          
        break; 
        
        case 5:
          res=permrep(n,nr,num);
}
cout<<"resultado:"<<res<<"\n";  
 }
 else
 {
 cout<<"la alternativa no es valida\a";
 }
 do
 {
 cout<<"desea regresar al menu(s/n):";cin>>rpta;
 }while(rpta!='s' && rpta!='n');
 
 if(rpta=='s')
 {
  system("cls");
 }
}                      
 cout<<"\n";
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

//funcion combinatoria
int comb(int n,int r)
{
 int comb;
 comb= fact(n)/fact(n-r)*fact(r);
 return comb;
}

//permutacion de n tomados de n
int permnn(int n)
{
 int p;
 p=fact(n);
 return p;
}

//permutacion de n tomados de r
int permnr(int n,int r)
{
 int pnr;
 pnr=fact(n)/fact(n-r);
 return pnr;
}

//permutacion circular
int permcir(int n)
{
 int pc;
 pc=fact(n-1);
 return pc;
}

//permutacion con repeticion
int permrep(int n,int nr,int num[])
{
 int j,pcr,factrep,d;
 
 /*hacer factorial de abajo*/
 factrep=1;
 for(j=0;j<nr;j++)
 {
 d=num[j];
 factrep=factrep*fact(d);
 }
    
 pcr=fact(n)/factrep;
 return pcr;
}
