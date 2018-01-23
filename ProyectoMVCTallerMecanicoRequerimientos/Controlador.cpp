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

// Permite procesar el trabajo realizado por los mecanicos
void Controlador::ProcesarMecanicos()
{
                                    //IDENTIFICACION DE CLASES

	                                 /* CLASE GRANDE TALLER
	                                 *  CLASE MEDIANA MECANICO
	                                 *  CLASE PEQUEÑA REPARACION
	                                 */

//instanciar clases
	 MReparacion mrep; //relacion de AGREGACION -> MREPARACION-CONTROLADOR
	 MMecanico mmeca;  //relacion de AGREGACION -> MMECANICO-CONTROLADOR
	 VReparacion vrep; //relacion de AGREGACION -> VREPARACION-CONTROLADOR
	 VMecanico vmeca; //relacion de AGREGACION ->  VMECANICO-CONTROLADOR

//Declarar variables de lectura de datos
	 float mon;
	 long ced;


	 string nom;
	 int cant,resp,tip;
   //ciclo para procesar varios mecanicos
   do
   {
      system("cls");
      //leer datos clase mediana (MECANICO)
      cout << "DATOS DEL MECANICO" << endl;
      cout << "==================" << endl;
      /*Se solicita  al objeto de la clase
      vmecanico que proceda a leer cada dato del mecanico */
      ced = vmeca.LeerCedula();
      nom = vmeca.LeerNombre();
      cant = vmeca.LeerCantidadReparaciones();


      //setear datos en clase mediana
      /*Se le da estado al objeto de la clase mmecanico. La comision del
      mecanico comenzará en cero, lo cual indica que no ha realizado ninguna
      reparacion*/
      mmeca.SetCedula(ced);       // atributo llenado con dato leido
      mmeca.SetNombre(nom);       // atributo llenado con dato leido
      mmeca.SetCantRepara(cant);  // atributo llenado con dato leido


      /*INICIALIZACION -> se inicializa acumuladores, contadores, mayor y/o menor de muchos
        de la clase MEDIANA*/
      mmeca.SetAcMontoComision(0);  // atributo inicializado en cero
      mmeca.SetMayor(0);           // atributo inicializado en cero
                                  // se ira actualizando a medida que se
                                  // procesen las reparaciones


      //ciclo para procesar las reparaciones del mecanico
      //CICLO CLASE PEQUEÑA
      cout << endl << endl << "DATOS DE LAS REPARACIONES" << endl;
      cout << "=========================" << endl;
      for (int i = 0; i < cant; ++i)
      {
          //Leer datos clase pequeña (REPARACION)
    	  //Se solicita  al objeto de la clase vrepara el tipo de reparacion realizada
         tip = vrep.LeerTipoReparacion();
         //Se solicita  al objeto de la clase vrepara el monto cobrado por la reparacion
         mon = vrep.LeerMontoReparacion();

         //setear datos en clase pequeña
         //Se le da estado al objeto de la clase MReparacion
         mrep.SetTipoReparacion(tip);
         mrep.SetMontoReparacion(mon);
         //Se pasa al mmeca el objeto de la clase MReparacion para que lo procese (calcule la comision)


         //Clase Mediana(MECANICO) PROCESA clase PEQUEÑA(REPARACION)
         mmeca.ProcesarReparacion(mrep);
         /* metodo encargado de actualizar el atributo mayor,
            correspondiente al mayor monto entre todas las reparaciones del mecanico,
            (Relacion de uso mecanico con reparacion) */

         //clase Grande(TALLER) PROCESA clase pequeña(REPARACION)
         mtall.ProcesarReparacionTaller(mrep);
         /* metodo encargado de actualizar el atributo acumingrtesado,,
            correspondiente al monto total ingresado al taller entre todas las reparaciones
            asi como actuliza los tres acumuladores de los montos ingresados
            por cada tipo de reparacion,
            para posteriormente calcular el mayor entre esos 3 acumuladores,
            en una funcion tipo string
            (Relacion de uso Taller con reparacion) */

         //Clase Grande PROCESA clase mediana y clase pequeñA, a la vez.
             //ESO NO OCURRE EN ESTE PROGRAMA
      }
      // Se imprime la salida del mecanico
      //imprime salida clase mediana
      vmeca.ImprimirMecanico(mmeca.GetCedula(),mmeca.GetNombre(),
    		                 mmeca.GetAcMontoComision(),mmeca.GetMayor());

      //clase Grande PROCESA clase MEDIANA
      mtall.ProcesarMecanico(mmeca);
          /* metodo encargado de actualizar el atributo
             mayor de la clase MTaller que represenata el mayor monto
             entre todos los montos totales de comisiones.
             (Relacion de uso Taller con Mecanico) */


      cout << "Desea procesar otro mecanico? [1]SI [2]No : ";
      cin >> resp;
   }
   while (resp == 1);

}

void Controlador::ReporteTaller() {
	VTaller vtall;  //relacion de AGREGACION -> VTALLER-CONTROLADOR

	// Se imprime la salida requerida por el taller(Clase Grande)
vtall.ImprimirMayor(mtall.GetMayor(),mtall.GetAcumingresado(),
			        mtall.CalcMayorTipoReparac());

}

