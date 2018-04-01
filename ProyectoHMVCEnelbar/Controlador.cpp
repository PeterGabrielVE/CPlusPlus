/*Implementaci�n del Controlador (.cpp)
 *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */
#include "Controlador.h"

Controlador::Controlador(){}

void Controlador::ProcesarSuscriptores() {
   ifstream arch;
   if (not ve.AbrirArchivo (arch, "_ENELBAR1.TXT")) // verifica que el archivo existe
      { ve.ImprimirMensaje("\n    ERROR: No existe el archivo \n");
        ve.Pausa ();
        return;
   }
   float ce = ve.LeerLineaLong(arch);
/* Declaracion de variables para la
   lectura por teclado o archivo */
   me.SetCapitalEmpieza(ce);
   string cs;
   int i;
/* ciclo repetitivo para procesar
   varios objetos menores */
   cout << "Suscriptor\tImpulsos\tRenta /mes\n";
   while (!ve.FinArchivo (arch)){
/* Se solicita al objeto <Vista menor> activar
   los metodos de lectura*/
      cs = ve.LeerDato(arch);
      i = ve.LeerLineaLong(arch);
/* Se le da estado al objeto <Modelo menor> */
      ms.SetCodigo(cs);
      ms.SetImpulsos(i);
/* Se solicita  al objeto <Modelo menor>, los
   c�lculos a mostrar */
/* Se pasa la info anterior al m�todo del
   objeto <Vista menor> para que imprima*/
      vs.ImprimirSuscriptor(ms.GetCodigo(), ms.GetImpulsos(),
                            ms.DetRentaMes());

/* Adem�s, se pasa el objeto <Modelo menor> al
   objeto <Modelo mayor> para procesarlos */
      me.IncluirSuscriptor(ms);
   };
   vector<string> cod;
   vector<int> imp;
   me.listsusdebajo(cod,imp);
/* Se pasa la info del objeto <Modelo mayor>
   al objeto <Vista mayor> para que imprima */
   ve.ImprimirENELBAR(me.GetCapitalQueda(), me.MontoRentaProm(),
                      me.CantSusctEncimaProm(), me.MayorRentaMes(), me.PorcSusCantImp(),cod,imp);
   ve.Pausa();
}
