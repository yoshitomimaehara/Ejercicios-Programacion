#include <iostream>
using namespace std;
 
int main() { 
   char cadena[10] = "Hola"; 
   char *c; 
   int *n; 
   void *v;
 
   c = cadena; // c apunta a cadena 
   n = (int *)cadena; // n también apunta a cadena 
   v = (void *)cadena; // v también 
   cout << "caracter: " << *c << endl;//muestra el elemento apuntado
   cout << "entero:   " << *n << endl; 
   cout << "float:    " << *(float *)v << endl; 
   
    
   system("pause");
}
