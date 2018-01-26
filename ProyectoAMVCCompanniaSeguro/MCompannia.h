/*
 * Compannia.h
 *
 *  Created on: 05/01/2012
 *       Author: Pedro Gabriel Leal
 */

#ifndef MCOMPANNIA_H_
#define MCOMPANNIA_H_
#include "MCorredor.h"
#include "MContrato.h"
#include "MTipoSeguro.h"
#include <vector>
class MCompannia {
private:
	vector<MCorredor> corredores;
	vector<MTipoSeguro> tipos_seguros;
public:
	MCompannia();
	void IncluirUnCorredor(MCorredor cs);
	void IncluirUnSeguro(MTipoSeguro ts);
	MCorredor GetCorredor(int i);
	MTipoSeguro GetTipoSeguro(int i);
	void SetCorredor(int i,MCorredor cs);
	void SetTipoSeguro(int i,MTipoSeguro ts);
	int CantCorredores();
	int CantTiposSeguros();
	int BusquedaCorredor(string ced);
	void ProcesarContratoCorredor(MContrato contrato, int pos);
	vector<string> CorredoresQueSuperaronMetaVenta(int tiposeg, int meta);
	int CantidadContratosSegurosVendidosDeUnTipoSeguro(int tiposeg);
};
#endif /* COMPANNIA_H_ */
