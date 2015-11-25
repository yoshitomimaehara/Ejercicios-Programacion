#include<iostream.h>
int main()
{
    //Declarando variables   
    int num;
    double porc1,porc2;    
    
    //Ingresando los datos 
    cout<<"Numero => ";cin>>num;    
    cout<<"\n\n";
    
    //Haciendo los cálculos
    porc1 = 0.3*num;
    porc2 = 1.5*num;
         
    //Mostrando la salida
    cout<<" Su 30% es  : "<<porc1<<"\n";  
    cout<<" su 150% es : "<<porc2<<"\n";    
    
    //Lo de siempre
    cout<<"\n\n";
    system("PAUSE");
    return 0; 
}
