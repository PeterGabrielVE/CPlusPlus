/*
 * Author: Pedro Gabriel Leal
 *
 * Una compa��a de venta de repuestos desea determinar
el sueldo neto de sus vendedores y el monto total a 
cancelar por la n�mina. Por cada vendedor se conoce: 
c�dula, nombre, sueldo base y monto total de las ventas. 
El sueldo neto del vendedor ser� calculado en base al 
sueldo base, comisi�n por ventas y deducciones por Ley 
de Pol�tica Habitacional y Seguro Social obligatorio.
Actualmente cada vendedor tiene una deducci�n que 
corresponde al 1% Ley de Pol�tica Habitacional y 4% 
por Seguro Social obligatorio sobre su sueldo base. 
Por otra parte, la comisi�n por ventas se determina 
en funci�n de un porcentaje que se aplica al monto 
total de sus ventas, seg�n la siguiente tabla:

Monto de la Ventas                Porcentaje
50000,00 .. 100000,00                 4%
Mayor a 100000,00                     7%

Por cada vendedor se requiere la siguiente salida: 
c�dula, nombre, comisi�n y sueldo neto.
*/

#include "Controlador.h"
using namespace std;

int main()
{
   Controlador c;    
   c.ProcesarVendedores();
   c.ReporteCompannia();
   return 0; 
}
