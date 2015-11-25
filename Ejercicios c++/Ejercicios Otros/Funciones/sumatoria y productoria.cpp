#include<iostream>
using namespace std;

int sumatoria(int,int);
int productoria(int,int);


int main()
{
	int n,r,s,p;
	cout<<"ingrese el primer numero:";cin>>r;
	cout<<"ingrese el ultimo numero:";cin>>n;
	s=sumatoria(r,n);
	p=productoria(r,n);
	cout<<"la sumatoria es:"<<s<<endl;
	cout<<"el productoria es:"<<p<<endl;
	system("pause");
    return 0;
}

int sumatoria(int a,int b)
{
	int i,j;
	i=a;
	j=a+1;
	while(j<=b)
    {
     i=i+j;
     j++;
    }
    return i;
}

int productoria(int a,int b)
{
 	int i,j;
	i=a;
	j=a+1;
	while(j<=b)
    {
     i=i*j;
     j++;
    }
    return i;
}

