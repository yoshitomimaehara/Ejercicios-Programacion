#include<iostream>
using namespace std;

int main(){
int i=0,k=0,xt1=0,xt2=0,n=0;
	cout<<"ingresa el primer termino:";cin>>xt1;
	cout<<"ingresa el segundo termino:";cin>>xt2;
	cout<<"numero de terminos:";cin>>n;
  cout<<xt1<<" "<<xt2<<" ";
	for(i=2;i<=n;i++){
		k=xt1+xt2;
		xt1=xt2;
		xt2=k;
		cout<<k<<" ";
	}
	cout<<"\n";
	system("pause");
}	
