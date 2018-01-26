/*
 * VAsegurado.cpp
 * Author:Pedro Gabriel Leal
 */
#include "VAsegurado.h"

VAsegurado::VAsegurado(){}
void VAsegurado::ImprimirAsegurado(string ced, string nom, string tipopoliza, float costopoliza)
{
     Limpiar();
     ImprimirEncabezado("\n\tInformacion Del Asegurado",
                        "\t=========================");
     ImprimirString("\n\tCedula: ", ced);
     ImprimirString("\n\tNombre: ",nom);
     if (costopoliza== -1)
    	 ImprimirMensaje("\n\tNo procede la Poliza ");
     else
     {
      ImprimirString("\n\tTipo De Poliza: ",tipopoliza);
      ImprimirNroDecimal ("\n\tcosto Poliza: ",costopoliza);
     }
     cout<<endl<<endl;
     Pausa();
}

