/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
 */


#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
}


void Controlador::ProcesarHerramientas()
{
  //Instancia
           MMartillo mm;
           MEsmeriladora me;
           MLijadora ml;
           VHerramienta vh;


  //variables de lectura
           string cod, desc;
           int tipo,diasalq,cantlijas,resp;

           do
           {
        	   vh.Limpiar();
        	   vh.ImprimirEncabezado("\n\n\tDATOS DE la HERRAMIENTA",
        	   				             "\t_______________________");
        	   cod= vh.LeerString("\n\tCodigo: ");
        	   desc= vh.LeerString("\n\tDescripcion: ");
        	   tipo= vh.LeerValidarNro("\n\tTipo de Herramienta  \n\t1)Martillo Demoledor  2)Esmeriladora de hierro  3)Lijadora de madera:",1,3);
        	   diasalq=vh.LeerValidarNroValorInicial("\n\tDias de alquiler de la herramienta: ",0);

        	   switch(tipo)
        	   {
        	   case 1:{

        		   /*LUEGO DE LEER TODOS LOS DATOS COMUNES de la herramienta:
        		    * NECESITAMOS LEER LOS Datos propios de MMartillo
	        	        pero NO HAY */

        		   /*SETEAMOS TODOS LOS DATOS LEIDOS EN LA CLASE MMartillo*/
        		   mm.SetCodigo(cod); //esta en MArticulo(Herencia)
        		   mm.SetDesc(desc);  // esta en MArticulo (Herencia)
        		   mm.SetTipo(tipo); //esta en MMArticulo (Herencia)
        		   mm.SetDiasalguiler(diasalq); //est� en MHerramienta  (Herencia)

        		   /* imprimir la herramienta martillo */
        		   vh.ImprimirHerramienta(mm.GetCodigo(), mm.GetDesc(), mm.CalcIva(), mm.CalcMontoFinalAlquiler(),
        				                  mm.DetNombreHerramienta());

        		   /*INVOCAMOS EL METODO PROCESAR asociado con la Herencia MMARTILLO ..SI ES NECESARIO.*/
        		   mempre.ProcesarMartillo(mm);
        	   }
        	   break;

        	   case 2:{

        		   /*LUEGO DE LEER TODOS LOS DATOS COMUNES de la herramienta,
            	        	   NECESITAMOS LEER LOS DATOS propios de MEsmeriladora ...si hay datos .
            	        	   ...pero NO HAY*/

        		   /*SETEAMOS TODOS LOS DATOS LEIDOS EN LA CLASE MEsmeriladora*/
        		   me.SetCodigo(cod); //esta en MArticulo(Herencia)
        		   me.SetDesc(desc);  // esta en MArticulo (Herencia)
        		   me.SetTipo(tipo); //esta en MArticulo (Herencia)
        		   me.SetDiasalguiler(diasalq); //est� en MHerramianta  (Herencia)

        		   /* imprimir la herramienta Esmeriladora */
        		   vh.ImprimirHerramienta(me.GetCodigo(), me.GetDesc(), me.CalcIva(), me.CalcMontoFinalAlquiler(),
        				                   me.DetNombreHerramienta());

        		   /*INVOCAMOS EL METODO PROCESAR asociado con la Herencia de MMartillo..SI ES NECESARIO..*/
        		   mempre.ProcesarEsmeriladora(me);
        	   }
        	   break;
        	   case 3:{

        		   /*LUEGO DE LEER TODOS LOS DATOS COMUNES de la herramienta,
	        	               	 NECESITAMOS LEER LOS DEMAS DATOS de MLijadora ..si hay datos..*/
        		   cantlijas=vh.LeerValidarNroValorInicial("\n\tCantidad de lijas: ",0) ;

        		   /*SETEAMOS TODOS LOS DATOS LEIDOS EN LA CLaSE MLijadora
	           	        	  TANTO LO DATOS COMUNES COMO LOS DATOS PROPIOS DE LA CLASE.*/

        		   ml.SetCodigo(cod); //esta en MArticulo(Herencia)
        		   ml.SetDesc(desc);  // esta en MArticulo (Herencia)
        		   ml.SetTipo(tipo); //esta en MArticulo (Herencia)
        		   ml.SetDiasalguiler(diasalq); //est� en MHerramienta(Herencia)

        		   ml.SetCantlijas(cantlijas); //esta en MLijadora

        		   /* imprimir la herramienta LIJADORA */
        		   vh.ImprimirHerramienta(ml.GetCodigo(), ml.GetDesc(), ml.CalcIva(), ml.CalcMontoFinalAlquiler(),
        				                  ml.DetNombreHerramienta());

        		   /*INVOCAMOS EL METODO PROCESAR asociado con la Herencia MLIJADORA..SI ES NECESARIO */
        		          		   mempre.ProcesarLijadora(ml);
        	   }
        	   break;

        	   } //switch

        	   resp = vh.LeerValidarNro("\n\t Desea alquilar otra Herramienta  (1=SI, 2=NO)?",1,2);

           }while(resp == 1);
}


void Controlador::Estadisticas()
{
    //INSTANCIA LA VISTA DE LA CLASE GRANDE
	 VEmpresa vempre;

	//INVOCAMOS EL METODO QUE IMPRIME POR LA CLASE GRANDE
	 vempre.ImprimirEmpresa(mempre.DeterminarMayorTipo());

}
