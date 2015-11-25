#include <iostream>

using namespace std;
int main()
{
int a,b,s,i;
cout<<"ingresa el primer numero:";cin>>a;
cout<<"ingresa el segundo numero:";cin>>b;
  if(a<=b)
  {          
  for(i=a;i++ <b;)
    {
  s+=i;
    }
cout<<s<<endl; 
}
  else
  {
  cout<<"a no es menor que b"<<endl;
  exit;   
      }  
     system("PAUSE");
    }
