#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
   char letra;
   string mensaje;
   int c=0;
   cout<<"ingrese el mensaje:";
   getline(cin,mensaje);
   for(int i=0;i<256;i++){
      c=0;
      for(int j=0;j<mensaje.size();j++){
         if((char)i==mensaje[j]){
            c++;   
         }
      }
      if(c>0){
        cout<<(char)i<<":"<<c<<endl;      
      }
   }
   
   system("pause");
}
