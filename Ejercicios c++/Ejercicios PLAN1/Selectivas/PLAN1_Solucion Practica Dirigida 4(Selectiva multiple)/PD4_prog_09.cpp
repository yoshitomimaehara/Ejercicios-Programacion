#include<iostream.h>
int main()
{
    int tiempo;        
    float pension, descto, nueva_pension;
    char nom[15];   
    cout<<"Nombre => "; cin>>nom; 
    cout<<"Pension => "; cin>>pension;
    cout<<"Tiempo de estudios => "; cin>>tiempo;  
    cout<<"\n";  
    if ( tiempo>0 && tiempo<6 )	
    {
       switch (tiempo)
       {  
          case 1: 
            	descto=0.2*pension; break;
          case 2:
                descto=0.15*pension; break;                
          case 3:
                descto=0.1*pension; break;   
          case 4:      
                descto=0.05*pension; break;               	
          default :
                descto=0.03*pension; break;                        
       }
       nueva_pension=pension-descto;
       cout<<"\n Descuento : "<<descto; 
       cout<<"\n Nueva pension : "<<nueva_pension; 
    }   
    else
       cout<<"\n Error en el año ingresado"; 	
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
