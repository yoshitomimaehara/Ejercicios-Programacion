#include<iostream>
using namespace std;

struct coord
{
 int x,y;
};


int cuadrante(coord a)
{
    
 //eje de coordenadas
 if(a.x==0 && a.y==0)
 {
  cout<<"en origen de coordenadas\n";
 }
  //eje x+
  else if(a.x>0 && a.y==0)
 {
  cout<<"en eje X+\n";
 }
  //eje x-
  else if(a.x<0 && a.y==0)
 {
  cout<<"en eje X-\n";
 }
  //eje y+
  else if(a.x==0 && a.y>0)
 {
  cout<<"en eje Y+\n";
 }
 //y-
  else if(a.x==0 && a.y<0)
 {
  cout<<"en eje Y-\n";
 }
  //I cuadrante
  else if(a.x>0 && a.y>0)
 {
  cout<<"en I cuadrante\n";
 }
 //II cuadrante
  else if(a.x<0 && a.y>0)
 {
  cout<<"en II cuadrante\n";
 }
 //III cuadrante
  else if(a.x<0 && a.y<0)
 {
  cout<<"en III cuadrante\n";
 }
 //IV cuadrante
  else if(a.x>0 && a.y<0)
 {
  cout<<"en IV cuadrante\n";
 }
 
}

int main()
{
coord z;
 cout<<"ingrese la coordenada x:";cin>>z.x;
 cout<<"ingrese la coordenada y:";cin>>z.y;
 cuadrante(z);
 

 
 system("pause");
}
