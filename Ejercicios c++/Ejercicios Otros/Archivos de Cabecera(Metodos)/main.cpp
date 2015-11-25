#include<iostream.h>
#include"anacomb.h"

//funcion main()
int main()
{
 int n,r,i,nr,j,val;
 char op;
 int num[30];

 val=1;
 while(val==1)
 {
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
 //fin de menu
 if(i==1 || i==2 || i==3 || i==4|| i==5)
 {
         
  if(i==1 || i==3)
  {
  cout<<" ingrese el numero de elementos:";cin>>n;
  }
  else if(i==2 || i==4)
  {
  cout<<" ingrese el numero de elementos:";cin>>n;
  cout<<" tomados de:";cin>>r;
  }
  else
  {
  cout<<" ingrese el numero de elementos:";cin>>n;
  cout<<" ingrese el numero de elementos repetidos:";cin>>nr;
  j=0;  
  //leer repeticiones
  while(j<nr)
  {
  cout<<" ingrese la repeticion "<<j+1<<":";cin>>num[j];
  j++;
  }
  
  }
  //base del menu
   switch(i)
 {
        case 1:          
          permnn(n);
        break;
         
        case 2:
          permnr(n,r);
        break;
         
        case 3:
          permcir(n);
        break;  
         
        case 4:
          comb(n,r);   
        break; 
        
        case 5:
          permrep(n,nr,num);
}
 }
 else
 {
 cout<<" la alternativa no es valida\a\n";
 system("pause");
 system("cls");
 goto menu;
 }
 do
 {
  cout<<"Desea Realizar Otra Operacion(s/n):";cin>>op;
 }while(op!='s' && op!='n');
 if(op=='s') 
 {
 val=1;
 system("cls");
 }
 else 
 {
 val=0;
 system("cls");
 cout<<"Adios";
 }
}                   
 cout<<"\n";
 system("pause");
 return 0;
}
