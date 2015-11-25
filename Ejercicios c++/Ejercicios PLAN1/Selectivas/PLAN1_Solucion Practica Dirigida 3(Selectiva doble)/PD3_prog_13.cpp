#include<iostream.h>
int main()
{
    int resis1,resis2;   
    float semiProd,semiDif;   
    cout<<"Resistencia 1 => ";cin>>resis1;   
    cout<<"Resistencia 2 => ";cin>>resis2;     
    if (resis1 == resis2)
    {
       semiProd = resis1*resis2/2.0;       
       cout<<"\n Semiproducto : "<<semiProd;
    }              
    else
    {
       semiDif = (resis1-resis2)/2.0;        
       cout<<"\n Semidiferencia : "<<semiDif;        
    }    
    cout<<"\n\n";         
    system("PAUSE");
    return 0;
}
