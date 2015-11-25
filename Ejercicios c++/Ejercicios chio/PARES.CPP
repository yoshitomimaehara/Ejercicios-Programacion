#include<iostream.h>
#include<conio.h>
main()
{
int i, sum;
clrscr();
sum=0;
i=-1;
do
{
i=i+2;
sum=sum+i;
}
while(i<=15);

cout<<"La suma de los n£meros pares hasta el 20 es="<<sum;
getch();
}
