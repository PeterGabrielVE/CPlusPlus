/*
 * MArea.h
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MAREA_H_
#define MAREA_H_
#include <string>
using namespace std;
class MArea {
private:
	string descripcion;
	float porcdescto;
	float acum;
public:
	MArea();

	void SetAcum(float acum);
	void SetDescripcion(string descripcion);
	void SetPorcdescto(float porcdescto);

	float GetAcum() ;
	string GetDescripcion() ;
	float GetPorcdescto() ;

	void Actualizar(float precio);




};

#endif /* MAREA_H_ */
