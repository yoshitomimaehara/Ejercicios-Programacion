#include <stdio.h>
#include <conio.h>
#define tasa 3.50
int main()
{
system("cls");
int n;
float c;
printf("Ingrese el dinero:");
scanf("%d",&n);
c=n*tasa;
printf("el cambio es:");
printf("%g",c);
getch();
return 0;
}
