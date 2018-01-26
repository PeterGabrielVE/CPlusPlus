/*
 * VEmpleado.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */


#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}

void Controlador::ProcesarVacacionesEmpleados() {
	MEmpresa mempre;
	MEmpleado memp;
	VEmpleado vemp;
	VEmpresa vempr;
	string ced, nom;
	int di, df, resp;
	float sb;
	do
	{
		vemp.Limpiar();
		vemp.ImprimirEncabezado("\n\n Datos del Empleado", "==================================================================");
		ced=vemp.LeerString("\n Cedula: ");
		memp.SetCedula(ced);
		nom=vemp.LeerString("\n Nombre: ");
		memp.SetNombre(nom);
		di=vemp.LeerValidarNro("\n Dia Inicial de las Vacaciones: ", 1, 31);
		memp.SetDiaIni(di);
		df=vemp.LeerValidarNro("\n Dia Final de las Vacaciones: ", di, 31);
		memp.SetDiaFin(df);
		sb=vemp.LeerNroDecimal("\n Sueldo Vacacional: ");
		memp.SetSueldoD(sb);
		mempre.ProcesarEmpleado(memp);
		vemp.ImprimirEmpleado(memp.GetCedula(), memp.GetNombre(), memp.CantDiasDisfrute(), memp.SueldoVacacional());
		resp=vemp.LeerValidarNro("\n Desea ingresas empleado? [1]si [2]no:" , 1,2);

	}
	while (resp==1);
vempr.ImprimirEmpresa(mempre.GetCt());

}


