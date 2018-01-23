/*
 * Author: Pedro Leal
 */

#include "VTallerC.h"

VTallerC::VTallerC() {}

void VTallerC::ImprimirReporte ( float mtototextra,
		                         float mtototsueldos,
		                         int cantophextras)
{
	system("cls");

	cout << " \n\n\t\t\t INFORMACION DEL TALLER" << endl;
	cout << "\t\t\t=======================\n" << endl;

	cout << "\t\t Numero de Operarios que Trabajaron Horas Extras "
			<< cantophextras << endl;

	cout << "\t\t Monto Total a Cancelar por Horas Extras: "
			<< setiosflags (ios::fixed) << setprecision (2)
			<< mtototextra << endl;

	cout << "\t\t Monto Total a Pagar por Sueldos de Operarios: "
			<< setiosflags (ios::fixed) << setprecision (2)
			<< mtototsueldos << endl;

	 system("pause");
}


