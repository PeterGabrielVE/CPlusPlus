/*
 * Author: Pedro Gabriel Leal
 */

#include "VCliente.h"
//Constructor
VCliente :: VCliente(){}
//M�todo que imprime la informaci�n solicitada

void VCliente :: ImprimirCliente(string c, string n, float mb, float md, float mi, float mt)
{
     Limpiar();
     ImprimirEncabezado("\n\tINFORMACION DE LA COMPRA",
                           "\t========================");
     ImprimirString("\n\tCedula :  ",c);

     ImprimirString("\n\tNombre :  ", n);

     ImprimirNroDecimal("\n\tMonto total bruto : ",mb);

     ImprimirNroDecimal("\n\tMonto total de descuento : ",md);

     ImprimirNroDecimal("\n\tMonto iva : " ,mi);

     ImprimirNroDecimal("\n\tMonto total a cancelar : ",mt);
    
     ImprimirLineasBlanco(3);

     Pausa();
}
