#include<iostream.h>
int main()
{
    int velMax1,velMax2;
    float velMaxProm;   
    cout<<"Velocidad maxima del cuerpo 1 => ";cin>>velMax1;
    cout<<"velocidad maxima del cuerpo 2 => ";cin>>velMax2;
    if (velMax1 != velMax2)
    {
        velMaxProm = (velMax1+velMax2)/2.0;
        cout<<"\n Velocidad maxima promedio : "<<velMaxProm;          
    }   
    cout<<"\n\n";
    system("PAUSE");
    return 0;
}
