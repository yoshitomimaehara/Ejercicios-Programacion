#include <stdio.h>

int cuad(int);

int main()
{
 int n,c;
 printf("ingrese el numero:");
 scanf("%d",&n);
 c=cuad(n);
 printf("el cuadrado es:");
 printf("%d",c);
 printf("\n");

return 0;
}

int cuad(int n)
{
 int c;
 c=n*n;
 return c;
}
