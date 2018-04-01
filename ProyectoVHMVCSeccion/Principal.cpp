/*
 *  Se conoce de cada uno de los estudiantes de una secci�n su cedula, nombre y nota final
adem�s la secci�n tiene asignado un n�mero y el nombre del profesor que la imparte.
Se desea un reporte que contenga por cada secci�n: nombre del profesor que la 
imparte con su respectivo n�mero, un listado que contenga la c�dula, nombre y 
nota final de cada alumno y los siguientes totales: 
Promedio de notas, 
Porcentaje de estudiantes por encima del promedio.
Nota: Se debe validar que el estudiante se procese una sola vez.

* Author:Pedro Gabriel Leal
 */

#include "Controlador.h"
int main()
{  
   int opc;
   Controlador c;
   do
   {    
     system("cls");
     cout << "M E N U  O P C I O N E S\n";
     cout << "=======  ===============\n\n";
     cout << "1.  PROCESAR ESTUDIANTES SECCION\n";
     cout << "2.  REPORTE SECCION\n";
     cout << "3.  FINALIZAR\n\n";
     cout << "SELECCIONE SU OPCION : ";
     cin >> opc;
     switch (opc)
     {
        case 1: c.ProcesarSeccion();              
                break;
        case 2: c.ReporteSeccion();
                break;      
     }   
   } 
   while(opc != 3);
   return 0;     
}
