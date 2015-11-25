#include<iostream.h>
int main()
{
    char grado;        
    float bonif,sueldo,sueldo_final;    
    char nom[15],nom_grado[11];   
    cout<<"Nombre => "; cin>>nom; 
    cout<<"Grado de estudios => "; cin>>grado;
    cout<<"Sueldo => "; cin>>sueldo;    
    cout<<"\n";
    if ( grado=='I'||grado=='B'||grado=='P'||grado=='M'||grado=='D' )	
    {
       switch (grado)
       {  
          case 'I': 
            	bonif = 20*2.78;cout<<" Tecnico \n";break;
          case 'B':
                bonif = 35*2.78;  
                cout<<" Bachiller \n";
                break;             
          case 'P':
                bonif = 50*2.78;  
                cout<<" Profesional \n";
                break;
          case 'M':
                bonif = 70*2.78;    
                cout<<" Magister \n";  
                break;                              	
          default :
                bonif = 100*2.78;    
                cout<<" Doctor \n";
       }       
       sueldo_final=sueldo+bonif;        
       cout<<"\n Bonificacion : "<<bonif; 
       cout<<"\n Sueldo Final : "<<sueldo_final; 
    }   
    else
       cout<<"\n Error en el grado ingresado"; 	
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
