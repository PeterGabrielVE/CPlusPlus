/*
 * Controlador.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "Controlador.h"

Controlador::Controlador()
{
	// TODO Auto-generated constructor stub

}

void Controlador :: ProcesarHotel()
{

	  MCliente MC;
	  MHotel MH;
	  VCliente VC;
	  VHotel VH;

	  long c;
      int cd, th, resp;


     do
     {
            system("cls");
            cout<<"\t\t\tDatos del cliente\n";
            cout<<"\t\t\t=================\n\n";

            c = VC.LeerCedula();
            th = VC.LeerTipoHospedaje();
            cd = VC.LeerCantDias();

            MC.setCedula(c);
            MC.setTipoHospedaje(th);
            MC.setCantDias(cd);

            VC.ImprimirCliente(MC.getCedula(),MC.getCantDias(),MC.CalcMontoACancelar());
            MH.ProcesarCliente(MC);

            cout<<"Desea procesar otro cliente (1)SI o (2)NO?:";
            cin>> resp;

     }
     while(resp == 1);

     VH.ImprimirHotel(MH.getAcMat(), MH.getAcTrip() , MH.getAcS(),MH.getAcC(),
    		          MH.CalcPorcClie5(),MH.CalcMayorDeDos());
    // system("pause");
}
