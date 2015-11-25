#include<iostream.h>
int main()
{
    int num,falta;    
    cout<<"Numero => ";cin>>num;   
    if (num <10)
       falta=10-num;
    else
       falta=100-num;  
    cout<<"\n  Resultado : "<<falta<<"\n\n";        
    system("PAUSE");
    return 0;
}
