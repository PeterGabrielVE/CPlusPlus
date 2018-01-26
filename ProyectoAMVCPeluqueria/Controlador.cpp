/*
 * Controlador.cpp
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */

#include "Controlador.h"
Controlador::Controlador() {chequeopcion = false;}

/* Lee por teclado los datos que corresponden a los servicios que ofrece la peluqueria,
   los mismos son guardados en un vector con subindice con significado   */
void Controlador::CargarDatosServicios()
{  string descrip;
   float precio;
   MArticulo mserv;

    vp.Limpiar();
    vp.ImprimirEncabezado("\n\n   Datos de los Servicios",
   	                 		  "   ======================");
	for (int s = 0; s < 8; s++)
	{	vp.ImprimirNro("\n   Tipo de Servicio: ", s + 1);
		descrip = vp.LeerString("\n\n   Descripcion : ");
		precio = vp.LeerValidarNroDecimal("\n   Precio : ",40,450);
		mserv.SetDesc(descrip);
		mserv.SetPvp(precio);
		mp.IncluirUnServicio(mserv);
		vp.Limpiar();
	} // for
}

/* Lee los datos b�sicos de una pelquera (cedula y nombre) e inmediatamente se
   leen todos los servicios (trabajos) realizados por la peluquera  */
void Controlador::ProcesarPeluqueras()
{	string ced,nombre;
	int dia, tiposerv, respserv,resppelu, pospeluq;
	MServPrest msp;
	MPeluquera mpeluq;
	vp.Limpiar();

	if ((mp.CantServicios()) == 0)
	   {vp.Limpiar();
		vp.ImprimirMensaje("\n\n NO existen los datos de servicios \n");
		vp.Pausa();
		return;
	}
	do  // ciclo que controla las peluqueras
	{	vp.Limpiar();
		//bloque de instrucciones que permiten leer los datos de identificaci�n de la peluquera
		vp.ImprimirEncabezado("\n\n Datos de la Peluquera"," ====================");
		ced = vp.LeerString("\n Cedula: ");
		pospeluq = mp.BuscarCedPeluquera(ced);
		if (pospeluq != -1)
		   {vp.Limpiar();
			vp.ImprimirMensaje("\n\n ERROR: la peluquera ya esta registrada \n\n");
			vp.Pausa();
			}
		else { nombre = vp.LeerString("\n Nombre: ");
		       mpeluq.SetCedula(ced);
		       mpeluq.SetNombre(nombre);
		       // Coloca en cero, las 6 casillas del vector que contendr� los bs de cada dia de la semana
               mpeluq.InicializarBsDiarios();
               mp.IncluirUnaPeluquera(mpeluq);
               respserv = vp.LeerValidarNro("\n   Hay servicios prestados a clientes? 1.Si 2.No : ",1, 2);

               // Ciclo que procesa los trabajos realizados por la peluquera
               while (respserv == 1)
               {   vp.Limpiar();
               //bloque de instrucciones que permiten leer los datos de los trabajos realizados por la peluquera
                  vp.ImprimirEncabezado("\n\n Datos de servicios prestado a clientes",
            		                       " ======================================");
                   dia = vp.LeerValidarNro("\n  Dia (1.Lunes..6.Sabado): ", 1,6);
                   tiposerv = vp.LeerValidarNro("\n  Tipo de servicio ( 1 al 8): ",1,8);
            	   msp.SetDia(dia);
            	   msp.SetTipo(tiposerv);
            	   /* La peluquera que se acaba de incluir, se encuentra en la �ltima casilla del vector,
            	      la cual se corresponde con mp.CantPeluqueras() -1 */
            	   mp.ProcesarServicioCliente(msp,mp.CantPeluqueras()-1); // Se actualiza los bs en el d�a que corresponde a la peluquera
                   respserv = vp.LeerValidarNro("\n   Hay servicios prestados a clientes? 1.Si 2.No : ",1, 2);
               };
		     }; // else
         resppelu = vp.LeerValidarNro("\n   Hay mas peluqueras? 1.Si 2.No : ",1, 2);
		} while (resppelu == 1);
	chequeopcion = true;
}

/* Dada la cedula de una peluquera y un dia de la semana, muestra la informaci�n
   de la peluquera  */
void Controlador::ConsultaPeluquera()
{	vp.Limpiar();
	if (!chequeopcion)
		   {vp.ImprimirMensaje("\n No hay datos para la consulta \n");
		   vp.Pausa();
		   return;
		   }
	string ced = vp.LeerString("\n Cedula: ");
	int pospeluq = mp.BuscarCedPeluquera(ced);
	if (pospeluq == -1)
	   {vp.ImprimirMensaje("\n Peluquera No existe...");
		vp.Pausa();
		return;
	   }
	int dia = vp.LeerValidarNro("\n  Dia (1.Lunes..6.Sabado): ", 1,6);
	MPeluquera mpeluq = mp.GetPeluquera(pospeluq);
	vp.ImprimirConsulta(mpeluq.GetNombre(),mp.NombreDia(dia),mpeluq.GetBsDia(dia-1));
}

// Genera el reporte solicitado por la peluqueria
void Controlador :: ReportePeluqueria()
{   // Chequeo de que hayan datos para generar el reporte
    vp.Limpiar();
    if (!chequeopcion)
 	   {vp.ImprimirMensaje("\n No hay datos para el reporte \n");
        vp.Pausa();
        return;
       }
    MPeluquera mpeluq;
	vp.ImprimirEncabezado("\n\n REPORTE PELUQUERIA\n"," ==================\n");
    for (int i=0; i<mp.CantPeluqueras(); ++i)
     {  mpeluq = mp.GetPeluquera(i);
    	vp.ImprimirPeluquera(mpeluq.GetCedula(),mpeluq.GetNombre(),
    		                  mp.GenerarVectorNombresDias(),
                              mpeluq.GetBsCadaDia(),mpeluq.TotalBsSemana());
     }
    vp.ImprimirLineasBlanco(1);
    vp.ImprimirNroDecimal("\n\n  Total Ingresos semanales en la Peluqueria: ",mp.TotalIngresosSemanal());
    vp.ImprimirLineasBlanco(1);
    vp.Pausa();
}
