#include<stdio.h>


//Esto se crea con la libreria stdio
int main(){
    FILE*Alfa=fopen("archivo.txt","a+t");
    fclose(Alfa);
}
