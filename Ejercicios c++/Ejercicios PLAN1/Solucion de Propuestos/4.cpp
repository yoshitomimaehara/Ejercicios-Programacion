#include<iostream.h>
int main()
{
    //Declarando variables
    float x1,y1,x2,y2,pmx,pmy;
 
    //Ingresando la Primera Coordenada
    cout<<"ingrese la primera coordenada\n";
    cout<<"ingresa x1 =>";cin>>x1;
    cout<<"ingresa y1 =>";cin>>y1;
 
    //Ingresando la Segunda Coordenada
    cout<<"ingrese la segunda coordenada\n";
    cout<<"ingresa x2 =>";cin>>x2;
    cout<<"ingresa y2 =>";cin>>y2;
 
    //Calculando la coordenada de punto medio del segmento
    pmx=(x2-x1)/2;
    pmy=(y2-y1)/2;
 
    //Mostrando la coordenada de punto medio del segmento
    cout<<"la coordenada del punto medio es:("<<pmx<<","<<pmy<<")"<<"\n";
 
    //Lo de siempre
    cout<<"\n\n";
    system("pause");
    return 0;
}
 
