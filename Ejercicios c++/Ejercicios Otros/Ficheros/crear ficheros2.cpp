#include<fstream>
#include<iostream>
#include<string>
using namespace std;

//Esto se crea con la libreria fstream
int main(){
    char nom[100],tipo[]=".txt";
    
    cout<<"ingrese el nombre del archivo:";cin>>nom;
    strcat(nom,tipo);
    ofstream fs(nom);
    fs<<"habla wey"<<endl;
    
    fs.close();
   
    
    
}
