#include<iostream.h>
#include<math.h>
int main()
{
    //Declarando variables
    int l1,l2,l3;
    float a,p,sp;
    
    //Ingresando el valor de los lados
    cout<<"Ingrese el valor del lado 1 => ";cin>>l1;
    cout<<"Ingrese el valor del lado 2 => ";cin>>l2;
    cout<<"Ingrese el valor del lado 3 => ";cin>>l3;
    
    //Calculando el area y el perimetro
    p=l1+l2+l3;
    a=sqrt(p/2*(p/2-l1)*(p/2-l2)*(p/2-l3));
    
    //Mostrando el area y el perimetro
    cout<<"area:"<<a<<"\n";
    cout<<"perimetro:"<<p<<"\n";
    
    //Lo de siempre
    cout<<"\n\n";
    system("Pause");
    return 0;
}
