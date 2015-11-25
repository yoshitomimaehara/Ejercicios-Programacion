#include <iostream>
using namespace std;
int main()
{
 int n,c,u,d;
 float sde;
 cout<<"ingrese el numero de 3 cifras:";cin>>n;
 c=n/100;
 d=(n-c*100)/10;
 u=n%10;
 sde=(c-u)/2;
 cout<<"Semidiferencia de cifras extremas:"<<sde<<endl;
 system("pause");
}
