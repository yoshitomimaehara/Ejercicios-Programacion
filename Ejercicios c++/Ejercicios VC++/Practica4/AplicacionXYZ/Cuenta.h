#ifndef CUENTA_H
#define CUENTA_H
class Cuenta{
private:
  	int codigo;
	char nombre[20];
	double limCredit;
	double creditUtil;
 public:
	Cuenta();
	void setCodigo(int);
	int getCodigo()const;	
	
	void setNombre(string);
	string getNombre()const;

	void setLimCredit(double);
	double getLimCredit()const;

	void setCreditUtil(double);
	double getCreditUtil()const;
};
#endif