#include <stdio.h>
int main()
{
int a,b,c;
printf("ingrese el primer numero:");
scanf("%d",&a);
printf("ingrese el segundo numero:");
scanf("%d",&b);
if(a>b)
{
printf("el mayor es:");
printf("%d",a);
}
else
{
printf("el mayor es:");
printf("%d",b);
printf("\n");
}
system("pause");
}
