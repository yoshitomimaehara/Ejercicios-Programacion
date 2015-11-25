#include<iostream>
using namespace std;

/*clase*/
class anacomb
{
public:
int comb(int,int);
int permnn(int);
int permnr(int,int);
int permcir(int);
int permrep(int,int,int[]);
private:
int fact(int);
};

/*objeto de clase*/
anacomb calculo;

/*metodo factorial*/
/*
int anacomb::fact(int n)
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
*/
int anacomb::fact(int n)
{  
  if(n<=1){
    return 1;
  }else{
    return n * fact(n-1);
  }
}


/*metodo combinatoria*/
int anacomb::comb(int n,int r)
{
 int comb;
 comb= fact(n)/fact(n-r)*fact(r);
 cout<<"resultado:"<<comb<<"\n";
}

/*metodo de n tomados de n*/
int anacomb::permnn(int n)
{
 int p;
 p=fact(n);
 cout<<"resultado:"<<p<<"\n";
}

/*metodo de n tomados de r*/
int anacomb::permnr(int n,int r)
{
 int pnr;
 pnr=fact(n)/fact(n-r);
 cout<<"resultado:"<<pnr<<"\n";
}

/*metodo circular*/
int anacomb::permcir(int n)
{
 int pc;
 pc=fact(n-1);
 cout<<"resultado:"<<pc<<"\n";
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
 cout<<"resultado:"<<pcr<<"\n";
}


//funcion main()
int main()
{
 int n,r,i,nr,j;
 int num[30];
 //menu de programa
 menu:;
 
 cout<<" -------------------------------\n";
 cout<<"      Analisis Combinatorio     \n";
 cout<<" -------------------------------\n";
 cout<<" 1.Permutacion de n a n\n";
 cout<<" 2.Permutacion de n a r\n";
 cout<<" 3.Permutacion circular\n";
 cout<<" 4.Combinacion\n";
 cout<<" 5.Permutacion con repeticion\n";
 cout<<" Elija su alternativa:";cin>>i;
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
  //leer repeticiones
  while(j<nr)
  {
  cout<<"ingrese la repeticion "<<j+1<<":";cin>>num[j];
  j++;
  }
  
  }
  //base del menu
   switch(i)
 {
        case 1:          
          calculo.permnn(n);
        break;
         
        case 2:
          calculo.permnr(n,r);
        break;
         
        case 3:
          calculo.permcir(n);
        break;  
         
        case 4:
          calculo.comb(n,r);   
        break; 
        
        case 5:
          calculo.permrep(n,nr,num);
}
 }
 else
 {
 cout<<" la alternativa no es valida\a\n";
 system("pause");
 system("cls");
 goto menu;
 }
                       
 cout<<"\n";
 system("pause");
 return 0;
}
