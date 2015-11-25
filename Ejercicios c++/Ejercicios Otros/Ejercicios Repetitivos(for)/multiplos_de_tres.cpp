#include <iostream>
using namespace std;
int main()
{
 int i;
 //los numeros van del 1 a 20
 for(i=1;i<=20;i++)
 {
  //aca se ve si son o no multiplos de 3                 
  if(i%3==0)
  {
   cout<<i<<"\n";
  }
 }
 system("pause");
 return 0;
}
