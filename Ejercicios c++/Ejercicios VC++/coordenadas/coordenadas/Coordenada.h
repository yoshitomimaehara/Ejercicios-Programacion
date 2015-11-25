class Coordenada{
private:
	double x;
	double y;
public:
	Coordenada();
	Coordenada(double,double);

	Coordenada operator +(Coordenada);
	Coordenada operator -(Coordenada);
	double operator *(Coordenada);
	
	void mostrarCoordenada();
	double modulo();
	Coordenada ortogonal();
	Coordenada coordxescalar(double);

	void setX(double x);
	double getX();

	void setY(double y);
	double getY();
};