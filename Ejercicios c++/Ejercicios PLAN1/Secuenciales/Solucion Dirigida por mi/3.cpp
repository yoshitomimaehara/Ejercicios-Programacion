#include<iostream.h>
int main()
{
	char cod[6];
	float p_cost,gan,pv;
	
    cout<<"ingrese el codigo:";cin>>cod;
	cout<<"ingrese el precio de costo:";cin>>p_cost;
	
	gan=p_cost * 0.28;
	pv=p_cost+gan;
	
	cout<<"ganancia:"<<gan<<"\n";
	cout<<"Precio de venta"<<pv<<"\n";
	
    system("pause");
	return 0;
}
