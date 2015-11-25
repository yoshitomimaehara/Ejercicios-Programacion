#include<iostream.h>
int main()
{
int n,c,u,d,m;

cout<<"Ingrese el numero:";cin>>n;

//descomposicion del numero
m=n/1000;
c=(n%1000)/100;
d=(n%100)/10;
u=n%10;

cout<<"El numero en letras es: ";

//bloque de cuatro cifras
if(m==1)
 cout<<"mil ";
else if(m==2)
 cout<<"dos mil ";
else if(m==3)
 cout<<"tres mil ";
else
 cout<<"";
 
//bloque de tres cifras
if(c==1)
 if(d==0 && u==0)
  cout<<"cien";
 else
  cout<<"ciento ";
else if(c==2)
cout<<"doscientos ";
else if(c==3)
cout<<"trescientos ";
else if(c==4)
cout<<"cuatroscientos ";
else if(c==5)
cout<<"quinientos ";
else if(c==6)
cout<<"seiscientos ";
else if(c==7)
cout<<"setecientos ";
else if(c==8)
cout<<"ochocientos ";
else if(c==9)
cout<<"novecientos ";
else
cout<<"";

//bloque de dos cifras
 if(d==1 && u==0)
 cout<<"diez";
 else if(d==1 && u==1)
 cout<<"once";
 else if(d==1 && u==2)
 cout<<"doce";
 else if(d==1 && u==3)
 cout<<"trece";
 else if(d==1 && u==4)
 cout<<"catorce";
 else if(d==1 && u==5)
 cout<<"quince";
 else if(d==1 && u>5)
 cout<<"dieci";
 else if(d==2 && u==0)
 cout<<"veinte";
 else if(d==2 && u>0)
 cout<<"veinti";
 else if(d==3 && u==0)
 cout<<"treinta";
 else if(d==3 && u>0)
 cout<<"treinta y ";
 else if(d==4 && u==0)
 cout<<"cuarenta";
 else if(d==4 && u>0)
 cout<<"cuarenta y ";
  else if(d==5 && u==0)
 cout<<"cincuenta";
 else if(d==5 && u>0)
 cout<<"cincuenta y ";
 else if(d==6 && u==0)
 cout<<"sesenta";
 else if(d==6 && u>0)
 cout<<"sesenta y ";
  else if(d==7 && u==0)
 cout<<"setenta";
 else if(d==7 && u>0)
 cout<<"setenta y ";
  else if(d==8 && u==0)
 cout<<"ochenta";
 else if(d==8 && u>0)
 cout<<"ochenta y ";
  else if(d==9 && u==0)
 cout<<"noventa";
 else if(d==9 && u>0)
 cout<<"noventa y ";
 else
 cout<<"";

//bloque de una cifra
if(u==1)
 if(d==1)
 cout<<"";
 else
 cout<<"uno";
else if(u==2)
 if(d==1)
 cout<<"";
 else
 cout<<"dos";  
else if(u==3)
 if(d==1)
 cout<<"";
 else
 cout<<"tres";
else if(u==4)
 if(d==1)
 cout<<"";
 else
 cout<<"cuatro";
else if(u==5)
 if(d==1)
 cout<<"";
 else
 cout<<"cinco";
else if(u==6)
 cout<<"seis";
else if(u==7)
 cout<<"siete";
else if(u==8)
 cout<<"ocho";
else if(u==9)
 cout<<"nueve";
else
cout<<"";

cout<<"\n";
system("pause");
}
