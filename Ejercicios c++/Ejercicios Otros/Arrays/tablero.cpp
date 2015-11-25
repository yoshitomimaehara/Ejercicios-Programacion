  #include<iostream>
  #include<string>
  using namespace std;

int main()
{
  int i,j;
  string b[3][3];
  
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    if(i%2==1)
    {
    b[i][j]="**";
    }
    else
    {
    b[i][j]="*";
    }
   }
  }
 
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
   cout<<b[i][j]<<"\t";                
   }
   cout<<"\n\n";
   }
   
   system("pause");
}
