/*
 *
 *

 * EJERCICIO #8 GUIA DE EJERCICIO
 * Author: Pedro Gabriel Leal
Cada vez que se atiende la compra de un cliente, se recopilan los siguientes datos: c�dula, nombre
del cliente y por cada producto comprado: nombre, tipo  (medicina o miscel�neos), PVP y cantidad
comprada.
Actualmente la farmacia les ofrece a sus clientes los siguientes descuentos: en los productos
miscel�neos, un porcentaje de descuento de 7% sobre el PVP y en las medicinas un descuento del
40% sobre el PVP.
La farmacia  necesita entregarle a cada cliente la siguiente informaci�n: C�dula, Nombre,
Direcci�n, Monto Bruto, Monto total descuento, Monto IVA (12% del monto total de los micelaneos menos
el descuento de los mismos) y Monto Neto.
Nota: Las medicinas no cancelan IVA.

En el principal se crea un objeto de la clase Controlador

Oberve que por la farmacia no nos piden ninguan salida,
eso garantiza que no haya menu...
porq solo habra un solo metodo en el controaldor ; ProcesarCompraClientes/

Analisis

  Datos comunes:
    -nombre del producto
    -tipo producto
    -precio
    -cantidad

  Datos Por Medicina
    no hay

  Datos Por Miscelaneos
   datos propios: no hay



  Consideraciones:
   1)Comunes:
     monto compra= cantidad*pvp

  2)Consideraciones  de la herencia
    2.1) Por Medicina
           - Descuento del 40% sobre el monto comprado
    2.2) Por Miscelaneos
           - Descunto del 7% sobre el monto comprado



 Analisis de la clase MCliente:

   -Monto bruto = monto acumulado de medicinas + monto acumulado de miscelaneos

   -Total descuentos = monto acumulado de descto por medicina +  monto acumulado de descto por micelaneos

   -Monto IVA =12% del monto total de los miscelaneos menos
   el descuento de Miscelaneos

   -Monto neto = Mon tototal Bruto- Monto total Descuentos +  Monto Iva;


 salidas:
   Por la clase asociada con la herencia; es decir;
    por producto (Medicina o miscelaneos) ->no hay salida

   Por la clase Mediana(MCliente) ->
    C�dula,
    Nombre,
    Monto Bruto,
    Monto total descuento,
    Monto IVA (12% del monto total de los miscelaneos menos
    el descuento de los mismos)
    Monto Neto.
    */


#include "Controlador.h"

int main(){

   Controlador c;

   c.ProcesarCompraClientes();

   return 0;
}
