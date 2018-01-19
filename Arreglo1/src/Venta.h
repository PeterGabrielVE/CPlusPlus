
#ifndef VENTA_H_
#define VENTA_H_

class Venta {
private:
	char tipoV;
	float monto;
public:
	Venta();
	void settipoV(char eltipoV);
	void setmonto(float elmonto);
	char gettipoV();
	float getmonto();
};

#endif /* VENTA_H_ */
