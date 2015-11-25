#include<iostream.h>
int main()
{
    float p1,p2,p3,p1k,p2k,p3k,ppk;
    
    cout<<"ingrese el peso 1 en gramos:";cin>>p1;
    cout<<"ingrese el peso 2 en gramos::";cin>>p2;
    cout<<"ingrese el peso 3 en gramos::";cin>>p3;
    
    p1k=p1/1000;
    p2k=p2/1000;
    p3k=p3/1000;
    ppk=(p1k+p2k+p3k)/3.0;
    
    cout<<"peso promedio en decimales:"<<ppk<<"\n";
        
    system("pause");
	return 0;
}
