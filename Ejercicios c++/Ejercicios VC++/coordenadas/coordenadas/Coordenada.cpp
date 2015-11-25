#include<iostream>
#include<cmath>
using namespace std;

#include"Coordenada.h"

Coordenada::Coordenada(){
	this->x=0;
	this->y=0;
}

Coordenada::Coordenada(double x,double y){
	this->x=x;
	this->y=y;
}


Coordenada Coordenada::operator +(Coordenada u){
    Coordenada suma;
	suma.x=(this->x)+(u.x);
	suma.y=(this->y)+(u.y);
	return suma;
}

Coordenada Coordenada::operator -(Coordenada u){
    Coordenada resta;
	resta.x=(this->x)-(u.x);
	resta.y=(this->y)-(u.y);
	return resta;
}

double Coordenada::operator *(Coordenada u){
	Coordenada escalar;
	double prod;
	escalar.x=this->x*(u.x);
	escalar.y=this->y*(u.y);
	prod=escalar.getX()+escalar.getY();
	return prod;
}

double Coordenada::modulo(){
   double d;
   d=sqrt(pow(this->x,2)+pow(this->y,2));
   return d;
}

Coordenada Coordenada::ortogonal(){
	Coordenada orto;
	orto.x=this->y*(-1);
	orto.y=this->x;
	return orto;
}

Coordenada Coordenada::coordxescalar(double num){
	Coordenada origen;
	origen.x=this->x*num;
	origen.y=this->y*num;
	return origen;
}


void Coordenada::mostrarCoordenada(){
	cout<<"("<<this->x<<";"<<this->y<<")";
}

void Coordenada::setX(double x){
	this->x=x;
}

double Coordenada::getX(){
	return this->x;
}

void Coordenada::setY(double y){
	this->y=y;
}
double Coordenada::getY(){
	return this->y;
}