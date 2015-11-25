class Nodo{
private:
	int datos;
	Nodo *SiguientePtr();
public:
	Nodo(int);
	void establecerDatos(int);
	int obtenerDatos()const;
	void establecerSiguientePtr(Nodo *);
	Nodo *obtenerSiguientePtr() const;
};