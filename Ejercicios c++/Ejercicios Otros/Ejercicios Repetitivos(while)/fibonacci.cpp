/*
Serie de Fibonacci
ejemplo
t1:3
t2:5
3 5 6 13 21 34 55
*/

#include<iostream.h>

int main()
{
  int t1,t2,tn,tk,i,n,tp,aux;
  cout<<"digite primer termino=>";cin>>t1;
  cout<<"digite segundo numero=>";cin>>t2;
  cout<<"digite cantidad de terminos=>";cin>>n;
  tn=t1+t2;
  cout<<t1<<","<<t2<<","<<tn;
  i=2;
  tk=t2;
  aux=0;
  do
  {
    tp=tn+tk;
    cout<<","<<tp;
    if(i%2==1 || i>3)  
    {
    tn=tk;
    }
    tk=tp;
    tp=0;
    i++;         
  }while(i<n-1);
  cout<<"\n";          
  system("pause");
}
