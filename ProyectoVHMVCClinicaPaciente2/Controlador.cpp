/*
 * Controlador.cpp
 *
 *  Created on: 27/01/2014
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}

void Controlador::ProcesarInfoPacientes()
{
  string ced,nom;
  int mv,t,resp,posi,d;
  float mcanc;

  MPaciente mp;
  vc.Limpiar();
  do
  {
	 vc.Limpiar();
	 vc.ImprimirEncabezado("\n\t\t\tCargar Informacion del Paciente",
			               "\t\t\t_______________________________");
	 //leemos el dato unico-> codigo de la tienda
	 ced=vc.LeerString("\n\tCedula del paciente: ") ;
	 posi= mc.BuscarPaciente(ced);
	 if (posi >=0) //Ya se encuentra
	 {
		vc.ImprimirMensaje("\n\n\t\tPaciente ya registrado..\n\n");
		vc.Pausa();
	 }
	 else
	 {
		 //leemos resto de datos del paciente
		 nom=vc.LeerString("\tNombre del paciente: ") ;
		 mv=vc.LeerValidarNro("\tMotivo Visita (1)Consulta (2)Hospitalizacion: ",1,2) ;
		 t=vc.LeerValidarNro("\tTurno (1)Matutino (2)Vespertino: ",1,2);
		 mcanc=vc.LeerNroDecimal("\tMonto Cancelado: ");
         d=vc.LeerValidarNro("\tDia (1)Lunes (2)Martes (3)Miercoles (4)Jueves(5)Viernes (6)Sabado (7)Domingo: ",1,7);
		 //seteamos(damos estado) los datos leidos emn MPaciente
		 mp.SetCedula(ced);
		 mp.SetNombre(nom);
		 mp.SetMotivoV(mv);
		 mp.SetTurno(t);
		 mp.SetMontoC(mcanc);
		 mp.setDia(d);
		 // la clase MClinica se encarga de incluir el paciente en el vector de pacientes
		 mc.IncluirPaciente(mp);
	 }
    //procesamos otro paciente
    resp=vc.LeerValidarNro("\n\n\t\tDesea procesar otro paciente(si=1/no=2)?",1,2);
  }while(resp==1);

}

void Controlador::MostrarConsultaTurno()
{
	vc.Limpiar();
	vc.ImprimirLineasBlanco(2);
	vc.ImprimirEncabezado("\t\t\t\tConsulta Por Turno",
				           "\t\t\t\t__________________\n");
 if(mc.CantidadPacientes()==0)
 {
	 vc.ImprimirMensaje("\n\n\t\tNo se han registrado pacientes..Debe Ejecutar opcion 1\n\n\n");
	 vc.Pausa();
	 return;
 }

 int t=vc.LeerValidarNro("\n\tTurno que desea para la consulta (1)Matutino (2)Vespertino: ",1,2);
 vc.ImprimirConsultaTurno(mc.ContarPacPorTurno(t));

}

void Controlador::MostrarEstadisticas()
{
	vc.Limpiar();
	vc.ImprimirLineasBlanco(2);
	vc.ImprimirEncabezado("\t\t\t   Estadisticas de la Clinica",
		 			           "\t\t\t   __________________________\n");
  if(mc.CantidadPacientes()==0)
	 {
		 vc.ImprimirMensaje("\n\n\t\tNo se han registrado pacientes..Debe Ejecutar opcion 1\n\n\n");
		 vc.Pausa();
		 return;
	 }

	vc.ImprimirEstadisticas(mc.CalcMontoTotCons(),
		                  mc.CalcMontoTotHosp(),mc.TotalRecaudado(),mc.CalcMayorVisitado());

}

void Controlador::MostrarListado()
{
	vc.Limpiar();
	vc.	ImprimirLineasBlanco(2);
	vc.ImprimirEncabezado("\t\t\t\tL i s t a d o",
					   "\t\t\t\t_____________\n");
	if(mc.CantidadPacientes()==0)
	 {
		 vc.ImprimirMensaje("\n\n\t\tNo se han registrado pacientes..Debe Ejecutar opcion 1\n\n\n");
		 vc.Pausa();
		 return;
	 }
  vc.ImprimirListado(mc.DetVCedMayor());
}



