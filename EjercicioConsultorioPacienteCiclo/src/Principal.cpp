/*
 * Principal.cpp
 *
 *  Created on: 06/02/2013
 *      Author: Pedro Gabriel Leal
 */

#include <iostream>
#include <string>
#include<stdlib.h>
#include"Paciente.h"
#include"Consultorio.h"

using namespace std;

void IEPaciente (Paciente &elPaciente);
void IControl  (char &Respuesta);
void ISalida (Consultorio &elConsultorio);

int main()
{
	Paciente elPaciente;
	Consultorio elConsultorio;
	char Respuesta;
	Respuesta='S';
	while (Respuesta=='S' or Respuesta=='s')

	{
		IEPaciente(elPaciente);
		elConsultorio.ContarPaciente ();
		cout<<"El Paciente "<<elConsultorio.DeterminarCondicion(elPaciente)<<endl;
		cout<<"El Paciente : "<<elConsultorio.DeterminarEstaturaM(elPaciente)<<endl;
		IControl (Respuesta);
	}
    ISalida(elConsultorio);
    return 0;
}

void IEPaciente (Paciente &elPaciente)
{
	string elNombre;
	int laEdad;
	float laAltura, elPeso;
	cout<<" Escriba el nombre del Paciente: "<<endl;
	cin>>elNombre;
	elPaciente.setNombre(elNombre);
	cout<<" Escriba la edad del Paciente: "<<endl;
	cin>>laEdad;
	elPaciente.setEdad(laEdad);
	cout<<" Escriba la altura del Paciente: "<<endl;
	cin>>laAltura;
	elPaciente.setAltura(laAltura);
	cout<<" Ingrese el peso actual del Paciente: "<<endl;
    cin>>elPeso;
    elPaciente.setPeso(elPeso);

}

void IControl (char &Respuesta)
{
	cout<<" ¿ Hay algun otro Paciente S/N ?"<<endl;
	cin>>Respuesta;
}

void ISalida (Consultorio &elConsultorio)
{
	cout<<"El dia de Hoy Asistieron "<<elConsultorio.getContPaciente()<<" Pacientes"<<endl;
	cout<<"El Porcentaje de los Pacientes que tienes Peso Ideal: "<<elConsultorio.CalcularPorcentajePI()<<endl;
	cout<<"El dia de hoy asistieron pacientes con estatura mayor de 180 cm:  "<<elConsultorio.getContPacienteEst()<<" Pacientes"<<endl;
	cout<<"El porcentaje de los pacientes con estatura mayor a 180 cm fue: "<<elConsultorio.CalcularPorcentajePE()<<endl;
}
