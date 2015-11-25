#include<iostream.h>
int main()
{
    float f1,f2,f3, menor;    
    cout<<"Digite la fuerza 1 => ";cin>>f1;    
    cout<<"Digite la fuerza 2 => ";cin>>f2;   
    cout<<"Digite la fuerza 3 => ";cin>>f3;   
    if (f1<f2 && f1<f3)
        menor=f1;
    else if (f2<f3)
             menor=f2;
    else 
        menor=f3;
    cout<<"\n El menor es : "<<menor;    
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
