#include<iostream.h>

int main(){
    int i,j,men=0,may=0,ciu=0,mon=0;
    int temp[10][5];
    float promt,st=0;
    srand(time(0));
    
    for(i=0;i<10;i++){
       for(j=0;j<5;j++){
         temp[i][j]=rand()%(35+1 +10)-10;
       }
    }
    cout<<"       "; 
    for(j=0;j<5;j++) cout<<"M "<<j+1<<"\t";
    cout<<"\n"; 
    for(i=0;i<10;i++){
       cout<<"C "<<i+1<<"     ";               
       for(j=0;j<5;j++){
         cout<<temp[i][j]<<"\t";
       }
       cout<<endl;
    }
 
   for(i=0;i<10;i++){
       for(j=0;j<5;j++){
           st=st+temp[i][j];           
       }
       cout<<"promedio ciudad "<<i+1<<" :"<<st/5<<endl;
    }
    
    for(j=0;j<5;j++){
       for(i=0;i<10;i++){
           st=st+temp[i][j];           
       }
       cout<<"promedio momento "<<j+1<<" :"<<st/10<<endl;
    }
    
    for(i=0;i<10;i++){
       for(j=0;j<5;j++){
           st=st+temp[i][j];           
       }
    }
    promt=st/50;
    cout<<"Promedio total:"<<promt<<endl;
    
    men=temp[0][0];
    for(i=0;i<10;i++){
       for(j=0;j<5;j++){
           if(temp[i][j]<men){
              men=temp[i][j];
              ciu=i+1;
           }          
       }
    }
    cout<<"la ciudad con menor temperatura:"<<"ciudad "<<ciu<<endl;
    
    may=temp[0][0];
    for(i=0;i<10;i++){
       for(j=0;j<5;j++){
           if(temp[i][j]>may){
              may=temp[i][j];
              mon=j+1;
           }          
       }
    }
    cout<<"la momento con mayor temperatura:"<<"momento "<<mon<<endl;
    
    system("pause");   
    
}
