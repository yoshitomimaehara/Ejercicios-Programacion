#include<iostream.h>
int main()
{
    int radio; 
    float area,longitud;  
    cout<<"Radio => ";cin>>radio;
    if (radio > 0)
    {
       area = 3.1416*radio*radio;
       longitud = 6.2832*radio;
       cout<<"\n Area   : "<<area;
       cout<<"\n Logitud: "<<longitud;           
    }       
    cout<<"\n\n";
    system("PAUSE");
    return 0;
}
