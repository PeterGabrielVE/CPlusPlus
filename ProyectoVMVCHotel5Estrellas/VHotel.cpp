/*
 *  VHotel.cpp
 *
 *  Created on: 02/02/2014
 *      Author: Pedro Gabriel Leal
 */

#include "VHotel.h"

VHotel::VHotel(){}

void VHotel::ImprimirReporte( vector <string> vauxdias,
		                      vector<float> vauxingresos,
                              float totIngresosem,
                              vector <string> vauxservicios,
                              vector<float> vauxporc)
                            
{
  Limpiar();
  ImprimirLineasBlanco(2);
  ImprimirStringJustificado("Hotel las Cinco Estrellas",53);
  ImprimirLineasBlanco(1);
  ImprimirStringJustificado("_________________________",53);
  ImprimirLineasBlanco(2);
  ImprimirStringJustificado("Lista de Ingresos de la Semana",55);
  ImprimirLineasBlanco(1);
  ImprimirStringJustificado("______________________________",55);
  ImprimirLineasBlanco(2);
  ImprimirStringJustificado("Dia",25);
  ImprimirStringJustificado("Total Ingresos",33);
  ImprimirLineasBlanco(1);
  for(int d=0; d<7; ++d)
   {
    	ImprimirStringJustificado(vauxdias[d],25 );
    	ImprimirNroDecimalJustificado(vauxingresos[d],33);
    	ImprimirLineasBlanco(1);
   }
    ImprimirLineasBlanco(2);
    ImprimirNroDecimal("\n\t\tTotal Ingresos de la Semana: ",totIngresosem );
    ImprimirMensaje("\n                  ");
    Pausa();

     ImprimirLineasBlanco(2);
     ImprimirMensaje("\n\n   Porcentaje que representan los ingresos correspondientes a: \n\n");
     for (unsigned int j=0;j<vauxporc.size();++j)
     {
      ImprimirStringJustificado(vauxservicios[j],20);
      ImprimirNroDecimalJustificado(vauxporc[j],30);
      ImprimirMensaje("%");
      ImprimirLineasBlanco(1);
     }

   ImprimirMensaje("\n                  ");
   Pausa();
}


void VHotel::ImprimirConsulta(vector<string> vauxdiasiningresos)

{
	ImprimirLineasBlanco(1);
	ImprimirMensaje("\tDias en los que no hubo Ingresos\n");
	if(vauxdiasiningresos.size()==0)
		ImprimirStringJustificado(" EN TODOS LOS DIAS DE LA SEMANA SE REGISTRARON INGRESOS",66);
	    for (unsigned int i=0;i<vauxdiasiningresos.size();++i)
	    {
	    	ImprimirStringJustificado(vauxdiasiningresos[i],25);
	    	ImprimirLineasBlanco(1);
	    }

	    ImprimirMensaje("\n\n\n\n        ");
	    Pausa();
}
