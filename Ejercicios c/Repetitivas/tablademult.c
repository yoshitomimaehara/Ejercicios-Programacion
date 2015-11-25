#include <stdio.h>

int main()
{
 int m,a,i;
 for(a=1;a<=12;a++)
 {
  printf("Tabla del ");
  printf("%d\n\n",a);
  for(i=1;i<=12;i++)
  {
   m=a*i;
   printf("%d",i);
   printf("x");
   printf("%d",a);
   printf("=");
   printf("%d\n",m);
  }
  printf("\n\n");
 }
 system("pause");
}
