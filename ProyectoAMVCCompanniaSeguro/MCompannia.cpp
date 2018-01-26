/*
 * Compannia.cpp
 *
 *  Created on: 05/01/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MCompannia.h"

MCompannia :: MCompannia() {}

void MCompannia :: IncluirUnCorredor(MCorredor cs)
{
	corredores.push_back(cs);
}
void MCompannia :: IncluirUnSeguro(MTipoSeguro ts)
{
	tipos_seguros.push_back(ts);
}
MCorredor MCompannia :: GetCorredor(int i)
{
	return corredores[i];
}
MTipoSeguro MCompannia :: GetTipoSeguro(int i)
{
	return tipos_seguros[i];
}
void MCompannia :: SetCorredor(int i,MCorredor cs)
{
	corredores[i] = cs;
}
void MCompannia :: SetTipoSeguro(int i,MTipoSeguro ts)
{
	tipos_seguros[i] = ts;
}
int MCompannia :: CantCorredores()
{
	return corredores.size();
}
int MCompannia :: CantTiposSeguros()
{
	return tipos_seguros.size();
}

int MCompannia :: BusquedaCorredor(string ced)
{
	for (int i=0; i<CantCorredores();++i)

		if (corredores[i].GetCedula() == ced)
			return i;
	return -1;
}

void MCompannia :: ProcesarContratoCorredor(MContrato contrato, int pos)
{
	/*Instrucciones que le actualizan al corredor de seguros la cantidad
     total vendida en el mes, del tipo de seguro del contrato que se esta
     procesando*/

	corredores[pos].ActualizarCorredor(contrato,tipos_seguros[contrato.GetTipoSeguro()-1]);
}


vector<string> MCompannia :: CorredoresQueSuperaronMetaVenta(int tiposeg, int meta)
{
	vector<string> auxced;
	for (int i=0;i< CantCorredores();++i)
		if (corredores[i].GetCantUnTipoSeguro(tiposeg - 1) > meta)
	        auxced.push_back(corredores[i].GetCedula());
	return auxced;
}

int MCompannia :: CantidadContratosSegurosVendidosDeUnTipoSeguro(int tiposeg)
{
	int acum = 0;
	for (int i=0;i< CantCorredores();++i)
	    acum += corredores[i].GetCantUnTipoSeguro(tiposeg - 1);
	return acum;
}
