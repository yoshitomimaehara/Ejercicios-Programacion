class Personaje{
private:
	string nombre;
	int HP;//Puntos de Salud(Health Points)
	int MP;//Puntos de Magia(Magic Points)
	int Lvl;//Nivel(Level)
	int Str;//Fuerza(Strength)
	int Vit;//Vitalidad(Vitality)
	int Dex;//Destreza(Dexterity)
	int Spr;//Espiritu(Spirit)
	int Spd;//Velocidad(Speed)
	int Eva;//Evasion(Evasion)
	int Hit;//Tasa de Acierto(Hit Rate)
	int Luck;//Suerte(Luck)
	int Exp;//Puntos de Experiencia(Experience Points)
	int SpecialBar//Barra de especial
public:
	void attack();//ataque con arma
	void magic();
	void items();//selecciona un item a usar
	void defense();
	void special();
	
};