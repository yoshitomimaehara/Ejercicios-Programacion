#include<iostream>
using namespace std; 

int main()
{
 int n=10;
 int* point=0;
 
 cout<<"valor de n:"<<n<<"\n";
 cout<<"direccion de n:"<<&n<<"\n";
 cout<<"Variable puntero:"<<point<<"\n";
 cout<<"direccion puntero:"<<&point<<"\n";
 cout<<"despues de asignar\n";
 point = &n;
 //se conserva la direccion mas no el valor del puntero
 cout << "Variable puntero: " << point << endl;
 cout << "Direccion puntero: " << &point << endl << endl;
 
 system("pause");
}
