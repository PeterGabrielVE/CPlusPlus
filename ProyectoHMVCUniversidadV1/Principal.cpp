/*
 * Principal.cpp
 *
 *  Created on: 24/04/2012
 *      Author: Pedro Gabriel Leal
 *
 *  Una determinada universidad del pa�s, requiere de un programa que le permita obtener informaci�n sobre
 *  los profesores que laboran en esa casa de estudios, de los cuales existen dos categor�as:
 *  1. Profesores Contratados (no son personal fijo)
 *  2. Profesores Ordinarios (se encuentran incluidos en la n�mina como personal fijo).
 *  El programa debe indicar por cada profesor, el sueldo neto mensual que le deber� cancelar la universidad,
 *  por supuesto identificando el profesor con los datos de C�dula, Nombre y  Categor�a (Contratado, Ordinario).
 *  Cuando el profesor comienza a laborar en la universidad, se le llena una ficha con ciertos datos que son
 *  vitales para su expediente, el cual ser� registrado por la oficina de personal.
 *  Estos datos son: c�dula, nombre, n�mero de hijos, categor�a (1. Contratado, 2. Ordinario) y nivel  acad�mico
 *  (1. Postgrado � Maestr�a,2. Doctorado).
 *  Dentro de las pol�ticas por las cuales se rige la universidad, se establece que se le debe cancelar adicional
 *  al sueldo mensual un bono por hijos que corresponde a 250 BsF. por cada hijo.
 *  Si el profesor es contratado, se registra tambi�n la duraci�n del contrato en meses y el monto total en BsF.
 *  del contrato. Para calcular el sueldo mensual se divide el monto total del contrato entre la duraci�n.
 *  En cambio, para los profesores ordinarios, adem�s se registra su sueldo mensual y se les descuenta el 1% por
 *  concepto de mantenimiento de la sede social (club), tambi�n se conoce el horario en el que trabaja
 *  (1. Diurno, 2. Nocturno,  3. Mixto).
 *  Adicional al sueldo mensual y al bono por hijos, se establece que solo para los profesores ordinarios se pagar�
 *  mensualmente un bono por horario definido de la siguiente manera: 200 BsF. a los que trabajan horario nocturno,
 *  para horario mixto el bono es la mitad del bono nocturno y los que trabajan horario diurno no les corresponde bono por horario.
 *  Todos los descuentos son realizados en base al sueldo mensual.
 *  Es importante acotar, que para el calculo del sueldo neto mensual de cada profesor, se debe tomar en cuenta
 *  las asignaciones (bonos) y las deducciones (descuentos).
 *  En estos momentos, la oficina de personal de la universidad requiere presentar un informe ante las autoridades
 *  universitarias, el mismo deber� presentar los siguientes datos: Total de profesores que tienen doctorado,
 *  total de profesores contratados cuyo salario neto mensual sea superior a 1500BsF  y
 *  cu�l es el monto total pagado en bono por horario.
 *
 */
#include "Controlador.h"

int main()
{
    Controlador c;
    c.ProcesarProfesores();
    return 0;
};




