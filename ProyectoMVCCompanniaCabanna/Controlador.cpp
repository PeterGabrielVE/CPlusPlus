/*
 * Controlador.cpp
 *
 *  Created on: 20/09/2014
 *      Author: Gabriel
 */

#include "Controlador.h"

Controlador::Controlador()
{
	// TODO Auto-generated constructor stub

}

void Controlador::ProcesarCabanna()
{

    //Instanciar clases
	  MCabanna mca;
	  VCabanna vca;
	  VCompannia vc;
	  //Declarar variables de lectura de datos
	  float m;
	  string n;
      int resp;

      //ciclo para procesar varias cabañas
   do
   {
          system("cls");
          cout<<"\t\t\tDatos de la cabaña\n";
          cout<<"\t\t\t=================\n\n";
          //leer datos clase cabaña
          n = vca.LeerNombre();
          m = vca.LeerMonto();

          //setear datos en clase cabaña
          mca.setNombre(n);
          mca.setMontoAlq(m);


          //clase Grande PROCESA clase MEDIANA y PEQUEÑA
          mc.procesarCabanna(mca);

          cout<<"Desea procesar otra cabaña (1)SI o (2)NO?:";
          cin>> resp;

   }
   while(resp == 1);

   vc.ImprimirCompannia(mc.calcCapitalFinal());
  // system("pause");
}



