#include<iostream.h>
int main()
{
    int trab;       
    cout<<"\nDigite el valor del trabajo => ";cin>>trab;      
    if (trab < 10)
       cout<<"\n  Resultado : "<<trab*trab;
    else if (trab < 100)
       cout<<"\n  Resultado : "<<trab/2.0;
    else if (trab < 1000)
       cout<<"\n  Resultado : "<<2*trab; 	  
    else
       cout<<"\n  Resultado : "<<1.0/trab;    
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
