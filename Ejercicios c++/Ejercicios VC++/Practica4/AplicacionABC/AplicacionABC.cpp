#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <iomanip>
#include <string>
using namespace std;


#include "Cuenta.h" // ClientData class definition

void crearcuentaABC();
void escribircuentaABC();
void mostrarcuentaABC();
void outputLine( ostream&, const Cuenta & );

int main(){
	char op;
	do{
	cout<<"===Menu==\n";
	cout<<"1. Crear Archivo\n";
	cout<<"2. Agregar Registros\n";
	cout<<"3. Mostrar Registros\n";
	cout<<"4. Salir\n";
	cout<<"ingrese su opcion:";cin>>op;
	
	switch(op){
	case '1':
		crearcuentaABC();
		break;
	case '2':
		escribircuentaABC();
		break;
	case '3':
		mostrarcuentaABC();
		break;
	}
	}while(op!='4');
} 

void crearcuentaABC(){
ofstream creaABC( "..\\AplicacionMezcla\\temp\\ABC.dat", ios::binary );

   if ( !creaABC ){
      cerr << "El Archivo no puede ser creado" << endl;
      exit( 1 );
   } 
  
   Cuenta Nuevo; 

   for ( int i = 0; i < 100; i++ )
      creaABC.write( reinterpret_cast< const char * >( &Nuevo ), 
         sizeof( Cuenta ) );
   
   creaABC.close();
}

void escribircuentaABC(){
  	int cod;
	char nom[20];
	double limc;
	double cutil;

	ofstream escribeABC( "..\\AplicacionMezcla\\temp\\ABC.dat",ios::out|ios::app|ios::binary );

   if ( !escribeABC ) 
   {
      cerr << "archivo no hallado" << endl;
      exit( 1 );
   } 
   Cuenta cliente;
   cout << "Codigo:";cin >> cod;

   while ( cod > 0 && cod <= 100 ) {
	  cout << "Nombre de Cliente:";cin >> nom;
	  cout << "Limite de Credito:";cin >> limc;
      cout << "Credito Utilizado:";cin >> cutil;

	  cliente.setCodigo(cod);
	  cliente.setNombre(nom);
	  cliente.setLimCredit(limc);
	  cliente.setCreditUtil(cutil);

      escribeABC.write( reinterpret_cast< const char * >( &cliente ),
         sizeof( Cuenta ) );

	  cout << "Codigo:";cin >> cod;
   } // end while
   escribeABC.close();
}

void mostrarcuentaABC(){

ifstream leeABC( "..\\AplicacionMezcla\\temp\\ABC.dat", ios::in|ios::binary );

   // exit program if ifstream cannot open file
   if ( !leeABC ) 
   {
      cerr << "File could not be opened." << endl;
      exit( 1 );
   } // end if

   cout << left << setw( 10 ) << "Codigo" << setw( 16 )
      << "Nombre" << setw( 11 ) << "Lim Credito" << left
      << setw( 17 ) << right << "Credito Util" << endl;

   Cuenta clientel; // create record

   // read first record from file
   leeABC.read( reinterpret_cast< char * >( &clientel ), 
      sizeof( Cuenta ) );

   // read all records from file
   while ( leeABC.good() && !leeABC.eof() ) 
   {
      // display record
      if ( clientel.getCodigo() != 0 )
         outputLine( cout, clientel );

      // read next from file
      leeABC.read( reinterpret_cast< char * >( &clientel ),
         sizeof( Cuenta ) );
   } // end while
	leeABC.close();
}

void outputLine( ostream &output, const Cuenta &record ){
	output << left << setw(10)<< record.getCodigo()<< setw( 16 ) << record.getNombre()<< setw( 10 )
	<< right<< record.getLimCredit() << setw( 17 ) << right << record.getCreditUtil() << endl;
} // end function outputLine