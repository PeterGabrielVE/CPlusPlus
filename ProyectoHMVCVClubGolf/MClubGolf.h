/*
 * MClubGolf.h
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MCLUBGOLF_H_
#define MCLUBGOLF_H_
#include "MArea.h"
#include "MArticulo.h"
#include <vector>

class MClubGolf {

private:
    vector <MArea> vecareas;
    vector <MArticulo> vecservicios;

    /*  Por el servicio de alquiler comnocemos
     *    -Codigo(dato tipo string),
          -Descripcion  ( Matrimonios en la Piscina, Matrimonios en la Mezzanina,Quince a�os en la piscina,
                         Quince a�os en la Mezzanina,fiesta en el parque infantil,fiesta infantil en la piscina, etc.)
          -precio del alquiler
          -area del club establecida para realizar dicho evento(dato tipo entero) -> TIPO

          como ven esos 4 atributos estan presentes en MArticulo, inclusive pr indicar el area dice: dato tipo entero) -> TIPO
          precisamente para que utilicemos MArticulo, y no hagamos la clase MSrvicios . OK

     *
     */




public:
	MClubGolf();

	void IncluirArea(MArea);
	int CantAreas();
	void SetArea(MArea ma, int posi);
	MArea GetArea(int i);

	void IncluirServicio(MArticulo ms);
	int CantServicios();
	void SetServicio(MArticulo ms, int posi);
	MArticulo GetServicio(int i);
	int BuscvarServicio(string cod);

	void Procesar(int posi);
	string DetAreaEnLetras(int i);
	vector<string> DetVecAreasEnLetras();
};



#endif /* MCLUBGOLF_H_ */
