/*
 * MMecanico.cpp
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#include "MMecanico.h"

// Constructor que inicializa el atributo ac_montocomsion
MMecanico::MMecanico()
{
   acmonto_comision = 0;
}
void MMecanico::SetCedula(string c)
{
   cedula = c;
}
void MMecanico::SetNombre(string n)
{
   nombre = n;
}
void MMecanico::SetCantRepara(int c)
{
   cant_repara = c;
}
void MMecanico::SetAcMontoComision(float mc)
{
   acmonto_comision = mc;
}
string MMecanico::GetCedula()
{
   return cedula;
}
string MMecanico::GetNombre()
{
   return nombre;
}
int MMecanico::GetCantRepara()
{
   return cant_repara;
}
float MMecanico::GetAcMontoComision()
{
   return acmonto_comision;
}
void MMecanico::setMayorCo(float my)
{
	mayor=my;
}

float MMecanico::GetMayorCo()
{
	return mayor;
}

/* M�todo que actualiza el atributo ac_montocomision
   con la reparaci�n (Relaci�n Uso con MRepara) */
void MMecanico::ProcesarReparacion(MRepara reparacion)
{
     acmonto_comision += reparacion.ComisionReparacion();
     if(reparacion.ComisionReparacion()>mayor)
    	 mayor=reparacion.ComisionReparacion();
}


