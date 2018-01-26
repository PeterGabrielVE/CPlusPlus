/*
 * Controlador.cpp
 *
 *  Created on: 05/01/2012
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador()
{
	chequeo_opcion = false;
}

/* M�todo que lee por teclado los datos de los Corredores de seguros
   Estos datos son  insertados en el vector a traves del
   m�todo IncluirUnCorredor de la clase MCompannia  */
void Controlador :: CargarCorredores()
{
	  // Instrucciones que permiten leer por el teclado los
	  // datos de los corredores para ser almacenados en la memoria
	  string ced, nom, dir, tlf;
          int resp;
	  MCorredor mcorr;  // Establece una relaci�n de Agregracion

	  vc.Limpiar();
	  do
	  {
            vc.Limpiar();
	    vc.ImprimirEncabezado("\n\n   Datos de los Corredores de Seguros","   ==================================");
	    //bloque de instrucciones que permiten leer los datos de entrada por cada Corredor Seguros
	    ced = vc.LeerString("\n   Cedula : ");
            if (mc.BusquedaCorredor(ced) != -1)
            { 
              vc.ImprimirMensaje ("\n   El corredor ya existe: ");      
              return; 
            }
	    nom = vc.LeerString("\n   Nombre : ");
	    dir = vc.LeerString("\n   Direccion : ");
	    tlf = vc.LeerString("\n   Telefono : ");
	    //bloque de instrucciones que permiten darle estado al objeto de la clase MCorredor
	    mcorr.SetCedula(ced);
	    mcorr.SetNombre(nom);
	    mcorr.SetDir(dir);
	    mcorr.SetTlf(tlf);
	    mcorr.SetComisionMensual(0);
	    for (int i=0; i<9; ++i)
	    	mcorr.IncluirCantTipoSeguro(0);
	    mc.IncluirUnCorredor(mcorr);
	    resp = vc.LeerValidarNro("\n\n   Desea incluir otro corredor de Seguros (1)Si  (2)No : ",1,2);
	}
	while (resp == 1);
}

/* M�todo que lee por teclado los datos de los tipos de seguros
   Estos datos son  insertados en el vector a traves del
   m�todo IncluirUnSeguro de la clase MCompannia   */
void Controlador :: CargarTiposSeguros()
{
	// Instrucciones que permiten leer por el teclado los datos
	// de los tipos de seguros para ser almacenados en la memoria
	string descrip;
	int porcomi;
	MTipoSeguro msegur;  // Establece una relaci�n de Agregraci�n

	vc.Limpiar();
	for (int i=1; i<=9; i++)
	{
	    vc.Limpiar();
	    vc.ImprimirEncabezado("\n\n   Datos de los Tipos de Seguros","   =============================");
	    //bloque de instrucciones que permiten leer los datos de entrada por cada tipo de seguro
	    vc.ImprimirNro("\n   Tipo de Seguro Nro. ",i);
	    descrip = vc.LeerString("\n   Descripcion : ");
	    porcomi = vc.LeerNroDecimal("\n   Porcentaje de Comision : ");
	    //bloque de instrucciones que permiten darle estado al objeto de la clase MTipoSeguro
	    msegur.SetDescripcion(descrip);
	    msegur.SetPorcComi(porcomi);
	    mc.IncluirUnSeguro(msegur);
	}  // for
}

/* M�todo que permite procesar todos los contratos de seguros para
   actualizarle a los corredor de seguros su comisi�n mensual y
   la cantidad total vendida en el mes de cada tipo de seguro.

   Este proceso solo se realiza si existen los corredores de seguros
   y la informaci�n de los tipos de seguros, as� mismo se valida que
   cada corredor de seguros exista, chequeo que se realiza con la c�dula */

void Controlador :: ProcesarContratos()
{
	string ced;
	int tiposeg, resp, pos;
	float prima;
	MContrato mcontr;
	vc.Limpiar();

	//Chequeo de que se esten cargados los datos de los Corredores de Seguros
	if (mc.CantCorredores() ==0)
	   {
	   	  vc.Limpiar();
	      vc.ImprimirMensaje("\n\n NO se pueden procesar ventas de contratos de seguros");
	      vc.ImprimirMensaje("\n\n porque no EXISTEN Corredores de Seguros\n\n");
	      vc.Pausa();
	      return;
	   }
	// Instrucciones que se ejecutan cuando existen los corredores de seguros
	// y los tipos de seguros
	do
	{
	   vc.Limpiar();
       //bloque de instrucciones que permiten leer los datos de entrada por cada contrato de segurovc.Limpiar();
	   vc.ImprimirEncabezado("\n\n   Datos del contrato de Seguro", "   ============================");
	   ced = vc.LeerString("   Cedula del corredor de seguros : ");
	   pos = mc.BusquedaCorredor(ced);
	   if (pos == -1)
	      {
	   	   	 vc.Limpiar();
	   	     vc.ImprimirMensaje("\n\n El corredor de seguros no existe\n\n");
	   	     vc.Pausa();
	   	     return;
	   	  }
	   // Instrucciones que se ejecutan cuando el corredor de seguros existe
	   tiposeg = vc.LeerValidarNro("   Numero del tipo de seguro : ",1,mc.CantTiposSeguros());
	   prima = vc.LeerNroDecimal("   Prima del contrato de Seguro : ");
	   //bloque de instrucciones que permiten darle estado al objeto de la clase MContrato
	   mcontr.SetCedula(ced);
	   mcontr.SetTipoSeguro(tiposeg);
	   mcontr.SetPrimaContarto(prima);

	   //metodo de la clase MCompannia que procesa el contrato de seguro
	   mc.ProcesarContratoCorredor(mcontr,pos);
	   resp = vc.LeerValidarNro("\n   Desea procesar otro contrato de seguro?  (1)Si  (2)No : ", 1, 2);
	}
	while (resp == 1);
	chequeo_opcion = true;

}

void Controlador :: ReporteCorredoresSuperaronMetaVenta()
{
   /* Chequeo de que hayan datos para generar
      la consulta por tipo de seguro */
	vc.Limpiar();
	if (chequeo_opcion)
	  {
	     vc.ImprimirMensaje("\n\n REPORTE DE CORREDORES QUE SUPERARON META DE VENTA\n\n");
	     vc.ImprimirEncabezado(" TIPOS DE SEGUROS"," ================");
	     for (int i=0; i<mc.CantTiposSeguros(); ++i)
	     {
	        vc.ImprimirNro(" ",i+1);
	    	vc.ImprimirString("-> ",mc.GetTipoSeguro(i).GetDescripcion());
	        vc.ImprimirLineasBlanco(1);
	     }
	     int tiposeg = vc.LeerValidarNro("\n\n Introduzca el tipo de seguro que desea consultar :  ",1,9);
		 int meta = vc.LeerValidarNroDecimalValorInicial("\n Meta establecida por la empresa ",0);
	     vc.ReporteCorredoresSuperaronMeta(mc.CorredoresQueSuperaronMetaVenta(tiposeg,meta));
		 return;
	  } // if
      vc.Limpiar();
	  vc.ImprimirMensaje("\n\n NO EXISTEN DATOS QUE PERMITAN GENERAR LAS SALIDAS REQUERIDAS\n\n");
	  vc.Pausa();
}

void Controlador :: ConsultaTipoSeguro()
{
   /* Chequeo de que hayan datos para generar
      la consulta por tipo de seguro */
	vc.Limpiar();
	if (chequeo_opcion)
	  {
	     vc.ImprimirMensaje("\n\n CONSULTA DE LA CANTIDAD DE CONTRATOS QUE SE VENDIERON, DADO UN TIPO DE SEGURO\n\n");
	     vc.ImprimirEncabezado(" TIPOS DE SEGUROS"," ================");
	     for (int i=0; i<mc.CantTiposSeguros(); ++i)
	     {
	    	vc.ImprimirNro(" ",i+1);
	    	vc.ImprimirString("-> ",mc.GetTipoSeguro(i).GetDescripcion());
	        vc.ImprimirLineasBlanco(1);
	     }
	     int tiposeg = vc.LeerValidarNro("\n\n Introduzca el tipo de seguro que desea consultar :  ",1,9);
		 int cant = mc.CantidadContratosSegurosVendidosDeUnTipoSeguro(tiposeg);
		 vc.ImprimirNro( "\n\n CANTIDAD TOTAL DE CONTRATOS DE SEGUROS QUE SE VENDIERON : ", cant);
		 vc.ImprimirLineasBlanco(3);
		 vc.Pausa();
	     return;
	  } // if
      vc.Limpiar();
	  vc.ImprimirMensaje("\n\n NO EXISTEN DATOS QUE PERMITAN GENERAR LAS SALIDAS REQUERIDAS\n\n");
	  vc.Pausa();

}

void Controlador :: ReporteCorredores()
{
   //Chequeo de que hayan datos para generar el reporte
   vc.Limpiar();
   if (chequeo_opcion)
	  {
	     /*Bloque de instrucciones que solicita al objeto de MCompannia
	     la informaci�n de todos los corredores de seguros que se debe imprimir*/
	     vector<string> auxced, auxnom;
	     vector<float> auxcomi;
	     for (int i = 0; i < mc.CantCorredores(); ++i)
	     {
	        auxced.push_back(mc.GetCorredor(i).GetCedula());
	        auxnom.push_back(mc.GetCorredor(i).GetNombre());
	        auxcomi.push_back(mc.GetCorredor(i).GetComsionMensual());
	     }
	     // M�todo de la clase VCompannia que se encarga de
	     // imprimir el reporte de los corredores de seguros
	     vc.ReporteCorredores(auxced,auxnom,auxcomi);
	     return;
	  } // if
   vc.Limpiar();
   vc.ImprimirMensaje("\n\n NO EXISTEN DATOS QUE PERMITAN GENERAR LAS SALIDAS REQUERIDAS\n\n");
   vc.Pausa();

}
