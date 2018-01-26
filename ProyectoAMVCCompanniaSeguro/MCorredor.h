/*
 * Corredor.h
 *
 *  Created on: 05/01/2012
 *       Author: Pedro Gabriel Leal
 */

#ifndef MCORREDOR_H_
#define MCORREDOR_H_
#include <vector>
#include "MPersona.h"
#include "MContrato.h"
#include "MTipoSeguro.h"
class MCorredor : public MPersona{
private:
	float comision_mensual;
	vector<int> cant_tipo_seguros;
public:
	MCorredor();
	void IncluirCantTipoSeguro(int cant);
	void SetComisionMensual(float m);
	void SetCantTipoSeguros(vector<int> cantipseg);
	void SetCantUnTipoSeguro(int i, int cant);
	float GetComsionMensual();
	int GetCantUnTipoSeguro(int i);
	vector<int> GetCantTipoSeguros();
    int CantCantTipoSeguros();
    void ActualizarCorredor(MContrato, MTipoSeguro);
};
#endif /* CORREDOR_H_ */
