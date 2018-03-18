/*
 * Controlador.cpp
 *
 *  Created on: 04/02/2014
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
chequeo=false;
}

void Controlador::SetChequeo(bool cheq)
{
    chequeo = cheq;
}

bool Controlador::GetChequeo()
{
    return chequeo;
}


void Controlador::RegistrarAreas()
{
	if (mcg.CantAreas()>0)
	 {

		vcg.ImprimirMensaje("Ya se ha cargado la informacion de las areas\n\n");
		vcg.Pausa();
		return;//nos devolvemos al menu de opciones para procesar otra opcion
	 }

 MArea ma;
 float porc;
 string desc;
 vcg.Limpiar();
 vcg.ImprimirEncabezado("Registrar Areas",
		                "===============");
 for(int i=0; i<7; ++i)
 {
  vcg.ImprimirNro(" Tipo ",i+1);
  desc= vcg.LeerString(" \n Descripcion: ");
  porc=vcg.LeerValidarNroDecimalValorInicial("\n Porcentaje Descto: ",0);
  vcg.ImprimirLineasBlanco(2);
  ma.SetDescripcion(desc) ;
  ma.SetPorcdescto(porc);
  mcg.IncluirArea(ma);
 }

}

void Controlador::RegistrarServiciosAlquler()
{

	if (mcg.CantServicios()>0)
		{
			//
			vcg.ImprimirMensaje("Ya se ha cargado la informacion de los servicios\n\n");
			vcg.Pausa();
			return;//nos devolvemos al menu de opciones para procesar otra opcion
		}


	MArticulo ms;
	string cod,desc;
	float prec;
	int tipo,posi,resp;


	do
	{
	  vcg.Limpiar();
	  vcg.ImprimirEncabezado("Registrar Servicios",
					         "==================");
	  cod=vcg.LeerString("Codigo del servicio de alquiler: ")	;
	  posi=mcg.BuscvarServicio(cod);
	  if(posi ==-1)
	  {
		desc=vcg.LeerValidarNro("Descripcion: 1.Piscina	2.Mezzanina 3.Restaurant 4.Parque Infantil \n\t     5.Cancha de Tenis 6.Cancha de Bolas  7.Churuata: ",1,7);
		prec=vcg.LeerValidarNroDecimalValorInicial("Precio del alquiler: ",0);
		tipo= vcg.LeerValidarNro("Tipo Area [1..7]: ",1,7);
		ms.SetCodigo(cod);
		ms.SetDesc(desc);
		ms.SetPvp(prec);
		ms.SetTipo(tipo);
		mcg.IncluirServicio(ms);
	  }
	  else

		 vcg.ImprimirMensaje("Servicio ya registrado\n\n") ;

	 resp=vcg.LeerValidarNro("Desea registrar otro servicio de alquiler(si=1/no=2 ? ",1,2) ;

	}while(resp==1);

}


void Controlador::ProcesarAlquileres()
{

	if (mcg.CantServicios()==0 or mcg.CantAreas()==0)
		{
		   if (mcg.CantServicios()==0 )
		      vcg.ImprimirMensaje("NO se ha cargado la informacion de los servicios\n\n");
		   if (mcg.CantAreas()==0)

			   vcg.ImprimirMensaje("NO se ha cargado la informacion de las areas\n\n");
		   vcg.Pausa();
		   return;
	    }

	string cod,nrosocio;
	int posi,resp;

	vcg.Limpiar();
	vcg.ImprimirEncabezado("Procesar Alquileres",
			               "===================");
	do
	{
		cod=vcg.LeerString("Codigo del servicio de alquiler: ");
		posi=mcg.BuscvarServicio(cod);
		if(posi >=0)
		{
			chequeo=true;
			nrosocio=vcg.LeerString("Numero el socio: : ");
			mcg.Procesar(posi);
		}
		else

			vcg.ImprimirMensaje("Servicio no ha sido registrado\n\n") ;

		resp=vcg.LeerValidarNro("Desea registrar otro alquiler(si=1/no=2 ? ",1,2) ;

	}while(resp==1);

}

void Controlador::ReporteEstadistico()
{
	if ( !chequeo )
	  {
		vcg.ImprimirMensaje("NO se han procesado alquileres\n\n");
		vcg.Pausa();
	    return;
	  }


	vector <float>	vauxmtoarea;

 for(int i=0;i<mcg.CantAreas(); ++i)
	 vauxmtoarea.push_back(mcg.GetArea(i).GetAcum());

 vcg.ImprimirReporte(mcg.DetVecAreasEnLetras(),vauxmtoarea);

}

