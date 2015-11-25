#include<iostream.h>
int main()
{
    int temp;       
    cout<<"Digite la temperatura => ";cin>>temp;      
    if (temp == 0)
       cout<<"\n Temperatura Neutral";
	else if (temp < 0)
       cout<<"\n Temperatura Negativa";	  
    else
       cout<<"\n Temperatura Positiva";    
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
