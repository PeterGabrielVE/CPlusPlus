/*
 * Controlador.cpp
 *
 *  Created on: 24/04/2012
 *     Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador(){}

void Controlador::ProcesarProfesores()
{   MUniversidad  muniv;
    MContratado mcont;
    MOrdinario  mord;
    VUniversidad vuniv;
    VProfesor vprof;
	string ci, nom;
    int nrohijos,resp,categ, dura, turno,nivelac;
    float smensual, montoc;

   vuniv.Limpiar();
   vuniv.ImprimirLineasBlanco(2);
   vuniv.ImprimirEncabezado("Universidad   xxxx","==================");
   do
   {
      vprof.Limpiar();
      vprof.ImprimirEncabezado("\n Datos del Profesor","==================");
      ci = vprof.LeerString("\n  Cedula: ");
      nom = vprof.LeerString("\n  Nombre: ");
      nrohijos = vprof.LeerNro("\n  Nro. hijos: ");
      categ = vprof.LeerValidarNro("\n  Categoria (1. Contratado, 2. Ordinario): ",1,2);
      nivelac = vprof.LeerValidarNro("\n  Nivel Academico (1. Posgrado, 2. Doctorado): ",1,2);

      switch (categ)
       {
         case 1: dura = vprof.LeerValidarNroValorInicial("\n  Duracion Contrato: ",1);  // Profesor  Contratado
                 montoc = vprof.LeerNroDecimal("\n  Monto del Contrato: ");
                 mcont.SetCedula(ci);
                 mcont.SetNombre(nom);
                 mcont.SetNroHijos(nrohijos);
                 mcont.SetCategoria(categ);
                 mcont.SetNivelAc(nivelac);
                 mcont.SetDuracionContrato(dura);
                 mcont.SetMontoContrato(montoc);
                 muniv.ProcesarContratado(mcont);
                 vprof.ImprimirProfesor(mcont.GetCedula(),
                		 	 	 	 	mcont.GetNombre(),
                		                mcont.NombreCategoria(),
                		                mcont.SueldoNeto());

                 break;

         case 2: smensual = vprof.LeerNroDecimal("\n  Sueldo Mensual: ");  // Profesor Ordinario
                 turno = vprof.LeerValidarNro("\n  Horario Trabajo (1.Diurno, 2.Nocturno, 3.Mixto): ",1,3);
                 mord.SetCedula(ci);
                 mord.SetNombre(nom);
                 mord.SetNroHijos(nrohijos);
                 mord.SetCategoria(categ);
                 mord.SetNivelAc(nivelac);
                 mord.SetSueldoMensual(smensual);
                 mord.SetHorario(turno);
                 muniv.ProcesarOrdinario(mord);
                 vprof.ImprimirProfesor(mord.GetCedula(),
                		                mord.GetNombre(),
                		                mord.NombreCategoria(),
                		                mord.SueldoNeto());

                 break;
       } // switch
       resp = vuniv.LeerValidarNro("\n\n  Desea procesar otro profesor 1->SI 2->NO: ",1,2);
   }
   while (resp==1);  // fin del while
   vuniv.ImprimirUniv(muniv.GetCtDoctores(), muniv.GetCtCont(), muniv.GetAcBonoHorario());
}  // fin del m�todo
