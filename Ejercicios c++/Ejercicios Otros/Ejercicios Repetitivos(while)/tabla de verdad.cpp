#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 bool p,q,r;
 string op,v1,v2,rc,rpta;
 int al,cont;
 
 rpta="s";
 while(rpta=="s")
 {
 cont=0;
 cout<<"  -----------\n";
 cout<<"    Logica\n";
 cout<<"  -----------\n";
 cout<<"1. Conjuncion\n";
 cout<<"2. Disyuncion\n";
 cout<<"3. Condicional\n";
 cout<<"4. Bicondicional\n";
 cout<<"5. Disyuncion Exclusiva\n";
 cout<<"ingrese su alternativa:";cin>>al;
 if(al==1 || al==2  ||  al==3  ||  al==4 ||  al==5)
 {
 
 switch(al)
 {
  case 1:
      op="^";
      break;
  case 2:
      op="v";
      break;
  case 3:
      op="=>";
      break;
  case 4:
      op="<=>";
      break;
  case 5:
      op="<>";
      break;
 }
 cout<<"p"<<"  "<<"q"<<"   "<<"p "<<op<<" q"<<"\n";
 cout<<"-----------------------"<<"\n";
 //construccion de tabla
 while(cont<4)
 {
 if(cont<2)
 {
 p=1;
 }
 else
 {
 p=0;
 }
 if(cont==0 || cont==2)
 {
 q=1;
 }
 else
 {
 q=0;
 }
 if(al==1)
 {
 r=p&&q;
 }
 else if(al==2)
 {
 r=p||q;
 }
 else if(al==3)
 {
 r=!p||q;
 }
  else if(al==4)
 {
 r=(p&&q)||(!p&&!q);
 }
 else if(al==5)
 {
 r=!((p&&q)||(!p&&!q));
 } 
 cont++;
 //transformacion de digitos a valores
 if(p==1)
 {
  v1="V";
 }
 else
 {
  v1="F";
 }
 
 if(q==1)
 {
  v2="V";
 }
 else
 {
  v2="F";
 }
 
 if(r==1)
 {
  rc="V";
 }
 else
 {
  rc="F";
 }
 cout<<v1<<"  "<<v2<<"   "<<"  "<<rc<<"  "<<"\n";
 }
 
 }
 else
 {
  cout<<"Alternativa Invalida\n";
 }
  //ver si continua
  cout<<"Desea volver al menu(s/n):";cin>>rpta;
  if(rpta=="s")
  {
   system("cls");//limpiar pantalla
  }
 }
 system("pause");
}
