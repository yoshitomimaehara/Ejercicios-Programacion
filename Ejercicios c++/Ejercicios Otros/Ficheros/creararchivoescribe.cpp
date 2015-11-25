#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include <iomanip>
using namespace std;

void creaarchivo();
void calculos();


main(){
  int op;
  cout<<setfill('*')<<setw(24)<<"*"<< endl;
  cout<<setfill(' ')<<setw(13)<<"Menu"<<endl;
  cout<<setfill('*')<<setw(24)<<"*"<< endl;
  cout<<"1. Generar Calculos"<<endl;
  cout<<"2. Crear Archivo"<<endl;
  cout<<endl;
  
  switch(op){
     case 1:
        calculos();
        break;
     case 2:
        creaarchivo();
        break;
     case 3:
         break;
  }
  system("pause");
}

void calculos(){
     
}

void creaarchivo(){
    char nom[100];   
    cout<<"ingrese el nombre del archivo:";cin>>nom;
    strcat(nom,".txt");
    ofstream archivo_salida(nom);
}
