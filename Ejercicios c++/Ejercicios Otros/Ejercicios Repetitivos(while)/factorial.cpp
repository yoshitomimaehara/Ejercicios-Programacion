#include <iostream>
using namespace std;
int main()
{  
  int i,n,fact;
  fact=1;
  cout<<"ingrese el numero: ";cin>>n;
  while (n>0)
      {
            fact=fact*n;
            n=n-1;
      }
  cout<<fact<<endl;
  system("pause");
}
