/*
* VClinica.cpp
*
*  Created on: 26/01/2014
*      Author: Pedro Gabriel Leal
*/

#include "VClinica.h"

VClinica::VClinica() {
	// TODO Auto-generated constructor stub

}

void VClinica::ImprimirConsultaTurno(int totpacientes)
{

	ImprimirLineasBlanco(3);
    ImprimirNro("\tTotal Paciente atendidos en el turno: ", totpacientes);
    ImprimirLineasBlanco(3);
    Pausa();
}



void VClinica::ImprimirEstadisticas(float montototcons,
		                            float montotothosp)
{


	 ImprimirNroDecimal("\n\n\t\tMonto total recolectado por Consultas: ",
			             montototcons);
	 ImprimirNroDecimal("\n\t\tMonto total recolectado por Hospitalizacion: ",
	 			             montotothosp);
	 ImprimirLineasBlanco(3);
	 Pausa();
}



void VClinica::ImprimirListado(vector<string> vcedmayor)
{
	Limpiar();
	ImprimirLineasBlanco(2);
	ImprimirEncabezado("\t\t\t\tL i s t a d o",
				       "\t\t\t\t_____________\n");
		ImprimirLineasBlanco(1);
	ImprimirEncabezado("\t   Cedulas de pacientes(consultas) con mayor monto cancelado",
		               "\t   _________________________________________________________\n");

	for (unsigned int i=0; i< vcedmayor.size(); ++i)
	 {
		ImprimirStringJustificado(vcedmayor[i], 69);
		ImprimirLineasBlanco(1);
	 }
	Pausa();
}



