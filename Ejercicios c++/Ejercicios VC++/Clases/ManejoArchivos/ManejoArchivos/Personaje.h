#ifndef PERSONAJE_H
#define PERSONAJE_H
class Personaje{
private:
	char nombre[30];
	int nivel;
	int exp;
public:
	void setNombre(string);
	string getNombre()const;
	void setNivel(int);
	int getNivel()const;
	void setExp(int);
	int getExp()const;
};

#endif