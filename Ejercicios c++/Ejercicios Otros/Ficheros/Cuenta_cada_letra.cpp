#include<iostream>
#include<fstream>
using namespace std;

int main()
{
 ifstream fin("texto.txt");
 char c;
 int cont[26],i;
 
 for(i=0;i<25;i++)
 {
  cont[i]=0;//limpia el vector contador
 }
 fin>>c;//file input
 
 while(!fin.eof())
 {
  i=int(c)-int('a');
  cont[i]++;//cuenta las letras en el fichero
  fin>>c;
 }
 
  for(i=0;i<25;i++)
 {
  if(cont[i]>0)
  {
  cout<<char(int('a')+i)<<' '<<cont[i]<<endl;
  }
 }
 system("pause");
}
