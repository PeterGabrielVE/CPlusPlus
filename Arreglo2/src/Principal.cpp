 /*
 *
 * Principal.cpp
 *
 *  Created on: 13/07/2012
 *      Author: Pedro Gabriel Leal
 *
 *   De una empresa con 25 empleados se conoce su nombre y su RIF. Por cada empleado se tiene: Nombre, Cédula y Sueldo. Se le solicita que implemente un algoritmo que:
a. Lea y almacene la información de la empresa y la de los empleados, utilizando arreglos donde sea necesario.
b. Un Listado General de la Empresa y sus Empleados, de acuerdo al formato propuesto.
c. Un Listado Condicionado que indique el nombre de los empleados que ganan mas de BsF 5.000.
d. La información del empleado peor pagado.
 */

#include <stdlib.h>
#include "Empresa.h"
#include <iostream>

using namespace std;

void IEEmpleado (Empleado &elEmpleado);
void IEEmpresa (Empresa &laEmpresa);
void ISEmpresa (Empresa laEmpresa);
void listadoGeneral(Empresa laEmpresa);
void listadoCondicional(Empresa laEmpresa);

int main ()
{
   Empresa laEmpresa;
   IEEmpresa (laEmpresa);
   ISEmpresa (laEmpresa);
   return 0;
}

void IEEmpleado(Empleado &elEmpleado)
{
    string elNombre;
    string laCedula;
    float elSueldo;
    cout <<" DATOS DEL EMPLEADO... \n\n";
    cout <<"Ingrese la c�dula: \n";
    cin.sync();
    cin >> laCedula;
    elEmpleado.setCedula(laCedula);
    cout <<"Ingrese el nombre: \n";
    cin.sync();
    cin >> elNombre;
    elEmpleado.setNombre(elNombre);
    cout <<"Ingrese el sueldo: \n";
    cin.sync();
    cin >> elSueldo;
    elEmpleado.setSueldo(elSueldo);
}

void IEEmpresa(Empresa & laEmpresa)
{
     string elRif, elNombre;
     Empleado elEmpleado;
     cout <<" DATOS DE LA EMPRESA... \n\n";
     cout <<"Ingrese el RIF: \n";
     cin.sync();
     cin >> elRif;
     laEmpresa.setRif(elRif);
     cout <<"Ingrese el Nombre: \n";
     cin.sync();
     cin >> elNombre;
     laEmpresa.setNombre(elNombre);
     for (int i=0; i<MAX; i++)
     {
       IEEmpleado (elEmpleado);
       laEmpresa.setAEmpleados(elEmpleado);
     }
}

void ISEmpresa(Empresa laEmpresa)
{
     Empleado elEmp;
     listadoGeneral (laEmpresa);
     cout <<"\n\n";
     listadoCondicional(laEmpresa);
     cout <<"\n\n";
     elEmp = laEmpresa.determinarPeor();
     cout<< "El peor empleado es: " << elEmp.getNombre()<<endl;
     cout << "ya que su sueldo es de BsF: "<<elEmp.getSueldo() <<endl;
}

void listadoGeneral(Empresa laEmpresa)
{
     Empleado elEmp;
     cout <<"EMPRESA: " <<laEmpresa.getNombre() <<endl;
     cout <<"RIF: " <<laEmpresa.getRif()<<endl <<endl;
     cout <<" LISTADO GENERAL \n\n";
     cout <<"CEDULA NOMBRE SUELDO \n";
     for(int i=0; i<MAX; i++)
     {
        elEmp = laEmpresa.getAEmpleados(i);
        cout <<elEmp.getCedula() <<" "<<elEmp.getNombre() <<" "<<elEmp.getSueldo() <<" "<<endl;
     }
}

void listadoCondicional(Empresa laEmpresa)
{
     Empleado elEmp;
     cout <<" LISTADO CONDICIONADO - SUELDO > 5000 \n\n";
     cout <<"CEDULA NOMBRE SUELDO \n";
     for(int i=0; i<MAX; i++)
     {
        elEmp = laEmpresa.getAEmpleados(i);
        if (elEmp.getSueldo() > 5000)
        cout <<elEmp.getCedula() <<" "<<elEmp.getNombre() <<" "<<elEmp.getSueldo() <<" "<<endl;
     }
 }
