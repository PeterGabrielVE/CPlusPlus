/*
 * Principal.cpp
 *
 *  Created on: 25/02/2013
 *  Author: Gabriel Leal
 *
Por cada uno de los empleados de la Universidad �La Excelencia� se conoce: C�dula, tipo
 (Profesor, Obrero, Administrativo) y sueldo. Se desea un programa que muestre lo siguiente:

a. Dada una c�dula indicar si es (o no) empleado de la Universidad, indicando el tipo de
Personal y el sueldo. Esta opci�n debe mantenerse ejecutando hasta que el usuario lo
Decida

b. Antes de finalizar, el programa debe mostrar la siguiente informaci�n:
i. C�dula del empleado con mayor sueldo
ii. Cuantos empleados del tipo Obrero tiene la Universidad

Nota: no se conoce de antemano la cantidad de empleados, por lo que se debe utilizar
�repita mientras� para cargar el arreglo y para dar soluci�n a la parte �a� del problema.
 Utilice �repita para� para recorrer el arreglo y realizar los c�lculos.
 *
 */

#include "Empleado.h"
#include "Universidad.h"
#include <stdlib.h>
#include <iostream>

void IEUniversidad(Universidad &laUniversidad);
void ISalidad(Universidad laUniversidad);
void BuscadorEmCI(Universidad laUniversidad);
void ConsultaTipoEmpleado(Universidad laUniversidad);
void MenuReporte(Universidad laUniversidad);
void ReporteProf(Universidad laUniversidad);
void ReporteObrero(Universidad laUniversidad);
void ReporteAdm(Universidad laUniversidad);
void IControl(char &resp);

int main()
{
	char r='S';
	while(r=='S')
	{
		for(int i=0;i<MAX; i++)
		{
		Universidad laUniversidad;
		IEUniversidad(laUniversidad);
		char resp='s';
		while(resp=='s')
		{
			int op;
			system ("cls");
			cout<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
			cout<<"*_*_*_*_*_*_*_*_*_*_*        Menu de Opciones	*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
			cout<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
			cout<<""<<endl;
			cout<<"1: Consultar un Trabajador a partir de su CI"<<endl;
			cout<<"2: Consultar Cantidad de Trabajador por Tipo"<<endl;
			cout<<"3: Reporte Condicionado(lista de los Trabajadores Segun el Tipo)"<<endl;
			cout<<"4: Mostrar Datos Requeridos del Sistema"<<endl;
			cout<<"5: Incluir un Nuevo Empleado"<<endl;
			cout<<"6: Salir"<<endl;
			cout<<"		Seleccion una Opcion: "<< endl; cin>>op;
			switch(op)
			{
			case 1:
				BuscadorEmCI(laUniversidad);
			break;
			case 2:
				ConsultaTipoEmpleado(laUniversidad);
			break;
			case 3:
				MenuReporte(laUniversidad);
			break;
			case 4:
				ISalidad(laUniversidad);
			break;
			case 5:
				IEUniversidad(laUniversidad);
			break;
			case 6:
				cout <<"\n\n    SALIENDO ... \n"<<endl;
				system ("pause");
				return 0;
			break;
			default:
				r='N';
				resp='n';
			break;
			}
			system ("pause");
		}

		}
	}
	return 0;
}



void IEEmpleado(Empleado &elEmpleado)
{
	string laCedula;
	string elTipo;
	float elSueldo;
	cout<<"Ingrese la Cedula del Empleado: "<<endl;
	cin>>laCedula;
	elEmpleado.setCedula(laCedula);
	cout<<"Ingrese el Tipo de Empleado(Profesor, Obrero, Administrador): "<<endl;
	cin>>elTipo;
	elEmpleado.setTipoE(elTipo);
	cout<<"Ingrese su Sueldo: "<<endl;
	cin>>elSueldo;
	elEmpleado.setSueldo(elSueldo);
}

void IEUniversidad(Universidad &laUniversidad)
{

	Empleado elEmpleado;
	char resp='S';
	bool Incluyo;
	cout<<"*_*_*_*_*_*_*_*_*_*__*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<"*_*_*_*_*_*_*_*_*_*_*_*Universidad  LA EXCELENCIA*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<"*_*_*_*_*_*_*_*_*_*__*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<""<<endl;
	cout<<"	Modulo de Inclusion del Empleado"<<endl;
	while(resp=='S')
	{
		IEEmpleado(elEmpleado);
		Incluyo=laUniversidad.setArr_Empleado(elEmpleado);
		if(Incluyo==false)
		cout<<"(Error.El Arreglo est� lleno. Contacte al administrador)"<<endl;
		IControl(resp);
	}

}

void IControl(char &resp)
{
	cout<<"   �Desea continuar con la Operacion?S)i o N)o"<<endl;
	cin>>resp;
}

void ISalidad(Universidad laUniversidad)
{
	cout<<"*_*_*_**_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<"la Cedula con Mayor Sueldo es: "<< laUniversidad.DetMayor().getCedula()<<endl;
	cout<<"la Cantidad de Empleado Tipo Obrero es de: " <<laUniversidad.CantObreros()<< " Obreros" <<endl;
}

void BuscadorEmCI(Universidad laUniversidad)
{
	Empleado elEmpleado;
	string laCedula;
	char resp='S';
	int posi;
	while(resp=='S')
	{
	cout<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<""<<endl;
	cout<<"		Coloque la Cedula del Empleado que desea Buscar		"<<endl;
	cin>>laCedula;
	posi=laUniversidad.BuscadorEmCI(laCedula);
		if(posi!=-1)
		{
			laUniversidad.getArr_Empleado(posi).getCedula();
			cout<<"Tipo de Empleado: "<<laUniversidad.getArr_Empleado(posi).getTipoE()<<endl;
			cout<<"Su Sueldo es de: "<<laUniversidad.getArr_Empleado(posi).getSueldo()<<" .Bs "<<endl;

		}
		else
			if(posi==-1)
			cout<<"El Empleado NO Existe"<<endl;


	IControl(resp);
	}


}

void ConsultaTipoEmpleado(Universidad laUniversidad)
{
	Empleado elEmpleado;
	string elTipo;
	char resp='S';
	int posi;
	while(resp=='S')
	{
		cout<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
		cout<<"		Coloque el Tipo del Empleado que desea Consultar	"<<endl;
		cin>>elTipo;
		posi=laUniversidad.ConsultaTipoEmpleado(elTipo);
			{
			if(posi!=-1 and laUniversidad.getArr_Empleado(posi).getTipoE()=="Obrero")
				cout<<laUniversidad.CantObreros()<<" Empleado(s)"<<endl;
			if(posi!=-1 and laUniversidad.getArr_Empleado(posi).getTipoE()=="Profesor")
				cout<<laUniversidad.CantProf()<<"  Empleado(s)"<<endl;
			if(posi!=-1 and laUniversidad.getArr_Empleado(posi).getTipoE()=="Administrador")
				cout<<laUniversidad.CantAdm()<<"  Empleado(s)"<<endl;
			if(posi==-1)
				cout<<"El Empleado No Exite"<<endl;
			}
	IControl(resp);
	}
}

void MenuReporte(Universidad laUniversidad)
{
	char respuesta='S';
	while(respuesta=='S')
	{
		int op;
		system ("pause");
		cout<<"1: Reporte de Profesores"<<endl;
		cout<<"2: Reporte de Obrero"<<endl;
		cout<<"3: Reporte de Administrador"<<endl;
		cout<<"4: Volver al Menu de Opciones"<<endl;
		cout<<"Selecione un Opcion:"<<endl; 		cin>>(op);
		switch(op)
		{
		case 1:
			ReporteProf(laUniversidad);
		break;
		case 2:
			ReporteObrero(laUniversidad);
		break;
		case 3:
			ReporteAdm(laUniversidad);
		break;
		case 4:
			respuesta= 'N';
		break;
		default:
		respuesta= 'N';
		break;
		}

	}
}

inline void ReporteProf(Universidad laUniversidad)
{
	cout<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<"*_*_*_*_*_*_*_*_*	Lista de Empleados(Profesor)	*_*_*_*_*_*_*_*_*_*"<<endl;

	cout<<""<<endl;
	cout<<"		Cedula"<<"			"<<"Sueldo		"<<endl;
	cout<<"		______"<<"			"<<"______		"<<endl;
	for(int i=0; i<MAX; i++)
		{
			if(laUniversidad.getArr_Empleado(i).getTipoE()=="Profesor")
				cout<<"		"<<laUniversidad.getArr_Empleado(i).getCedula()<<"		"<<laUniversidad.getArr_Empleado(i).getSueldo()<<endl;
		}
}

inline void ReporteObrero(Universidad laUniversidad)
{
	cout<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<"*_*_*_*_*_*_*_*_*	Lista de Empleados(Obreros)	*_*_*_*_*_*_*_*_*"<<endl;
	cout<<""<<endl;
	cout<<"		Cedula"<<"			"<<"Sueldo		"<<endl;
	cout<<"		______"<<"			"<<"______		"<<endl;
	for(int i=0; i<MAX; i++)
		{
			if(laUniversidad.getArr_Empleado(i).getTipoE()=="Obrero")
				cout<<"		"<<laUniversidad.getArr_Empleado(i).getCedula()<<"		"<<laUniversidad.getArr_Empleado(i).getSueldo()<<endl;
		}
}

inline void ReporteAdm(Universidad laUniversidad)
{
	cout<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<"*_*_*_*_*_*_*_*	Lista de Empleados(Administrador)	*_*_*_*_*_*_*"<<endl;
	cout<<""<<endl;
	cout<<"		Cedula"<<"			"<<"Sueldo		"<<endl;
	cout<<"		______"<<"			"<<"______		"<<endl;
		for(int i=0; i<MAX; i++)
		{
			if(laUniversidad.getArr_Empleado(i).getTipoE()=="Administrador")
				cout<<"		"<<laUniversidad.getArr_Empleado(i).getCedula()<<"		"<<laUniversidad.getArr_Empleado(i).getSueldo()<<endl;
		}
}

