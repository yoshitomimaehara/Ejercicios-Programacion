#include<iostream.h>
#include<conio.h>
main()
{
int h,i,j,k,l,F2,F3,F4,F5;
float n,fr1,fr2,fr3,fr4,fr5,Fr2,Fr3,Fr4,Fr5,p1,p2,p3,p4,p5,P2,P3,P4,P5,c;
h=0; i=0; j=0; k=0; l=0;
clrscr();
do
{
cout<<"Ingrese la venta a acumular: "; cin>>n;
if(n>=50 && n<100)
{
h=h+1;
}
if(n>=100 && n<150)
{
i=i+1;
}
if(n>=150 && n<200)
{
j=j+1;
}
if(n>=200 && n<250)
{
k=k+1;
}
if(n>=250 && n<300)
{
l=l+1;
}
}
while(n>0);
F2=h+i; F3=F2+j; F4=F3+k;  F5=F4+l;
c=F5;
fr1=h/c; fr2=i/c; fr3=j/c; fr4=k/c; fr5=l/c;
Fr2=fr1+fr2; Fr3=Fr2+fr3; Fr4=Fr3+fr4; Fr5=Fr4+fr4;
p1=fr1*100; p2=fr2*100; p3=fr3*100; p4=fr4*100;  p5=fr5*100;
P2=p1+p2; P3=P2+p3;  P4=P3+p4;   P5=P4+p5;
cout<<"[50-100["<<"f1:"<<h<<" "<<"F1:"<<h<<" "<<"fr1:"<<fr1<<"\n"<<"Fr1:"<<fr1<<" "<<"p1:"<<p1<<" "<<"P2:"<<p1;
cout<<"\n"<<"[100-150[ "<<"f2:"<<i<<" "<<"F2:"<<F2<<" "<<"fr2:"<<fr2<<"\n"<<"Fr2:"<<Fr2<<" "<<"p2:"<<p2<<" "<<"P2:"<<P2;
cout<<"\n"<<"[150-200[ "<<"f3:"<<j<<" "<<"F3:"<<F3<<" "<<"fr3:"<<fr3<<"\n"<<"Fr3:"<<Fr3<<" "<<"p3:"<<p3<<" "<<"P3:"<<P3;
cout<<"\n"<<"[200-250[ "<<"f4:"<<k<<" "<<"F4:"<<F4<<" "<<"fr4:"<<fr4<<"\n"<<"Fr4:"<<Fr4<<" "<<"p4:"<<p4<<" "<<"P4:"<<P4;
cout<<"\n"<<"[250-300[ "<<"f5:"<<l<<" "<<"F5:"<<F5<<" "<<"fr5:"<<fr5<<"\n"<<"Fr5:"<<Fr5<<" "<<"p5:"<<p5<<" "<<"P5:"<<P5;
getch();
}


