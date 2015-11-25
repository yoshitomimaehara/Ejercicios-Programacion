#include<iostream>
#include<fstream>
using namespace std;

void crea(){
  ofstream archi;
  archi.open("pagina.html",ios::out|ios::in);
  archi<<"<body>";
  archi<<"<h1>Hola Gente</h1>";
  archi<<"<p>esta pagina fue creada en c++</p>";
  archi<<"</body>";
  archi.close();
}


int main(){
    crea();
 
}
