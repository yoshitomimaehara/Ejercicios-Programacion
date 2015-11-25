#include<iostream.h>
int main()
{
int n,u,d;

cout<<"Ingrese el numero:";cin>>n;
if(n>=0 && n<100)
{
d=(n%100)/10;
u=n%10;

cout<<"\n";
cout<<"el numero en letras es: ";

//bloque de Dos Cifras
switch(d)
{       
 case 1:
      if(u==0)
      cout<<"diez";
      if(u==1)
      cout<<"once";
      if(u==2)
      cout<<"doce";
      if(u==3)
      cout<<"trece";
      if(u==4)
      cout<<"catorce";
      if(u==5)
      cout<<"Quince";
      if(u>5)
      cout<<"Dieci";
      break;
 case 2:
      if(u==0)
      cout<<"veinte";
      if(u>0)
      cout<<"veinti";
      break;
 case 3:
      if(u==0)
      cout<<"treinta";
      if(u>0)
      cout<<"treinta y ";
      break;
 case 4:
      if(u==0)
      cout<<"cuarenta";
      if(u>0)
      cout<<"cuarenta y ";
      break;
 case 5:
      if(u==0)
      cout<<"cincuenta";
      if(u>0)
      cout<<"cincuenta y ";
      break;
 case 6:
      if(u==0)
      cout<<"sesenta";
      if(u>0)
      cout<<"sesenta y ";
      break;
 case 7:
      if(u==0)
      cout<<"setenta";
      if(u>0)
      cout<<"setenta y ";
      break;
 case 8:
      if(u==0)
      cout<<"ochenta";
      if(u>0)
      cout<<"ochenta y ";
      break;
 case 9:
      if(u==0)
      cout<<"noventa";
      if(u>0)
      cout<<"noventa y ";
      break;  
}

//bloque de una Cifra
switch(u)
{ 
 case 0:
      if(u==0 && d==0)
      cout<<"cero";
      break;
 case 1:
      if(d!=1)
      cout<<"uno";
      break;
 case 2:
      if(d!=1)
      cout<<"dos";
      break;
 case 3:
      if(d!=1)
      cout<<"tres";
      break;
 case 4:
      if(d!=1)
      cout<<"cuatro";
      break;
 case 5:
      if(d!=1)
      cout<<"cinco";
      break;
 case 6:
      cout<<"seis";
      break;
 case 7:
      cout<<"siete";
      break;
 case 8:
      cout<<"ocho";
      break;
 case 9:
      cout<<"nueve";
      break;
} 
}
else
{
cout<<"el numero es de mas de 2 cifras";
}
cout<<"\n\n";



system("pause");
}
