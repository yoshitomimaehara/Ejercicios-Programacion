#include<iostream.h>
int main()
{
    int num;           
    cout<<"Resultado del lanzamiento del dado => "; cin>>num;
    cout<<"\n";     
    if ( num>0 && num<7 )	
       switch (num)
       {  
          case 1: 
            	cout<<" Uno"; break;
          case 2:
        	cout<<" Dos"; break;
          case 3:
          	cout<<" Tres"; break;
          case 4:
         	cout<<" Cuatro"; break;
          case 5:
         	cout<<" Cinco"; break;   	       	
          default :
                cout<<" Seis";	         
       }
    else
       cout<<"\n Error en el numero ingresado"; 	
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
