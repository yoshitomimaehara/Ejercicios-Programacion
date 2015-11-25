#include<iostream>
using namespace std;

int main(){
   int D=0,d=0,q=0,r=0;
   cout<<"ingrese el dividendo:";cin>>D;
   cout<<"ingrese el Divisor:" ;cin>>d;
   while(d<=D){
      D-=d;
      q++;
   }
   r=D;
   
   cout<<"Cociente:"<<q<<endl;
   cout<<"Residuo:"<<r<<endl;
    
   system("PAUSE");
}
