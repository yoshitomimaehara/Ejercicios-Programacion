#include<iostream>
using namespace std;

int main(){
  int n1=0,n2=0,max=0,min=0,k=0;
  cout<<"Ingrese el primer numero:";cin>>n1;
  cout<<"Ingrese el segundo numero:";cin>>n2;
  min=n1;
	if(n1>n2){
	   min=n2;
	}
	max=n1;
	if(n1<n2){
		max=n2;
	}
	
	k=min;
	do{
		if(k%7==0){
    cout<<k<<endl;
    }
		k++;
  }while(k!=max);
  system("pause");
}
