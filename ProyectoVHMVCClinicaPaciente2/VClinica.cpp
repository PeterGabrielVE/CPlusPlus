/*
* VClinica.cpp
*
*  Created on: 27/01/2014
*      Author: Pedro Gabriel Leal
*/

#include "VClinica.h"

VClinica::VClinica() {
	// TODO Auto-generated constructor stub

}

void VClinica::ImprimirConsultaTurno(int totalpac)
{

	ImprimirLineasBlanco(3);
    ImprimirNro("\tTotal Paciente atendidos en el turno: ", totalpac);
    ImprimirLineasBlanco(3);
    Pausa();
}



void VClinica::ImprimirEstadisticas(float montotcons,
		                            float montothosp,float total,
		                            string mayorTurno)
{


	 ImprimirNroDecimal("\n\n\t\tMonto total recolectado por Consultas: ",
			             montotcons);
	 ImprimirNroDecimal("\n\t\tMonto total recolectado por Hospitalizacion: ",
	 			             montothosp);
	 ImprimirNroDecimal("\n\t\tMonto total recolectado por Hospitalizacion y por consultas: ",
		 			             total);
	 ImprimirString("\n\t\tTipo de turno con mayor visitas durante el fin de semana : ", mayorTurno);

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





