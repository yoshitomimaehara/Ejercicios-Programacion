#include<iostream.h>
int main()
{
 	float c,r,k;
 	
 	cout<<"ingrese la temperatura en celsius:";cin>>c;
    
    r=9/5*c+492;
    k=c+273;
	
    cout<<"Rankine:"<<r<<"\n";
    cout<<"Kelvin:"<<k<<"\n";
    
    system("pause");
	return 0;
}
