#include<iostream.h>
int main()
{
	float varo,pv,pm,muj,totu;
    
    cout<<"ingrese el numero de varones:";cin>>varo;
    cout<<"ingrese el total de alumnos:";cin>>totu;
    
    muj=totu-varo;
    pv=(varo/totu)*100;
    pm=(muj/totu)*100;
    
    cout<<"Numero de mujeres:"<<muj<<"\n";
    cout<<"porcentaje de varones:"<<pv<<"%"<<"\n";
    cout<<"porcentaje de mujeres:"<<pm<<"%"<<"\n";
    
    system("pause");
	return 0;
}
