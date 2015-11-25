#include <iostream>
#include <cstdlib>
using namespace std;
 
struct fecha {
   unsigned short dia:2;
   unsigned short mes:10;
   unsigned short anno:4;
};

int main()
{
   cout << "Plataforma de " << 8*sizeof(int) << " bits";

   
   //return 0;
   
   system("pause");
}

void mostrarfecha()
{
 fecha fec1;
 
 cout<<fec1.dia<<" de "<<fec1.mes<<fec1.anno<<endl;
}
