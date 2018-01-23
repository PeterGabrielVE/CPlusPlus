/*
 * Controlador.cpp
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#include "Controlador.h"


#include "Controlador.h"
// Constructor
Controlador::Controlador(){}

// Permite procesar el trabajo realizado por los mecanicos
void Controlador::ProcesarMecanicos()
{
   float mon;
   string ced, nom;
   int cant,resp,tip;
   MRepara mrep;     // Relaci�n de Agregaci�n
   MMecanico mmeca;  // con las clases MRepara, MMecanico
   MTaller mtall;    // MTaller, VRepara, VMecanico y VTaller
   VRepara vrep;
   VMecanico vmeca;
   VTaller vtall;
   //ciclo para procesar varios mecanicos
   do
   {
      system("cls");
      cout << "DATOS DEL MECANICO" << endl;
      cout << "==================" << endl;
      /*Se solicita  al objeto (vmeca) de la clase
      VMecanico que proceda a leer cada dato del mecanico */
      ced = vmeca.LeerCedula();
      nom = vmeca.LeerNombre();
      cant = vmeca.LeerCantidadReparaciones();
      /* Se le da estado al objeto (mmeca) de la clase MMecanico.
         La comision del mecanico comenzar� en cero,
         lo cual indica que no ha realizado ninguna reparacion*/
      mmeca.SetCedula(ced);       // atributos del objeto mmeca se llenan con
      mmeca.SetNombre(nom);       // los datos leidos por la vista vmeca
      mmeca.SetCantRepara(cant);
      mmeca.SetAcMontoComision(0);  /* atributo acumulador inicializado en cero,
                                       se ira actualizando a medida que se
                                       procesen las reparaciones,
                                       pero debe ser inicializado en cero
                                       para cada mec�nico */
      //ciclo para procesar las reparaciones del mecanico
      cout << endl << endl << "DATOS DE LAS REPARACIONES" << endl;
      cout << "=========================" << endl;
      for (int i = 0; i < cant; ++i)
      {
         //Se solicita  al objeto (vrep) de la clase vrepara el tipo de reparacion realizada
         tip = vrep.LeerTipoReparacion();
         //Se solicita  al objeto (vrep) de la clase vrepara el monto cobrado por la reparacion
         mon = vrep.LeerMontoReparacion();
         //Se le da estado al objeto (mrep) de la clase MRepara
         mrep.SetTipoReparacion(tip);
         mrep.SetMontoReparacion(mon);
         /* Se pasa como parametro el objeto (mrep) de la clase MRepara para que lo procese.
            El mecanico calcula la comision de la reparaci�n */
         mmeca.ProcesarReparacion(mrep); /* metodo encargado de actualizar el atributo ac_montocomision
                                            del mecanico (Relacion de uso MMecanico con MRepara) */
      }
      // Se imprime la salida del mecanico
      vmeca.ImprimirMecanico(mmeca.GetCedula(),mmeca.GetNombre(),mmeca.GetAcMontoComision(), mmeca.GetMayorCo());
      mtall.ProcesarTrabajoMecanico(mmeca); /* metodo encargado de actualizar el atributo
                                               mayor de la clase MTaller
                                               (Relacion de uso MTaller con MMecanico) */
      cout << "\n\n\n Hay otro mecanico? [1]SI [2]No : ";
      cin >> resp;
   }
   while (resp == 1);
   // Se imprime la salida requerida por el taller
   vtall.ImprimirMayor(mtall.GetMayor());
}

