#include <iostream>
using namespace std;
 
int main() { 
   char Mes[][11] = { "Enero", "Febrero", "Marzo", "Abril", 
      "Mayo", "Junio", "Julio", "Agosto", 
      "Septiembre", "Octubre", "Noviembre", "Diciembre"}; 
   char *Mes2[] = { "Enero", "Febrero", "Marzo", "Abril", 
      "Mayo", "Junio", "Julio", "Agosto", 
      "Septiembre", "Octubre", "Noviembre", "Diciembre"};
 
   cout << "Tama�o de Mes: " << sizeof(Mes) << endl; 
   cout << "Tama�o de Mes2: " << sizeof(Mes2) << endl; 
   cout << "Tama�o de cadenas de Mes2: " 
        << &Mes2[11][10]-Mes2[0] << endl; 
   cout << "Tama�o de Mes2 + cadenas : " 
        << sizeof(Mes2)+&Mes2[11][10]-Mes2[0] << endl;
 
   system("pause");
}
