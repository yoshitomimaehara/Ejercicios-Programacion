#include<iostream.h>

int main(){

int n,c,d,u;

cout<<"Ingrese el numero:";cin>>n;

c=n/100;
d=n%100/10;
u=n%10;


switch(c){
   case 0:
        break;
   case 1:
        cout<<"Ciento ";
        break;
   case 2:
        cout<<"Doscientos ";
        break;
}

switch(d){
   case 0:
        break;
   case 1:
        if(u==0)
        cout<<"Diez ";
        else if(u==2)
        cout<<"Doce ";
        else if(u==3)
        cout<<"Trece ";
        else if(u==4)
        cout<<"Catorce ";
        else if(u==5)
        cout<<"Quince ";
        else
        cout<<"Dieci";
        break;
   case 2:
        cout<<"Veinte ";
        break;
   case 3:
        cout<<"Treinta";
        break;
   case 4:
        cout<<"Cuarenta ";
        break;
   case 5:
        cout<<"Cincuenta ";
        break;
   case 6:
        cout<<"Sesenta ";
        break;
   case 7:
        cout<<"Setenta ";
        break;
   case 8:
        cout<<"Ochenta ";
        break;
   case 9:
        cout<<"Noventa ";
        break;        
}

if(d>1){
   cout<<" y ";
}

switch(u){
   case 0:
        if(d==0 && u==0 && c==0)
           cout<<"Cero";
        break;
   case 1:
        cout<<"uno";
        break;
   case 2:
        if(d!=1)
        cout<<"dos";
        break;
   case 3:
        if(d!=1)
        cout<<"tres";
        break;
   case 4:
        if(d!=1)
        cout<<"cuatro";
        break;
   case 5:
        if(d!=1)
        cout<<"cinco";
        break;
   case 6:
        cout<<"seis";
        break;
   case 7:
        cout<<"siete";
        break;
   case 8:
        cout<<"ocho";
        break;
   case 9:
        cout<<"nueve";
        break;        
}

 cout<<"\n\n";
 system("pause");
}
