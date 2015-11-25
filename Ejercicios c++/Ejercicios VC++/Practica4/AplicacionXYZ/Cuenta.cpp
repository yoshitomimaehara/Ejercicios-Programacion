#include<iostream>
#include<string>
using namespace std;

#include "Cuenta.h"
Cuenta::Cuenta(){
	codigo=0;
	limCredit=0;
	creditUtil=0;
	//nombre={};
}

void Cuenta::setCodigo(int cod){
	this->codigo=cod;
}

int Cuenta::getCodigo()const{
	return this->codigo;
}	
	
void Cuenta::setNombre(string nom){
   const char *nomValue = nom.data();
   int length = nom.size();
   length = ( length < 15 ? length : 14 );
   strncpy_s( nombre, nomValue, length );
   nom[ length ] = '\0';
}
string Cuenta::getNombre()const{
	return this->nombre;
}

void Cuenta::setLimCredit(double clim){
	this->limCredit=clim;
}
double Cuenta::getLimCredit()const{
	return this->limCredit;
}

void Cuenta::setCreditUtil(double cutil){
	this->creditUtil=cutil;
}
double Cuenta::getCreditUtil()const{
	return this->creditUtil;
}