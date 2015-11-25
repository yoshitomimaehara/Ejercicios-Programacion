#include<iostream.h>
 #include<fstream.h>
 char xfilename[15];//variable publica
 main(){
        //declarar variables
        char nombre [80],filename[15];
        char op[2];
        int cod;
      char aut[80];
        //entrada de datos
        cout<<"Nombre  del fichero a grabar:";cin>>filename;
        strcpy(xfilename,filename);
       
        //abrir el fichero
        ofstream fout(filename,ios::app);
        do{
                 //entrada de datos
         cout<<"Nombre del libro:";cin>>nombre;
         cout<<"\n";
          cout<<"nombre de autor:";cin>>aut;
          cout<<endl;
         cout<<"codigo:";cin>>cod;
         
         //clase fout permite editar  el archivo de datos
         //escribir datos a disco
         fout<<nombre<<"\t"<<aut<<"\t"<<cod<<endl;
         cout<<"desea continuar si/no:";cin>>op;
          system("CLS"); //limpia el archivo
         }while(strcmp(op,"si")==0);
         fout.close();//cierra el archivo
         cout<<"Datos grabados en :"<<xfilename<<endl;
        
       //agregar registros
       
       ifstream fin(xfilename);
       //fin.open(); 
       if(fin.fail()){
                cout<<"no se encontro el archivo:";      
                      }
       else {               
         cout<<"Nombre\tautor\tcodigo"<<endl;
         fin.seekg(0);
         fin>>nombre>>aut>>cod;
         while(!fin.eof()){
          cout<<nombre<<"\t"<<aut<<"\t"<<cod<<endl;
          fin>>nombre>>aut>>cod; 
          /*cout<<""<<nombre<<endl;
          cout<<""<<aut<<endl;
          cout<<""<<cod<<endl;*/
         }
       }

        
        
        
        system("PAUSE");
        }
