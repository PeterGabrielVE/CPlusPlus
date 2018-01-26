/*
 * Controlador.cpp
 *
 *  Created on: 15/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}

void Controlador::ProcesarEmpleados()
{
	MEmpleado me;
	VEmpresa vem;
	VEmpleado ve;

	string nom, ced;
	int edad, sexo, resp;
	float montop;

	do
	{
		vem.Limpiar();
		vem.ImprimirEncabezado("\n\tDATOS DEL EMPLEADO", "\t_______________");
		nom=vem.LeerString("\n\tIngrese Nombre: ");
		ced=vem.LeerString("\n\tIngrese C�dula: ");
		sexo=vem.LeerValidarNro("\n\tIngrese su Sexo: 1. Femenino 2.Masculino: ",1,2);
		edad=vem.LeerNro("\n\tIngrese su Edad: ");
		montop=vem.LeerValidarNroDecimalValorInicial("\n\tIngrese Monto de Pr�stamo Solicitado: ",0);
		me.SetNombre(nom);
		me.SetCedula(ced);
		me.SetSexo(sexo);
		me.SetEdad(edad);
		me.SetMontoPrestamo(montop);
		ve.ImprimirEmpleado(me.GetNombre(), me.GetCedula(), me.GetEdad(), me.CalcMontoaPagar(), me.CalcMontoCuotas());
		resp=ve.LeerValidarNro("\n\tDesea Procesar otro Empleado? 1 Si, 2No: ",1,2);
	}
	while (resp == 1);
	}


void Controlador::ImprimirEmpresa()
{
	VEmpresa vem;
	vem.ImprimirEmpresa( mep.GetAcumMontoPrestamo(), mep.CalcPorcMujerMenor(), mep.CalcPromedioH());
}
