/*
 * MPeluqueria.cpp
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */

#include "MPeluqueria.h"
MPeluqueria::MPeluqueria(){}
// Asigna un elemento  en una casilla del vector de peluqueras
void MPeluqueria::SetPeluquera(MPeluquera mp, int pos)
{   vpeluq[pos] = mp; }

// Extrae un elemento (una casilla) del vector peluquera
MPeluquera MPeluqueria::GetPeluquera(int pos)
{  return vpeluq[pos]; }

// Incluye un nuevo elemento al final en el vector peluquera
void MPeluqueria::IncluirUnaPeluquera(MPeluquera mp)
{    vpeluq.push_back(mp); }

// Indica la cantidad de elementos (casillas) que tiene el vector peluquera
int MPeluqueria::CantPeluqueras()
{   return vpeluq.size(); }

// Busca una peluquera dentro del vector, con el dato cedula
int MPeluqueria::BuscarCedPeluquera(string ci)
{ for (int i = 0 ; i < CantPeluqueras(); ++i)
	  if (vpeluq[i].GetCedula() == ci)
		 return i;
  return -1;
}
// Asigna un elemento en una casilla del vector de servicios
void MPeluqueria::SetServicio(MArticulo mserv, int pos)
{    vtiposerv[pos] = mserv; }

// Extrae un elemento (una casilla) del vector de servicios
MArticulo MPeluqueria::GetServicio(int pos)
{    return vtiposerv[pos]; }

// Incluye un nuevo elemento al final en el vector de servicios
void MPeluqueria::IncluirUnServicio(MArticulo mserv)
{    vtiposerv.push_back(mserv); }

// Indica la cantidad de elementos (casillas) que tiene el vector tipos de servicio
int MPeluqueria::CantServicios()
{    return vtiposerv.size(); }

// Retorna el total de ingresos de la semana generados por todas las peluqueras
float MPeluqueria::TotalIngresosSemanal()
{ float totalgeneral = 0;
  for (int d=0; d < CantPeluqueras(); ++d)
	  totalgeneral += vpeluq[d].TotalBsSemana();
  return totalgeneral;
}

// Retorna el nombre del d�a de la semana
string MPeluqueria::NombreDia(int dia)
{ switch (dia)
   {  case 1 : return "lunes";
      case 2 : return "martes";
      case 3 : return "miercoles";
      case 4 : return "jueves";
      case 5 : return "viernes";
      case 6 : return "sabado";
   }
}

/* Retorna un vector con los nombres de los dias de la semana.
   Este metodo es necesario para imprimir el reporte solicitado por la peluqueria */
vector<string> MPeluqueria::GenerarVectorNombresDias()
{  vector<string> auxnomdias;
	for (int i=1; i < 7; ++i)
	    auxnomdias.push_back(NombreDia(i));
	return auxnomdias;
}

// Actualiza la peluquera de acuerdo al servicio prestado al cliente
void MPeluqueria::ProcesarServicioCliente(MServPrest msp, int pos_peluquera)
{
  vpeluq[pos_peluquera].ActualizarBs(msp, vtiposerv[msp.GetTipo()-1]);
}
