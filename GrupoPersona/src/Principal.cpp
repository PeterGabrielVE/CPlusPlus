/*
 * Principal.cpp
 *
 *  Created on: 21/05/2012
 *  Author: Gabriel Leal
 *  Aplicacion que realiza la siguiente estadistica:
 *  -Hombre menores a 21 años.
 *  -Mujeres sin hijos.
 *  -Madres menores de edad.
 *  -Cantidad de hijos del grupo.
 */

#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Grupo.h"

using namespace std;

void IEPersona (Persona &laPersona);
void IControl (char &respuesta);
void ISGrupo (Grupo elGrupo);

int main() {
         Persona laPersona;
         Grupo elGrupo;
         char respuesta;

         respuesta = 'S';
         while (respuesta == 'S')
         {
        	 IEPersona(laPersona);
        	 elGrupo.contarHM21(laPersona);
        	 elGrupo.contarMME(laPersona);
        	 elGrupo.contarMNM(laPersona);
        	 elGrupo.acumularHijos(laPersona);
        	 IControl(respuesta);
         }
         ISGrupo(elGrupo);
         return 0;
}
void IEPersona (Persona &laPersona)
{
	int laEdad;
	char elSexo;
	int losHijos;
	cout << "Ingrese la Edad: " << endl;
	cin >> laEdad;
	cout << "Ingrese el Sexo H(ombre) M(ujer): " << endl;
	cin >> elSexo;
	cout << "Cantidad de Hijos: " << endl;
	cin >> losHijos;
	laPersona.setEdad(laEdad);
	laPersona.setSexo(elSexo);
	laPersona.setCantHijos(losHijos);
}

void IControl (char &respuesta)
{
       cout << "Hay mas personas en este Grupo S/N: " << endl;
       cin >> respuesta;
}
void ISGrupo (Grupo elGrupo)
{
cout << "ESTADISTICAS DEL GRUPO" <<endl;
cout << "# Hombres Menores a 21 a�os: " << elGrupo.getContHM21()<<endl;
cout << "# Mujeres sin Hijos : " << elGrupo.getContMNM()<<endl;
cout << "# Madres Menores de Edad : " << elGrupo.getContMME()<<endl;
cout << "Cantidad de Hijos del Grupo: " << elGrupo.getAcumHijos() <<endl;
system("pause");
}



