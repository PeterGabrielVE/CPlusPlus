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

      //ciclo para procesar varias caba�as
   do
   {
          system("cls");
          cout<<"\t\t\tDatos de la caba�a\n";
          cout<<"\t\t\t=================\n\n";
          //leer datos clase caba�a
          n = vca.LeerNombre();
          m = vca.LeerMonto();

          //setear datos en clase caba�a
          mca.setNombre(n);
          mca.setMontoAlq(m);


          //clase Grande PROCESA clase MEDIANA y PEQUE�A
          mc.procesarCabanna(mca);

          cout<<"Desea procesar otra caba�a (1)SI o (2)NO?:";
          cin>> resp;

   }
   while(resp == 1);

   vc.ImprimirCompannia(mc.calcCapitalFinal());
  // system("pause");
}



