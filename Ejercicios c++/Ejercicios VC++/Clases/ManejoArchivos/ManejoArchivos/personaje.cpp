#include<iostream>
using namespace std;

#include "Personaje.h"

void Personaje::setNombre(string nom){
  const char *nomValue = nom.data();
  int length = nom.size();
  strncpy_s( nombre, nomValue, length );
}

string Personaje::getNombre()const{
	return this->nombre;
}

void Personaje::setNivel(int lvl){
	this->nivel=lvl;
}

int Personaje::getNivel()const{
	return this->nivel;
}

void Personaje::setExp(int expe){
	this->exp=expe;
}

int Personaje::getExp() const{
	return this->exp;
}