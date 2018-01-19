/*
 * Principal.cpp
 *
 *  Created on: 21/05/2012
 *  Author: Pedro Gabriel Leal
 *  Para un grupo de personas, por cada uno de ellos se tiene lo siguiente: edad, sexo, número de hijos. Se desea conocer:
	a) Cantidad de Hombres menores a 21 años
	b) Cantidad de Mujeres que aun no son madre.
	c) Cantidad de madres menores de edad.
	d) Total de Hijos del grupo.
 */
#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Grupo.h"

using namespace std;

void IEPersona (Persona &laPersona);
void IControl (char &respuesta);
void ISGrupo (Grupo elGrupo);

int main ()
{
	Persona laPersona;
	Grupo elGrupo;
	char respuesta;

	respuesta = 'S';
	while (respuesta == 'S')
	{
		IEPersona (laPersona);
		elGrupo.contarHM21 (laPersona);
		elGrupo.contarMNM (laPersona);
		elGrupo.contarMME (laPersona);
		elGrupo.contarMMECH (laPersona);
		elGrupo.acumularHijos (laPersona);
		IControl (respuesta);
	}
	ISGrupo (elGrupo);
	return 0;
}

void IEPersona (Persona &laPersona)
{
	int laEdad;
	char elSexo;
	int losHijos;

	cout<<" ====== Ingrese los datos de la persona ====== "<<endl;
	cout << "Ingrese la Edad: " << endl;
	cin >> laEdad;
	laPersona.asignarEdad (laEdad);
	cout << "Ingrese el Sexo H(ombre) M(ujer): " << endl;
	cin >> elSexo;
	laPersona.asignarSexo (elSexo);
	cout << "Cantidad de Hijos: " << endl;
	cin >> losHijos;
	laPersona.asignarCantHijos (losHijos);
}

void IControl (char &respuesta)
{
	cout << "Hay mas Personas en este Grupo S/N: " << endl;
	cin >> respuesta;
}

void ISGrupo (Grupo elGrupo)
{
	cout << "Estadisticas del Grupo" << endl;
	cout << "# Hombres Menores a 21 a�os: " << elGrupo.obtenerContHM21() << endl;
	cout << "# Mujeres sin Hijos: " << elGrupo.obtenerContMNM () << endl;
	cout << "# Madres Menores de Edad: " << elGrupo.obtenerContMME() << endl;
	cout << "# Mujeres Menores de Edad con Mas de 2 Hijos: " <<elGrupo.obtenerContMMECH()<<endl;
	cout << "Cantidad de hijos del Grupo:" << elGrupo.obtenerAcumHijos() << endl;
	system ("pause");

}
