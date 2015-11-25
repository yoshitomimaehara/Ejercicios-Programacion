#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <iomanip>
#include <string>
using namespace std;

#include "Cuenta.h" // ClientData class definition

void crearcuentaXYZ();
void escribircuentaXYZ();
void mostrarcuentaXYZ();
void outputLine( ostream&, const Cuenta & );

int main()
{
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
		crearcuentaXYZ();
		break;
	case '2':
		escribircuentaXYZ();
		break;

	case '3':
		mostrarcuentaXYZ();
		break;
	}
	}while(op!='4');
} 

void crearcuentaXYZ(){
ofstream creaXYZ( "..\\AplicacionMezcla\\temp\\XYZ.dat", ios::binary );

   if ( !creaXYZ ){
      cerr << "El Archivo no puede ser creado" << endl;
      exit( 1 );
   } 

   Cuenta Nuevo; 

   for ( int i = 0; i < 100; i++ )
      creaXYZ.write( reinterpret_cast< const char * >( &Nuevo ), 
         sizeof( Cuenta ) );
   
   creaXYZ.close();
}

void escribircuentaXYZ(){
  	int cod;
	string nom;
	double limc;
	double cutil;

	ofstream escribeXYZ( "..\\AplicacionMezcla\\temp\\XYZ.dat", ios::out | ios::app | ios::binary );

   if ( !escribeXYZ ) 
   {
      cerr << "archivo no hallado" << endl;
      exit( 1 );
   } 
   Cuenta cliente;
   cout << "Codigo:";cin >> cod;

   while ( cod > 0 && cod <= 100 ) 
   {
	  cout << "Nombre de Cliente:";cin >> setw( 20 ) >> nom;
      cout << "Limite de Credito:";cin >> limc;
      cout << "Credito Utilizado:";cin >> cutil;

	  cliente.setCodigo(cod);
	  cliente.setNombre(nom);
	  cliente.setLimCredit(limc);
	  cliente.setCreditUtil(cutil);

      escribeXYZ.write( reinterpret_cast< const char * >( &cliente ),
         sizeof( Cuenta ) );

	  cout << "Codigo:";cin >> cod;
   } // end while
   escribeXYZ.close();
}

void mostrarcuentaXYZ(){
	ifstream leeXYZ( "..\\AplicacionMezcla\\temp\\XYZ.dat", ios::in|ios::binary );

   // exit program if ifstream cannot open file
   if ( !leeXYZ ) 
   {
      cerr << "File could not be opened." << endl;
      exit( 1 );
   } // end if

   cout << left << setw( 10 ) << "Codigo" << setw( 16 )
      << "Nombre" << setw( 11 ) << "Lim Credito" << left
      << setw( 17 ) << right << "Credito Util" << endl;

   Cuenta clientel; // create record

   // read first record from file
   leeXYZ.read( reinterpret_cast< char * >( &clientel ), 
      sizeof( Cuenta ) );

   // read all records from file
   while ( leeXYZ.good() && !leeXYZ.eof() ) 
   {
      // display record
      if ( clientel.getCodigo() != 0 )
         outputLine( cout, clientel );

      // read next from file
      leeXYZ.read( reinterpret_cast< char * >( &clientel ),
         sizeof( Cuenta ) );
   } // end while
	leeXYZ.close();

}

void outputLine( ostream &output, const Cuenta &record ){
	output << left << setw(10)<< record.getCodigo()<< setw( 16 ) << record.getNombre()<< setw( 10 )
	<< right<< record.getLimCredit() << setw( 17 ) << right << record.getCreditUtil() << endl;
} // end function outputLine