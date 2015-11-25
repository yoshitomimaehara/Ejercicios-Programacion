#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
float A, B, C, D, X1, X2;
clrscr();
cout<<"ingrese A:";
cin>>A;
cout<<"ingrese B:";
cin>>B;
cout<<"ingrese C:";
cin>>C;
D=B*B-4*A*C;
X1=(-B+sqrt(D))/(2*A);
X2=(-B-sqrt(D))/(2*A);
cout<<"\n";
cout<<"las ra¡ces son:"<<"\n";
cout<<"X1="<<X1<<"\n";
cout<<"X2="<<X2;
getch();
}