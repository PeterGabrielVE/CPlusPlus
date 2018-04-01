/*
 * MTerapia.h
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MTERAPIA_H_
#define MTERAPIA_H_
#include <string>
using namespace std;

class MTerapia {
private:
	string codigo;
	string descripcion;
	float precio;
	int tipotratamiento;


public:
	MTerapia();
    string GetCodigo() ;
    string GetDescripcion() ;
    float GetPrecio() ;
    int GetTipotratamiento() ;
    void SetCodigo(string codigo);
    void SetDescripcion(string desc);
    void SetPrecio(float prec);
    void SetTipotratamiento(int tipotrat);

};

#endif /* MTERAPIA_H_ */
