#include<iostream.h>
#include<math.h>
int main()
{
    int angulo;   
    float fuerza1,fuerza2,result;   
    cout<<"Fuerza 1 => ";cin>>fuerza1;   
    cout<<"Fuerza 2 => ";cin>>fuerza2;  
    cout<<"Angulo entre las fuerzas => ";cin>>angulo;   
    if (angulo == 0)
       result=abs(fuerza1+fuerza2);                     
    else
       result=abs(fuerza1-fuerza2);   
    cout<<"\n La resultante es : "<<result;    
    cout<<"\n\n";             
    system("PAUSE");
    return 0;
}
