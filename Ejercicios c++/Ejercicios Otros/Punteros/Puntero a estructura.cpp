#include <iostream>
using namespace std;
 
struct stEstructura {
   int a, b; 
} estructura, *e;
 
int main() { 
   estructura.a = 10;
   estructura.b = 32;
   e = &estructura;
 
   cout << "puntero" << endl;
   cout << e->a << endl;//puntero usado para mostrar dato a
   cout << e->b << endl;
   cout << "objeto" << endl;
   cout << estructura.a << endl; 
   cout << estructura.b << endl; 

   system("pause"); 
}
