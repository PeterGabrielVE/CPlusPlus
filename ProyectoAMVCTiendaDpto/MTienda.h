/*
 * MTienda.h
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */
#ifndef MTIENDA_H
#define MTIENDA_H
#include<vector>
#include "MVenta.h"
#include "MDpto.h"
class MTienda
{	private:
        vector<MDpto> vecdptos;            
	public:
		MTienda();	
		void SetDpto(int i,MDpto md);
		MDpto GetDpto(int i);
		void IncluirDepartamento(MDpto md);  
		int CantDptos();  
		// actualiza la venta en el vector Departamentos
 		void ProcesarUnaVenta(MVenta venta);
        float TotalVentasTienda();
        float PromedioVentasTienda();	
};
#endif
