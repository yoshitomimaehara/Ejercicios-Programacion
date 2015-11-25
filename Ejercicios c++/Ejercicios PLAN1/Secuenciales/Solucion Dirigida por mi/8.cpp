#include<iostream.h>
int main()
{    
    
    float x1,x2,y1,y2,m;
    
    cout<<"ingrese la primera coordenada\n";
    cout<<"ingresa x1 =>";cin>>x1;
    cout<<"ingresa y1 =>";cin>>y1;
    cout<<"ingrese la segunda coordenada\n";
    cout<<"ingresa x2 =>";cin>>x2;
    cout<<"ingresa y2 =>";cin>>y2;
    
    m=(y1-y2)/(x1-x2);
    
    cout<<"pendiente:"<<m<<"\n";
    
    system("pause");
	return 0;
}
