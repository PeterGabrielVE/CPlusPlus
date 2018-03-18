/*
 * Controlador.cpp
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}


void Controlador::ProcesarLibros()
{
  //Instanciar
  MTradicional mt;
  MDigital md;
  VLibro  vl;


  //variables
  string cod,tit,aut,dir,codigo;
  float pvpl,cost,p,cm;
  int tipol,tipoc, resp;

 	       do {
 	    	  vl.Limpiar();
  	     	  //ENCABEZADO DE LECTURA
 	    	  vl.ImprimirEncabezado("\n\n\tDATOS DEL LIBRO",
  	    	 		                 "\t_______________");
  	     	  //LER DATOS BASICOS(COMUNES)
 	    	  cod = vl.LeerString("\n\tCodigo del Libro: ");
 	          aut=vl.LeerString("\n\tAutor: ");
 	          tit=vl.LeerString("\n\tTitulo: ");
 	          cost=vl.LeerValidarNroDecimalValorInicial("\n\tCosto: ",0);
 	          //asi validamos que el costo sea positivo


	          tipol=vl.LeerValidarNro("\n\tTipo Libro: (1)Digital  (2)Tradicional: ",1,2);
	          //aqui validamos que el tipo de libro sea 1 0 2


	          /*LUEGO DE LEER TODOS LOS DATOS COMUNES A LOS LIBROS DIGITALES Y TRADICIONALES,
	           * NECESITAMOS LEER LOS DEMAS DATOS, ESTO LO CHEQUEAMOS COMPARANDO EL TIPO DE LIBRO
	           SI EL TIPO DE LIBRO ES  1-> ES DIGITAL*/
	          switch(tipol)
	          {
	          case 1:
	             {
	        	  /*PROCEDEMOS A LEER TODOS LOS DATOS PROPIOS DE LA CLASE MDIGITAL,
	        	  Q EN ESTE CASO ES LA CANTIDAD DE MEGAS NADA MAS. OK*/

	        	  cm=vl.LeerValidarNroDecimal("\n\tCantidad de Megas del libro(max 4000 MB): ",0,4000);
                  //validamos que la cantidad de megas sea un valor entre 0 y 4000


	        	  /*SETEAMOS TODOS LOS DATOS EN LA CALSE MDIGITAL
	        	  TANTO LO DATOS COMUNES COMO LOS DATOS PROPIOS DE DIGITAL.*/

	        	  md.SetCodigo(cod);
	        	  md.SetAutor(aut);
	        	  md.SetTitulo(tit);
	        	  md.SetCosto(cost);
	        	  md.SetTipo(tipol);

	        	  md.SetCantmegas(cm);

	        	  //imprimimos la salida por libro
	        	  vl.ImprimirLibro(md.GetCodigo(),md.CalcPrecioNeto(),
	        			           md.CalcCostoNeto());

	        	  //INVOCAMOS EL METODO PROCESARDIGITAL DE LA CLASE MTIENDA
	        	  mtda.ProcesarDigital(md);
	             }
	          break;
	          case 2:
	            {

	        	  /* PROCEDEMOS A LEER TODOS LOS DATOS PROPIOS DE LA CLASE Mtradicional,
	        	  Q EN ESTE CASO: direccion, peso, tipo de compra, OK */
	        	  dir= vl.LeerString("\n\tDireccion de envio: ");//
	        	  p=vl.LeerValidarNroDecimal("\n\tpeso( max 3kgr): ",0,3);
	        	  //validamos que el peso sea un valor entre 0 y 3kgrs
	        	  tipoc= vl.LeerValidarNro("\n\tTipo Compra: (1)Nacional  (2)Internacional: ",1,2);
                  //aqui validamos que el tipo de compra sea  1 0 2
	        	  pvpl=vl.LeerValidarNroDecimalValorInicial("\n\tPvp : ", cost);
	        	  //aqui usamos esta lectura, porq permite validar que el pvp no sea menor al costo

	        	  /*SETEAMOS TODOS LOS DATOS EN LA CLASE MTradicional
	        	    TANTO LOs DATOS COMUNES COMO LOS DATOS PROPIOS DE MTradicional.*/

	        	  mt.SetCodigo(cod);
	        	  mt.SetCosto(cost);
	        	  mt.SetAutor(aut);
	        	  mt.SetTitulo(tit);
	        	  mt.SetTipo(tipol);

	        	  mt.SetDireccion(dir);
	        	  mt.SetPeso(p);
	        	  mt.SetTipocompra(tipoc);
	        	  mt.SetPvp(pvpl);

	        	  //imprimimos la salida por libro
	        	  vl.ImprimirLibro(mt.GetCodigo(),mt.CalcPrecioNeto(),
	        	  	        			           mt.CalcCostoNeto());
	        	  //INVOCAMOS EL METODO PROCESARDIGITAL DE LA CLASE MTIENDA
	        	  mtda.ProcesarTradicional(mt);
	           }
	            break;
	          } //switch


             resp=vl.LeerValidarNro("\n\t\tDesea procesar otro libro(si=1/no=2)?",1,2);
             //validamos que la respuesta sea 1 0 2
 	        }while(resp==1);//FIN DEL while

}


void Controlador::Estadisticas()
{
	VTienda vtda;
	vtda.ImprimirTienda(mtda.GetAcganancia(), mtda.CalcPorcVInt(),mtda.CalcMayorTipo(),
			            /*Req 1->*/mtda.GetMenorcostonetoDig(),
			            /*Req 2->*/mtda.GetMenorcostoneto(),
			            /*Req 3->*/mtda.CalcPromedioPnetoTrad40(),
			            /*Req 4->*/mtda.GetMayorpvpD(),mtda.GetTitulomayorD(),mtda.GetAutormayorD());

}

