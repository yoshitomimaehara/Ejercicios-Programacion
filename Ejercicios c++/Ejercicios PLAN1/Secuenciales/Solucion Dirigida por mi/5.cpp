#include<iostream.h>
int main()
{
    float h,hy,hpul,hpie;
    
    cout<<"ingrese la altura en metros:";cin>>h;
    
    hy=h*1.904;
    hpul=h*39.37;
    hpie=h*3.281;
    
    cout<<"altura en:\n";
    cout<<"yardas => "<<hy<<"\n";
    cout<<"pulgadas => "<<hpul<<"\n";
    cout<<"pies => "<<hpie<<"\n";
    
    system("pause");
	return 0;
}
