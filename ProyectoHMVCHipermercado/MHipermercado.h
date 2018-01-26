/*
 * MHipermercado.h
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MHIPERMERCADO_H_
#define MHIPERMERCADO_H_
#include "MElectrodomestico.h"
#include "MMueble.h"
class MHipermercado {
private:
   float acumtotvendido;
   int contmueblesdscto;
public:
	MHipermercado();
	//set
	void SetAcumtotvendido(float acum);
	void SetContmueblesdscto(int cont);
    //get
	float GetAcumtotvendido() ;
    int GetContmueblesdscto() ;

    void ProcesarElectrodomestico(MElectrodomestico);
    void ProcesarMueble(MMueble);

};

#endif /* MHIPERMERCADO_H_ */
