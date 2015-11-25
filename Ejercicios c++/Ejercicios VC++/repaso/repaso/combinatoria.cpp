#include<iostream>
using namespace std;

struct cr
{
	int ct;
	int cr;
}

template <typename T>
T fact(T n){
	T k;
	int i;
	k=1;
	for(i=1;i<=n;i++) 
	{	
		k=i*k;
	}
	return k;
}

void main()
{
	int n,r;
	cout<<"ingrese un numero";cin>>n;
	r=fact(n);
	cout<<"factorial:"<<r<<"\n";
}