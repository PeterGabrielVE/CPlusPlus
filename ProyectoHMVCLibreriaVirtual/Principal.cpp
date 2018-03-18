/*
 * Principal.cpp
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 *
 *   PLANTEAMIENTO:
Una librer�a virtual, que funciona como una tienda que vende sus libros en l�nea,
 haciendo uso de Internet, requiere de un programa que le permita controlar
 las ventas que se realizan. Se sabe que la tienda ofrece b�sicamente dos tipos de Libros
 (Libros Digitales y Libros Tradicionales). Ambos tipos de libros se solicitan
 directamente desde la p�gina web de la tienda, pero la diferencia entre ellos
 est� en la entrega de los mismos; de tal manera que los libros tradicionales
 se env�an al lugar que indique el cliente en el formato tradicional (libro f�sico),
  en cambio los libros digitales se descargan directamente por Internet.

Independientemente sea el tipo de libro,
se registra sus datos b�sicos de c�digo, t�tulo, autor,
y el costo que debe cancelar el due�o de la tienda.

El precio de venta al p�blico, es el dinero que debe cancelar el cliente por la compra del libro
y el costo del libro es el dinero que debe cancelar
 el due�o de la librer�a virtual para adquirirlo. Por supuesto,
 el precio de venta debe ser mayor que el costo del libro.

Si el libro es Tradicional, se registra tambi�n PRECIO DE VENTA AL PUBLICO (PVP),
la direcci�n de env�o, el peso del libro y el tipo de compra con respecto a la ubicaci�n del mismo
(1.- Nacional o 2.- Internacional).

Pero si es Digital, se registra la cantidad de megabytes que ocupa.

 Se sabe adem�s, que seg�n el tipo de Libro existen costos adicionales
 que se deben cancelar, algunos le corresponden al due�o de la tienda y otros al cliente.

Para los libros Digitales se adiciona al costo un monto por hosting
 (este lo debe cancelar el due�o de la tienda) de acuerdo a los megabytes (MB)
  que ocupe el libro. Si ocupa m�s de 1500 MB se cancelan EL 1% DEL COSTO �
  EL 0.5% DEL COSTO en caso contrario.
  La tienda define que el l�mite m�ximo de megabytes para un libro es de 4000.
  ademas el PVP es igual al costo neto del libro  + 30% del costo neto.

Para los libros Tradicionales se agregan al costo Bs. 250
por flete que debe cancelar el cliente, en el caso que el libro pese menos de 1 Kg
o Bs. 500 en el caso que pese m�s de eso.

El peso m�ximo por libro es de 3 Kg.

Por otro lado, si el tipo de compra del libro fue Internacional
 el cliente debe pagar adicional el 2% del PVP por concepto de Nacionalizaci�n.

Todo esto con la finalidad de saber, por cada libro identificado por su c�digo
cual es el costo neto y el precio neto.

A nivel de la tienda, es importante conocer la ganancia obtenida por todos
los libros vendidos, el porcentaje de ventas internacionales y qu� tipo de libros
tiene m�s venta los digitales � los tradicionales
Para el c�lculo de la ganancia considere el costo neto del libro
y el precio de venta al p�blico (pvp)
 *
 *
 *ENTRADA

DATOS BASICOS
- c�digo
- t�tulo
- autor,
- costo


Datos LIBROS DIGITALES

- cantidad de megabytes (Maximo 4000 mb)


Datos LIBROS TRADICIONALES
- PRECIO DE VENTA AL PUBLICO (PVP),
- direcci�n de env�o
- peso del libro(Maximo 3 Kg)
- tipo de compra (1.- Nacional o 2.- Internacional).


  SALIDA
     Por Libro:
      - c�digo
      - costo neto
      - precio neto

     Por Tienda
      - Ganancia obtenida por todos los libros vendidos,
      - Porcentaje de ventas internacionales
      - Qu� tipo de libros tiene m�s venta, �los digitales � los tradicionales?



CONSIDERACIONES

1) Comunes


2) MDigital
     2.1 CalcRecargoHosting()
           Cantmegas    RecargoHosting (sobre el costo)
             > 1500         1% (0.01)
             <=1500         0.5% (0.005)


     2.2 CalcCostoNeto()
            costoneto= Costo +  CalcRecargoHosting()

     2.3 CalcPvp()
            pvp= CostoNeto + (0.30* CostoNeto)

     2.4. CalcPrecioNeto
            precioneto= Pvp

     2.5. CalcGanancia
            Ganancia = Pvp - Costo neto


3)    MTradicional
       3.1 CalcMontoFlete()
{        peso       flete
          <=1        250
	       >1        500;

       3.2 CalcRecargoPvp()
         tipocompra     Recargo(sobre el pvp)
            2            0.02;

       3.3 CalcPrecioNeto()
          precioneto = Pvp  + RecargoPvp + montoFlete

       3.4 CalcCostoNeto()
          costoneto = costo

       3.5 CalcGanancia
            Ganancia = Pvp - Costo neto

4)  Tienda

      Atributos:
       - acumulador de ganancia
       - contador ventas internacionales;
       - contador libros tradicionales internacionales
       - contador libros tradicionales nacionales

      Metodos
       - ProcesarDigitales
       - ProcesarTradicionales


* REQUERIMIENTOS
Req 1) MENOR COSTO NETO DE LIBROS DIGITALES.
Req 2) MENOR COSTO NETO ENTRE TODOS LOS LIBROS.
Req 3) PROMEDIO DEL PRECIO NETO DE LOS LIBROS TRADICIONALES
CON MAS DEL 40% DE GANANCIA CON RESPECTO AL COSTO NETO.
Req 4) TITULO Y AUTOR DEL LIBRO DIGITAL MAS CARO INDICANDO SU PRECIO.


 */


#include "Controlador.h"
#include "VGeneral.h"

int main()
{
	Controlador c;
	c.ProcesarLibros();
	c.Estadisticas();
    return 0;
}
