#include <stdio.h>
main()
{
 float num;
 int i;
 num=1.9;
 for(i=0;i<30;i++)
 {
   num=num+0.2;
   printf("%.2f\n",num);
 }
 system("pause");   
}
