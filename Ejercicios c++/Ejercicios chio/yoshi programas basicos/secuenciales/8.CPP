#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
float a,b,h;
clrscr();
cout<<"ingrese el cateto a:";cin>>a;
cout<<"ingrese el cateto b:";cin>>b;
h=sqrt(pow(a,2)+pow(b,2));
cout<<"la hipotenusa es:";cout<<h;
getch();
}
