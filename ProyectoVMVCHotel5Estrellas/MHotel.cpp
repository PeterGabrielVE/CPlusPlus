/*
 *  MHotel.cpp
 *
 *  Created on: 02/02/2014
 *      Author: Pedro Gabriel Leal
 */



#include "MHotel.h"

MHotel::MHotel(){}

void MHotel::IncluirDia(MDia md)
{
  vecdias.push_back(md);
}

int MHotel::CantidadDias()
{
  return vecdias.size();
}

void MHotel::SetDia(MDia md, int posi)
{
  vecdias[posi]=md;
}

MDia MHotel::GetDia(int i)
{
  return vecdias[i];
}

float MHotel::CalcTotIngresoSem()
{
  float ac=0;
  for (int i=0; i<7;++i)
   ac+=vecdias[i].CalcTotIngresoDia ();
  return ac;
}

vector<float> MHotel::DetVecPorcServ()
{
  float ac,porc;
  vector<float> vecporc;

  for (int serv=0;serv<9;++serv)
    {
      ac=0;
      for (int dia=0;dia<CantidadDias();++dia)
    	 ac+=vecdias[dia].GetServicio(serv);
      porc =(ac*100)/ CalcTotIngresoSem();
      vecporc.push_back(porc);
    }
  return vecporc;
}

 vector<string> MHotel::DetVecDiasSinIngresos(int serv)
 {
	 string diaenletras;
	 vector<string> vecdiassiningresos;
	 for (int dia=0;dia<CantidadDias();++dia)
	     if(vecdias[dia].GetServicio(serv-1)==0)
	     {
	       diaenletras= DetDiaEnLetras(dia+1);
	       vecdiassiningresos.push_back(diaenletras);
	     }
     return vecdiassiningresos;
 }


string MHotel::DetDiaEnLetras(int d)
{
	string dia;
  switch(d)
   {
    case 1: dia="Lunes";
  	break;
    case 2: dia="Martes";
  	break;
	case 3: dia="Miercoles";
	break;
	case 4: dia="Jueves";
	break;
	case 5: dia="Viernes";
	break;
	case 6: dia="Sabado";
	break;
	case 7: dia="Domingo";
	break;
   }
  return dia;
}

void MHotel::Procesar(int posi, MServicio ms) {
	vecdias[posi].Actualizar(ms);
}

vector<string> MHotel::CalcVecdias() {
	vector<string> vecdias;
   for (int d=0; d<7; ++d)
     vecdias.push_back(DetDiaEnLetras(d+1));
   return vecdias;

}


string MHotel::DetServicioEnLetras(int serv)

{
  string servicio;
    switch(serv)
    {
      case 1: servicio="Habitacion";
      break;
      case 2: servicio="Desayunos";
      break;
      case 3: servicio="Almuerzos";
      break;
      case 4: servicio="Cenas";
      break;
      case 5: servicio="Busines Centre";
      break;
      case 6: servicio="Salones";
      break;
      case 7: servicio="Casinos";
      break;
      case 8: servicio="Salones";
      break;
      case 9: servicio="Alquiler Vehiculo";
      break;
     }
  return servicio;
}

