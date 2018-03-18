/*
 * Controlador.cpp
 *
 *  Created on: 05/02/2014
 *
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}


void Controlador::CargarDatosCayos()
{
	//variables de lectura
	  float montotarifa;
	  string desc;
	  //Instancias
	  MCayo mc;
	  va.Limpiar();
	  va.ImprimirEncabezado("\n\n   Datos de los Cayos",
			                    "   __________________");
	for(int i=0;i<7; ++i)
	{

	   va.ImprimirNro("\nCayo #", i + 1);
	   desc=va.LeerString("\nDescripcion:");
	   montotarifa=va.LeerValidarNroDecimalValorInicial("\nMonto Tarifa : ",0);
	   va.ImprimirLineasBlanco(1);
	   mc.SetDesc(desc);
	   mc.SetPvp(montotarifa);
	   ma.IncluirCayo(mc);
	}
}




void Controlador::ProcesarTraslados()
{

	va.Limpiar();
	if (ma.CantidadCayos()==0)
	{
		va.ImprimirMensaje("\n    No se han ingresado los datos de los cayos \n");
		va.Pausa();
		return;
	}


	string ced,nom;
	int canttrasl,posilanchero,
	    resp,dia,nrocayo;
	MLanchero ml;
	MTraslado mt;

 do{
	 va.Limpiar();
	 va.ImprimirEncabezado("\n\n   Datos de los Lancheros",
	 						   "   ______________________");
	 ced=va.LeerString("   Cedula: ");
	 posilanchero=ma.Buscarlanchero(ced);
	 if (posilanchero==-1)
	  {
	   nom=va.LeerString("   Nombre del Lanchero: ");
	   canttrasl=va.LeerValidarNroDecimalValorInicial("   cantidad de traslados a realizar:",0);
	   ml.SetCedula(ced);
	   ml.SetNombre(nom);
	   ml.SetCanttraslados(canttrasl);
       ml.SetAcumganancia(0);
	   ma.IncluirLancheros(ml);

	   for (int i=0; i<ml.GetCanttraslados();++i)
	      {
		   va.ImprimirEncabezado("\n\n     Datos del Traslado",
		   						 "     __________________");
		   //Leer datos del Traslado

			   dia = va.LeerValidarNro("\n\n     Dia ->[1..7]: ", 1,7);
			   nrocayo = va.LeerValidarNro("\n\n     Nro de Cayo : ", 1,ma.CantidadCayos());

			   //setear MTraslasdo
			   mt.SetCedula(ced);
			   mt.SetDia(dia);
			   mt.SetNrocayo(nrocayo);

			   //MAsociacion procesa el Traslado
			   ma.Procesar(mt, ma.CantidadLancheros()-1);
		  }
	  }
	  else
	  {
	    va.ImprimirMensaje("          cedula ya existe...\n\n");
        va.Pausa();
	  }
    resp=va.LeerValidarNro("\n   Desea continuar incluyendo Traslados de lancheros(si=1/no=2)",1,2)	 ;
  }while(resp==1);
}



void Controlador::ReporteLancheros()
	{
	    va.Limpiar();
		if (ma.CantidadLancheros()==0)
		  {
			va.ImprimirMensaje("\n    No se han procesado traslados para generar el listado \n");
			va.Pausa();
			return;
		  }


		vector<string> vauxced;
		vector<string> vauxnom;
		vector<float> vauxganancia;
		for (int i=0;i<ma.CantidadLancheros();++i)
		{
		vauxced.push_back(ma.GetLanchero(i).GetCedula())	;
		vauxnom.push_back(ma.GetLanchero(i).GetNombre())	;
		vauxganancia.push_back(ma.GetLanchero(i).GetAcumganancia())	;
		}
		va.ImprimirReporteLancheros(vauxced,vauxnom,vauxganancia);
	}


void Controlador::ListadoCayos()
	{
	va.Limpiar();
	if (ma.CantidadLancheros()==0)
	{
		va.ImprimirMensaje("\n    No se han procesado traslados para generar el listado \n");
		va.Pausa();
		return;
	}

		vector<float> vauxingresos;
		for (int i=0;i<ma.CantidadCayos();++i)
		 vauxingresos.push_back(ma.GetCayo(i).GetAcumgingresos());

		va.ImprimirListadoCayos(ma.DetVecNombresCayos(),vauxingresos);
	}





