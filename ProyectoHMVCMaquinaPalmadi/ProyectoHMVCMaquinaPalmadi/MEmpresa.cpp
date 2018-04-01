/*
 * MEmpresa.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "MEmpresa.h"

MEmpresa::MEmpresa() {

}

void MEmpresa::SetContE(int ce)
{
    contE = ce;
}

void MEmpresa::SetContL(int cl)
{
    contL = cl;
}

void MEmpresa::SetContM(int cm)
{
    contM = cm;
}


int MEmpresa::GetContE()
{
    return contE;
}

int MEmpresa::GetContL()
{
    return contL;
}

int MEmpresa::GetContM()
{
    return contM;
}

void MEmpresa::ProcesarMartillo(MMartillo mm)
{
	++contM;
}

void MEmpresa::ProcesarEsmeriladora(MEsmeriladora me)
{
	++contE;
}

void MEmpresa::ProcesarLijadora(MLijadora ml)
{
	++contL;
}



string MEmpresa::DeterminarMayorTipo()
{

  /*
   *Aqui calculamos cual de los tres es el contador con mayor cantidad
   * para ello, asignmos al mayor el primer contador -> contM,
   * luego comparamos y chequeamos si el segundo contador es mayor que el mayor asignado,
   * de ser asi, le asignamos dicho contador al mayor,
   * y asi hacemos con el tercer contador,
   * comparamos y chequeamos si el tercer contador es mayor que el mayor asignado,
   * de ser asi, le asignamos dicho contador al mayor,
   */

  int mayor= contM;
  if (contE > mayor)
	  mayor= contE;
  if (contL > mayor)
  	  mayor= contL;

	/*
	 * aqui ya tenemos calculado cual o cuales contadorer es el mayor,
	 * pero la pregunta no es determinar el mayor,
	 * sino indicar cual tipo de herramienta es el mayor,
	 * por ello, aqui seguidamente determinaremos
	 * a que tipo de herramienta corresponde ese mayor
	 */
  string tipomayor="";
  if(contM ==mayor)
    tipomayor="Martillo Demoledor de Concreto ";

  if(contE ==mayor)
	  tipomayor= tipomayor + " Esmeriladora de Hierro ";
  if(contL ==mayor)
	 tipomayor= tipomayor + " Lijadora de Madera";

  return tipomayor;
}



