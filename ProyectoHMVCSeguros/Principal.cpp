/*
 * PRINCIPAL.CPP

    Author:Pedro Gabriel Leal
 *  	Una compa��a de seguros ofrece dos tipos de p�liza: Vida y Autom�vil.
      Cualquiera sea el seguro a adquirir es necesario registrar por cada asegurado:
       C�dula, nombre, direcci�n, tel�fono, cantidad asegurada,
       porcentaje que le ser� aplicado a la cantidad asegurada para determinar el costo de la p�liza y fecha del seguro.

      Por otro lado para la p�liza de vida se debe registrar la edad del asegurado y nombre del beneficiario de la p�liza.
      Ha de tener presente que el porcentaje original a aplicar a la cantidad asegurada para determinar
      el costo de la p�liza, se incrementara en un punto y medio (3.5%),
      s� la edad del asegurado esta entre de 50  y 80 a�os, en el caso de que tenga menos de 50 a�os
      el porcentaje no se modifica. Las personas con m�s de 80 a�os NO son aseguradas.

      Para la p�liza de autom�vil se debe registrar la placa, modelo, marca y a�o del autom�vil.
      Ha de tener presente que el porcentaje original a aplicar a la cantidad asegurada para determinar
      el costo de la p�liza, disminuir� en un punto para autom�viles cuyo a�o coincida con el a�o en curso
      (el a�o en curso es un dato de entrada para el objeto).
      NO se aseguran modelos de autom�vil con a�o inferior a 1998.

      Cualquiera sea el tipo de p�liza y en el caso de que pueda proceder el seguro,
      seg�n las condiciones que deben cumplirse, se debe imprimir:
      C�dula, nombre, tipo de p�liza adquirida y costo de la p�liza.
      Por otra parte, la compa��a de seguros quiere conocer,
      el monto total asegurado por cada una de las p�lizas (vida y autom�vil),
      el tipo de p�lizas m�s vendida,
      solo para las p�lizas de vida se necesita conocer:
      (a) Porcentaje de p�lizas donde la edad del asegurado se encontraba entre 50 y 70 a�os
      y el (b) Porcentaje de p�lizas que fueron rechazadas.
      As� mismo para las p�lizas de autom�vil, se necesita saber el porcentaje de p�lizas que fueron rechazadas.

 *
 */


#include "Controlador.h"
int main()
{
	Controlador c;
	c.ProcesarPolizas();
	c.ReporteCompSeguros();
    return 0;
}
