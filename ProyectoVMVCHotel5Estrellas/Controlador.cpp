/*
 *  Controlador.cpp
 *
 *  Created on: 02/02/2014
 *      Author: Pedro Gabriel Leal
 */


#include "Controlador.h"

Controlador::Controlador(){}

void Controlador::ProcesarDia()
{
             int tipos,resp;
             float monto;

             MServicio ms;
             MDia md;
             for(int i=0;i<7;++i)
               {
            	    vh.Limpiar();
                    md.InicializarVector();
                    //INCLUIMOS EL DIA EN EL VECTOR DE DIAS EN MHOTEL ANTES DE PROCESARLE LOS SERVICIOS
                      mh.IncluirDia(md);
                     vh.ImprimirNro("\n\n\t\t\tConsumos del dia nro ", i+1);

                  	/*el enunciado dice:
                  	 *
                  	 No se sabe cu�ntos servicios hay por d�a.
                  	 En un d�a pueden haber varios servicios del mismo tipo,
                     pero no se encuentran clasificados (que significa? pues q los sertvicios no tienen ningun orden para ejecutarse,
                     primero se puede procesar el servicio 3, despues el 1, despues el 4, asi, luego otra vez el 3,..asi-..),
                     LA INFORMACION VIENE CLASIFICADA POR DIA, PERO NO POR LOS SERVICIOS DE ESE DIA. OK!!!
                  	 como ya se mencion�, No necesariamente para en un d�a,hay los 9 tipos de servicios./
                  	 ESO ES PURA BOBADAS...NO LE PAREN..ES PARA ENREDAR!!
                  	 ESO LO Q SIGNIFICA ES Q POR CADA DIA VAS A HACER UN DO - WHILE
                  	 Y ALLI VAS A PROCESAR SERVICIOS, SEAN DEL MISMO TIPO,O NO,
                  	 PUEDEN HABER VARIOS SERVICIOS DEL MISMMO TIPO EN UN DIA..
                  	 TODO ESO LO GARANTIZA ESTE CICLO DO WHILE...
                  	 EL USUARIO VERA, SI PROCESA VARIOS SERVICIOS DEL MISMO TIPO O NO,
                  	 Y VERA SI EN UN DIA SOLO procesa  UN SOLO TIPO DE SERVICIO,
                  	 O DOS TIPOS DE SERVICIOS O  3...whatever..
                  	 ASI Q NI PENDIENTE CON ESSSOOOO..OK */

                     do
                     {
                       tipos=vh.LeerValidarNro("\n\nTipo consumo: \n(1)Habitacion \n(2)Desayunos \n(3)Almuerzos \n(4)Cenas \n(5)Busines centre \n(6)Salones \n(7)Casinos \n(8)Spa \n(9)Alquiler Vehiculo  \nSeleccione[1..9]:",1,9);
                       monto=vh.LeerValidarNroDecimalValorInicial("\nMonto del Consumo: ",0);
                       ms.SetTipo(tipos);
                       ms.SetMonto(monto);

                       /* Debido a que ANTES DE PROCESAR LOS SERVICIOS, YA incluimos el dia en el vector de dias, el size del vector
                        * se incrementa, es decir;el primer dia q incluimos se almacena en la posicion cero (size) del vector de dias,
                        * y el size se incrementa a 1, asi sucesivamente, lo cual quiere decir que si por ejemplo
                        * consideramos ese caso, �en q posicion del vector de dia se almacen�?- pues en la cero, y el size tiene 1.
                        * Y COMO NECESITAMOS ENVIAR como parametro LA POSICION DONDE ESTA ESE DIA EN EL VECTOR DE DIaS,
                          NO PODEMOS ENVIAr MH.CANTIDADDIAS() PUESTO Que EL SIZE TIENE 1, DE ALLI Q TENEMOS Q RESTARLE 1,
                        * PARA Q SE UBIQUE EXACTAMENTE EN LA POSICION ANTERIOR. POR ESO AL METODO PROCESAR, LE ENVIAMOS
                        * mh.CantidadDias()-1
                        *
                        * ESTO PASA SOLO CUANDO HAY DOBLE CICLO..ESCENARIO VECTOR DINAMICO CON INFORMACION CLASIFICADA
                        * ES IDENTICO A LO Q HICIMOS CON EL PROGRAMA DE LAS PELUQUERAS..*****
                        *
                        */
                       mh.Procesar(mh.CantidadDias()-1,ms);

                       resp=vh.LeerValidarNro("\nDesea procesar otro consumo del dia (1)Si/(2)No?: ",1,2);
                     }
                     while(resp==1);
               }     
          
}
void Controlador::Reporte()
{
	 if (mh.CantidadDias()==0)
			 {
				 vh.ImprimirMensaje("\n No se han procesado servicios \n");
				 vh.Pausa();
				 return;
			 }


          vector<float> vauxingresos;

          vector<string> vauxservicios;

          for(int dia=0;dia<7;++dia)

        	  vauxingresos.push_back(mh.GetDia(dia).CalcTotIngresoDia());

          for(int serv=0;serv<9; ++serv)
        	  vauxservicios.push_back(mh.DetServicioEnLetras(serv+1));


          vh.ImprimirReporte(mh.CalcVecdias(),
        		             vauxingresos,
                             mh.CalcTotIngresoSem(),
                             vauxservicios,
                             mh.DetVecPorcServ());


}

void Controlador::ConsultarServicio()
{
     int tipos,resp;
     string servicio;
     if (mh.CantidadDias()==0)
		 {
			 vh.ImprimirMensaje("\n No se han procesado servicios \n");
			 vh.Pausa();
			 return;
		 }
	do {
		 vh.Limpiar();
		 vh.ImprimirEncabezado("\n\n      Consultar Servicios  ",
				                   "      __________________");
		 tipos=vh.LeerValidarNro("\n\nTipo consumo: \n(1)Habitacion \n(2)Desayunos \n(3)Almuerzos \n(4)Cenas \n(5)Busines centre \n(6)Salones \n(7)Casinos \n(8)Spa \n(9)Alquiler Vehiculo  \nSeleccione[1..9]:",1,9);
         servicio=mh.DetServicioEnLetras(tipos) ;
         vh.Limpiar();
         vh.ImprimirEncabezado("\n\n      Consultar Servicios  ",
         				                   "      __________________");
         vh.ImprimirString("\n\tServicio: ",servicio);
		 vh.ImprimirConsulta(mh.DetVecDiasSinIngresos(tipos));
		 resp=vh.LeerValidarNro("Desea realizar otra consulta(si=1/no=2)? ",1,2);
	   }while(resp==1);
}




