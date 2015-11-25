#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
float x,q;
clrscr();
cout<<"Ingrese el valor de x: ";
cin>>x;
q=x+pow(x,2)+pow(x,3)+pow(x,4)+pow(x,5);
cout<<"\n";
cout<<"El valor de la suma: "<<q;
getch();
}