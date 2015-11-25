#include<iostream.h>
int main()
{
    int piso;       
    cout<<"Digite numero de piso => ";cin>>piso;      
    if (piso < 0 && piso % 2 == 0)
	   cout<<"\n Piso par, sotano";
    else if (piso < 0 && piso % 2 != 0)
            cout<<"\n Piso impar, sotano";      
    else if (piso > 0 && piso % 2 == 0)
	        cout<<"\n Piso par, arriba";
    else 
       cout<<"\n Piso impar, arriba";                  
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
