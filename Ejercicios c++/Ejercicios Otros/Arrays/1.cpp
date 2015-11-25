#include<iostream.h>

int main(){
    int i,inf=0,t=0,may=0;
    int edad[40];
    float prom=0,s=0,por;
    srand(time(0));
   

    for(i=0;i<40;i++){
       edad[i]=rand()%(65+1 - 18) + 18;
       cout<<edad[i]<<"  ";
       s+=edad[i];
       if(edad[i]>=55 && edad[i]<=60) t++;
       if(edad[i]>55 && i>13)  may++;
    }
    prom=s/40;
    for(i=0;i<40;i++){
    if(edad[i]<prom) inf++;
    }
    por=t*100/40;   

    
    cout<<"promedio:"<<prom<<endl;
    cout<<"trabajadores edades inferiore al promedio de edad:"<<inf<<endl;
    cout<<"porcentaje de trabjadores que tienen edades entre 55 y 60 anhos:"<<por<<" %"<<endl;
    cout<<"tienen edades superiores a 55 anhos:"<<may<<endl;
    
    system("pause");
    
}
