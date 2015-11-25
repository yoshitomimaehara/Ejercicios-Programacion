#include<iostream.h>
int main()
{
    int mes;           
    cout<<"Digite el numero de mes => "; cin>>mes; 
    cout<<"\n";    
    if ( mes>0 && mes<13 )	
       switch (mes)
       {  
          case 1: case 3: case 5: case 7: case 8:  case 10: case 12:
         	   cout<<" 31 dias"; break;	    
	      case 4: case 6: case 9: case 11:
	           cout<<" 30 dias"; break;	    
	      default:
	           cout<<" 28 dias";          
       }
    else
       cout<<"\n Error en el numero de mes ingresado"; 	
    cout<<"\n\n";    
    system("PAUSE");
    return 0;
}
