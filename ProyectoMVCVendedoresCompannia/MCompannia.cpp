/*
 * Author: Pedro Gabriel Leal
 *
 */

#include "MCompannia.h"

MCompannia::MCompannia()
{
   monto_total_nomina = 0;
}

void MCompannia::ProcesarVendedor (MVendedor mv)
{
	/* El metodo ProcesarClasePeque�a (ProcesarVendedor) se encarga de incrementar
	   acumuladores, contadores, mayor y menor,
	   en nuestro caso, solo acumularemos, pero lo que vamos a acumular es el sueldo neto del vendedor,
	   y dicho c�lculo se hizo en MVendedor, entonces, recibira como par�metro:
	   La INSTANCIA DE LA CLASE MVENDEDOR(mv) y como el metodo que cAlcula el sueldo del vEndedor
	   es un FUNCION TIPO, entonces la sint�xis a emplear ser�:INSTANCIA.METODO()*/
       monto_total_nomina += mv.CalcSueldoNeto();
}

float MCompannia::GetMontoNomina()
{
   return monto_total_nomina;
}
