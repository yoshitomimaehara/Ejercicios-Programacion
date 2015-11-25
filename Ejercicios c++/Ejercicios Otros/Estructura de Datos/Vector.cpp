#include <iostream>
#include <conio.h>//getch(),system("cls")
#include <cmath>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;
//caso 2 .- almacenar un codigo, nombre y sueldo para varias
//personas, adicione, liste, elimine y ordene

struct persona{
       int codp;
       char nomp[20];
       double sueldo;
     } rg; //variable tipo registro
     
vector<persona>  vec; //es un vector de tipo persona
void adicion(){
char res;
     do{
         cout<<"Ingrese codigo:"; cin>>rg.codp;
         cout<<"nombre:"; cin>>rg.nomp;
         cout<<"sueldo:"; cin>>rg.sueldo;
         vec.push_back(rg);   // rg contiene a las 3 variables
         cout<<"otro dato s/n:"; cin>>res;
         }while(res!='n');
         
} //fin de adicion
void listado(){
double afp,total;
cout<<"codigo\t nombre\tsueldo\tafp\ttotal\n";
for(int f=0;f<vec.size();f++){
 rg=vec[f];
 afp=rg.sueldo*0.11;
 total=rg.sueldo-afp;
 cout<<rg.codp<<"\t"<<rg.nomp<<"\t"<<rg.sueldo<<"\t"<<afp<<
 "\t"<<total<<endl;
}
}//fin listado
//eliminar un registro
void anula(){
     int nd;
     cout<<" registro anular:"; cin>>nd;
if(nd>vec.size()){
cout<<"fuera de rango "; return;
}
nd--; // porque los indices empiezan de 0
vec.erase(vec.begin()+nd);
cout<<"registro anulado ";
}

void creaarchivo(){
ofstream fs("listado.txt");
double afp,total;
fs<<"codigo\tnombre\tsueldo\tafp\ttotal"<<endl;
for(int f=0;f<vec.size();f++){
 rg=vec[f];
 afp=rg.sueldo*0.11;
 total=rg.sueldo-afp;
fs<<rg.codp<<"\t"<<rg.nomp<<"\t"<<rg.sueldo<<"\t"<<afp<<
 "\t"<<total<<endl;
}

fs.close();
}//fin listado

main(){
       
   int op;    
       do{
       
           cout<<"\n 1.- adicion";
           cout<<"\n 2.- Listado";
           cout<<"\n 3.- Anula";
           cout<<"\n 4.- Archivo";
           cout<<"\n 6.- salir";
           cout<<"\n opcion"; cin>>op;
           switch(op){
           case 1: adicion(); break;
           case 2: listado(); break;
           case 3: anula(); break;
           case 4: creaarchivo(); break;
           }
           
}while(op!=6);



 getch();
}
