#include <iostream.h>
#include <conio.h>
main()
{
float s1, s2, i;
clrscr();
s1=0; s2=0; i=0;
while(i<10)
{
i=i+1;
s1=s1+i;
s2=s2+i*i;
}
cout<<"Suma de los 10 primeros n£meros= "<<s1;
cout<<"\n";
cout<<"Suma de cuadrados= "<<s2;
getch();
}
