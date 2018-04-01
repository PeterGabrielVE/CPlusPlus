/*
 * Controlador.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador()
{
	// TODO Auto-generated constructor stub

}

// Permite procesar las vacaciones de los empleados
void Controlador::ProcesarVacacionesEmpleados()
{
MEmpleado memp; // Relaci�n Agregaci�n con
MEmpresa mempre; // MEmpleado, MEmpresa,
VEmpleado vemp; // VEmpleado, VEmpresa
VEmpresa vempre;
string ced, nom;
int di, df, resp,edo;
float sd;
// ciclo para procesar varios empleados
do
{
vemp.Limpiar();
vemp.ImprimirEncabezado("\n\n DATOS DEL EMPLEADO", "\n ==================");
	// �..ciclo para procesar varios empleados
	/*Se solicita al objeto de la clase VEmpleado que lea Cedula,
	Nombre, D�a Inicial. D�a Final y Sueldo Diario Vacacional */
		ced = vemp.LeerString("\n Cedula: ");
		nom = vemp.LeerString("\n Nombre: ");
		edo= vemp.LeerValidarNro("\n Estado Civil (1) Soltero,(2) Casado,(3) Divorciado,(4) Viudo",1,4);
		di = vemp.LeerValidarNro("\n Dia Inicial: ", 1, 31);
		df = vemp.LeerValidarNro("\n Dia Final: ", di, 31);
		sd = vemp.LeerNroDecimal("\n Sueldo Vacacional: ");
		/*Se le da estado al objeto de la clase MEmpleado.*/
		memp.SetCedula(ced); memp.SetNombre(nom);
		memp.SetDiaIni(di); memp.SetDiaFin(df);
		memp.SetSueldoD(sd);
		mempre.ProcesarEmpleado(memp);
		vemp.ImprimirEmpleado(memp.GetCedula(),
		memp.GetNombre(), memp.CntDiasDisfrute(),
		memp.SueldoVacacional());
		resp = vemp.LeerValidarNro("\n\n Desea procesar otro empleado 1->SI 2->NO: ", 1, 2);
		} while (resp == 1);
		vempre.ImprimirEmpresa(mempre.GetCt(),mempre.getCbe());
		}
