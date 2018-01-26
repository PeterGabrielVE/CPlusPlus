/*
 * Controlador.cpp
 *
 *  Created on: 23/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}

void Controlador::ProcesarEventos()
{
	VEvento ve;
	MFiesta mf;
	MConferencia mc;

	int tipoe,ns, s, videob, tipof, cs, cm,resp;
	string nom;
	int canthoras;

	do
	{
		ve.Limpiar();
		ve.ImprimirEncabezado("DATOS DEL ALQUILER",
				              "__________________");
		ns = ve.LeerValidarNro("\nIngrese el Numero de la Sala [1..5]: ",1,5);
		nom = ve.LeerString("\nIngrese el Nombre de Quien Alquila: ");
		s = ve.LeerValidarNro("\nEs Socio (Si=1/ No=2) ? ",1,2);
		tipoe = ve.LeerValidarNro("\nTipo de Evento: (1) Conferencia, (2)Fiesta: ",1,2);

		switch (tipoe)
		{
		case 1:
		{
			videob = ve.LeerValidarNro("\nDesea utilizar videobeam?  (si=1/ no=2) ? ",1,2);

			{
			  if (videob == 1)
				canthoras = ve.LeerValidarNroValorInicial("\nCantidad de horas: ",1);
				else
			    canthoras = 0;
			}
			mc.SetNrosala(ns);
			mc.SetNombrepersalq(nom);
			mc.SetSocio(s);
			mc.SetTipoevento(tipoe);
			mc.SetVideobeam(videob);
			mc.SetCanthoras(canthoras);

			ve.ImprimirEvento(mc.GetNrosala(),mc.CalcMontoaPagar());
			mcl.ProcesarMConferencia(mc);
		}
		break;

		case 2:
		{

			tipof = ve.LeerValidarNro("\nTipo de Fiesta: (1)Infantiles  (2)Quince annos  (3)Matrimonio: ",1,3);
			cm = ve.LeerValidarNroValorInicial("\nCantidad de Mesas : ",1);
			cs = ve.LeerValidarNroValorInicial("\nCantidad de Sillas : ",1);

			mf.SetNrosala(ns);
			mf.SetNombrepersalq(nom);
			mf.SetSocio(s);
			mf.SetTipoevento(tipoe);
			mf.SetTipofiesta(tipof);
			mf.SetCantmesas(cm);
			mf.SetCantsillas(cs);

			ve.ImprimirEvento(mf.GetNrosala(), mf.CalcularMontoaPagar());
			mcl.ProcesarMFiesta(mf);
		}
		break;
		}
		resp = ve.LeerValidarNro("Desea Procesar Otro Alquiler (Si=1/ No=2)? ",1,2);

	}
	while (resp == 1);
}




void Controlador::Estadisticas()
{
	VClub vc;
	vc.ImprimirClub(mcl.CalcPromedio());
}



