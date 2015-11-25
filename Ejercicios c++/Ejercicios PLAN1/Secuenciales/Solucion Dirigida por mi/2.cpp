#include<iostream.h>
#define a_act 2011
int main()
{
	char nom[10];
	int a_nac,edad,edad_5,edad_10;
	
	cout<<"Ingrese el nombre:";cin>>nom;
	cout<<"Ingrese el año de nacimiento:";cin>>a_nac;
    	
	edad=a_act - a_nac;
	edad_10=edad+10;
	edad_5=edad-5;
	
	cout<<"edad:"<<edad<<"\n";
	cout<<"edad dentro de 10 años:"<<edad_10<<"\n";
	cout<<"edad hace 5 años:"<<edad_5<<"\n";
	
	system("pause");
	return 0;
}
