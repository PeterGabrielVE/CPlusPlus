/*
 * MSpa.h
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MSPA_H_
#define MSPA_H_
#include <vector>
#include "MArticulo.h"
#include "MTratamiento.h"
#include "MCliente.h"

class MSpa {
private:
   vector<MTratamiento> vectratamientos;
   vector<MArticulo> vecterapias;
   vector<MCliente> vecclientes;
public:
	MSpa();

	//metodos de vectores para VClientes
		void IncluirCliente(MCliente mc);
	    int CantClientes();
	    void SetCliente(MCliente mc,int posi);
	    MCliente GetCliente(int i);
	    int BuscarCliente(string ced);

    //metodos de vectores para vectrtamientos
	void IncluirTratamiento(MTratamiento);
    int CantTratamientos();
    void SetTratamiento(MTratamiento mt,int posi);
    MTratamiento GetTratamiento(int i);
    //metodos de vectores para vectrapias

    void IncluirTerapia(MArticulo mterap);
    int CantTerapias();
    void SetTerapia( MArticulo mterap,
    		         int posi);
    MArticulo GetTerapia(int i);
    int BuscarTerapia(string codt);

    //metodos propios de la clase
    void Procesar (int positerapia, int posicliente);

    float CalcMontoTotalIngresado();


};

#endif /* MSPA_H_ */
