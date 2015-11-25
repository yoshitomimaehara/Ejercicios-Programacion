#include<iostream.h>
int main()
{
    char tipo;        
    float imp_pagar;
    int cant_min,num_tel;
    char nom[15];   
    cout<<"Numero telefonico => "; cin>>num_tel; 
    cout<<"Tipo de llamada => "; cin>>tipo;
    cout<<"Cantidad de minutos utilizados => "; cin>>cant_min; 
    cout<<"\n";   
    if ( tipo=='A'||tipo=='B'||tipo=='C'||tipo=='D' )	
    {
       switch (tipo)
       {  
          case 'A': 
            	imp_pagar=cant_min*0.3; break;
          case 'B':
                imp_pagar=cant_min*0.7; break;                
          case 'C':
                imp_pagar=cant_min; break;                   	
          default :
                imp_pagar= cant_min*1.5; break;         
       }       
       cout<<"\n Importe a pagar : "<<imp_pagar; 
    }   
    else
       cout<<"\n Error en el tipo ingresado"; 	
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
