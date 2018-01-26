/*VCompania.cpp
 *
 * Author:Pedro Gabriel Leal
 */

#include "VCompania.h"

VCompania::VCompania(){}
void VCompania::ImprimirCompania(float montoasegvida,float montoasegauto,
        	                     string tipopolizamayor,float porcpoliza50y70,
                                 float porcpolizarechazvida,float porcpolizarechazauto)
{
     Limpiar();
     cout<<endl<<endl;
     ImprimirEncabezado("\n\n\n\t\t\tInformacion De La Compa�ia:",
                        "\t\t\t=========== == == =========");
     

     ImprimirNroDecimal ("\n\n\tMonto Total asegurado de las polizas de vida: ",montoasegvida);
     ImprimirNroDecimal ("\n\n\tMonto Total asegurado de las polizas de auto: ",montoasegauto);

     ImprimirString("\n\n\tTipo De Poliza Mas Vendida : Vida o Automovil? : ",tipopolizamayor);

     ImprimirNroDecimal ("\n\n\tPorcentaje De Polizas de vida Con Asegurados Entre 50 y 70 a�os: ",porcpoliza50y70) ;
     cout<<"%"<<endl;

     ImprimirNroDecimal ("\n\n\tPorcentaje De Polizas de vida Rechazadas: ",porcpolizarechazvida) ;
     cout<<"%"<<endl;

     ImprimirNroDecimal ("\n\n\tPorcentaje De Polizas de auto Rechazadas: ",porcpolizarechazauto) ;
     cout<<"%"<<endl<<endl;

     Pausa();

}






