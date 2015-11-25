#include<iostream.h>
#include<conio.h>
main()
{
int sum, i;
clrscr();
i=0;
sum=0;
do
{
i=i+1;
sum=sum+i;
}
while(i<10);
cout<<"La suma de los 10 primeros n£meros es="<<sum;
getch();
}