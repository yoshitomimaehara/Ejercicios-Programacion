#include <iostream>
using namespace std;
int main()
{
int a,b,s,p,d;
cout<<"ingresar el primer numero:";cin>>a;
cout<<"ingresar el segundo numero:";cin>>b;
if(a==b)
{
s=a+b;
cout<<"La suma es:"<<s<<endl;        
}
else 
if(a%2==0)
{
d=a-b;
cout<<"La diferencia es:"<<d<<endl;       
}
else
{
p=a*b;
cout<<"El producto es:"<<p<<endl;        
} 
system("pause");   
}    
