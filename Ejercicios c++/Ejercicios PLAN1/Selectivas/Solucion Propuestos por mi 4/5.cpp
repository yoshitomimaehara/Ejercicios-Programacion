#include<iostream.h>

int main()
{
 int t;
 
 cout<<"ingrese la temperatura:";cin>>t;
 if(t>=0 && t<10)
      cout<<"Frio";
 else if(t>=10 && t<20)
      cout<<"Templado";
 else if(t>=20 && t<30)
      cout<<"Caluroso";
 else if(t>30)
      cout<<"Tropico";
      
 cout<<"\n";
 system("pause");
}
