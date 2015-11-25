#include<iostream.h>



int main()
{
 int a[10];
 int b[20][20];
 int i,j,min,max;
 
 max=9;
 min=1;
 for(i=1;i<=10;i++)
 {
   a[i]=rand()%(max+1 - min) + min;
 }
 cout<<"[";
 for(i=1;i<10;i++)
 {
  if(i==10)
  cout<<a[i];
  else
  cout<<a[i]<<" ";                 
 }
 cout<<"]\n";
 cout<<"\n\n\n";
 
  for(i=0;i<20;i++)
  {
   for(j=0;j<20;j++)
   {
    b[i][j]=rand()%(max+1 - min) + min;
   }
  }
 
  for(i=0;i<20;i++)
 {
  for(j=0;j<20;j++)
   {
   cout<<b[i][j]<<"  ";                
   }
   cout<<"\n\n";
   }
 
 cout<<"\n\n";
 
    for(i=0;i<20;i++)
 {
  for(j=0;j<20;j++)
   {
   cout<<b[j][i]<<"  ";                
   }
   cout<<"\n\n";
   }
   
   
  system("pause");
}

