/*
 * Author: Pedro Gabriel Leal
 */
#include "Controlador.h"

Controlador::Controlador() {}

void Controlador::ProcesarVentas()
{
	MTienda mt;
	MLibro ml;
	MLDigital mld;
	MLTradicional mlt;
	VLibro vl;
	VTienda vt;
	int resp, tipl, tipe;
	float pvp,cos, pes, mb;
	string codi, aut,tito,dire;
	vt.Limpiar();
	   vt.ImprimirLineasBlanco(2);
	   vt.ImprimirEncabezado("Libreria",
	   		                    "==================");
	   resp = vt.LeerValidarNro("\n\n  Desea procesar una venta? 1->SI 2->NO: ",1,2);
	   while (resp==1)
	   {
		   vl.Limpiar();
		   vl.ImprimirEncabezado("Datos del Libro:" , "================");
		  codi= vl.LeerString("Codigo:");
		  pvp=vl.LeerNroDecimal("PVP:");
		  cos=vl.LeerNroDecimal("Costo:");
		  tito=vl.LeerString("Titulo:");
		  aut=vl.LeerString("Autor:");
		  tipl=vl.LeerValidarNro("Tipo (1-Digital 2-Tradicional):",1,2);
		  if(tipl==1)
		  {
			  mb=vl.LeerNroDecimal("MegaBytes:");
		  	  mld.SetCodigo(codi);
		  	  mld.SetPVP(pvp);
		  	  mld.SetCosto(cos);
		  	  mld.SetTitulo(tito);
		  	  mld.SetAutor(aut);
		  	  mld.SetMBytes(mb);
		  	  mt.ProcesarLibrosD(mld);
		  	  vl.ImprimirLibro(mld.GetCodigo(),mld.CostoNeto1(),mld.GetPVP());
		  }

		  	  else
		  	  {
		  		  dire=vl.LeerString("Direccion:");
		  	  	  pes=vl.LeerNroDecimal("Peso:");
		  	  	  tipe=vl.LeerValidarNro("Tipo de Envio (1.Nacional 2.Internacional:",1,2);
		  	  	  	 mlt.SetCodigo(codi);
		  	  	  	 mlt.SetPVP(pvp);
		  	  		mlt.SetCosto(cos);
		  	  		mlt.SetTitulo(tito);
		  	  		mlt.SetAutor(aut);
		  	  		mlt.SetDireccion(dire);
		  	  		mlt.SetPeso(pes);
		  	  		mlt.SetTipoEnv(tipe);
		  	  		mt.ProcesarLIbrosT(mlt);
		  	  	vl.ImprimirLibro(mlt.GetCodigo(),mlt.GetCosto(),mlt.PrecioNeto2());
		  	  }
		  resp = vt.LeerValidarNro("\n\n\n Desea procesar una venta? 1->SI 2->NO: ",1,2);
	   }
	   vt.ImprimirControldeCompras(mt.GetTGanancia(),mt.Porcentaje(),mt.MayorLibro());
}


