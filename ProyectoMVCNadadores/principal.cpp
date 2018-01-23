/*
 * principal.cpp
 *
 *  Created on: 12/10/2011
 *      Author: Pedro Gabriel Leal

UNIVERSIDAD CENTROCCIDENTAL "LISANDRO ALVARADO"
DECANATO DE CIENCIAS Y TECNOLOG�A
SISTEMA DE EDUCACI�N A DISTANCIA
ASIGNATURA: Programaci�n I C�DIGO: 3154 DEPARTAMENTO: Sistemas
Pr�ctica N� 1 Unidad V

La Federaci�n de nataci�n del Estado Lara, una vez al a�o organiza unas
competencias en donde intervienen nadadores que pertenecen al equipo de tres
prestigiosas Instituciones Educativas. Es necesario chequear la actuaci�n que tendr� cada
nadador y esto se logra al finalizar las competencias ya que se tendr� el resultado de la
cantidad de medallas que se lleva cada uno.
Coordinaci�n de Programaci�n I (Ingenier�a en Inform�tica) P�gina 2

La Federaci�n dio a conocer que los estilos a nadar para las competencias son 4 y se
presentan a continuaci�n:
(1) Mariposa, (2) Espalda, (3) Pecho y (4) Libre.
Dentro de las reglas establecidas para las competencias un nadador puede participar
en m�s de una competencia pero de diferentes estilos. Al llegar el equipo, el cual se
identifica con un nro. (valor del 1 al 3), deben inscribirse sus nadadores, para ello entregan
su c�dula laminada y de all� se toman los datos del nro. de la c�dula y el nombre. Este
proceso debe hacerlo cada nadador.
Adem�s como un nadador puede participar en varias competencias (no se sabe con
antelaci�n en cuantas participar�) por cada una deber� indicar cual es el estilo (nro. del 1
al 4), que tiempo realizo (en segundos) y en qu� lugar lleg�.
Se estipula, que si lleg� de primero recibe medalla de oro, de segundo medalla de
plata, de tercero medalla de bronce, de cuarto en adelante no tiene medalla.
Evidentemente el nadador pertenece a un equipo, por lo tanto el dato n�mero del equipo,
es un dato que complementa la informaci�n del nadador.
En particular, la federaci�n necesita hacer una evaluaci�n del equipo nro 2, la cual
puede realizar si sabe cu�l es el porcentaje de medallas de oro que obtuvo ese equipo en
relaci�n al total de medallas entregadas entre todas las competencias. En lo que respecta
al equipo nro. 1 cu�l es el porcentaje de nadadores que tiene ese equipo en relaci�n al
total de nadadores que participaron en las competencias. Finalmente cuantos nadadores
participaron en competencias del estilo mariposa.



ahora miren, lo directo y facil de identificar las entradas, cuando nos proporcionan un enunciado asi:


La Federaci�n de nataci�n del Estado Lara, una vez al a�o organiza unas competencias

en donde intervienen nadadores que pertenecen a tres equipos de tres prestigiosas Instituciones Educativas

(cada Instituci�n Educativa tiene un solo equipo).

Dicha Federaci�n requiere de un programa que le permita obtener ciertos resultados de las competencias.

Para ello, dio a conocer que los estilos que se realizar�n en las competencias son 4

y se mencionan a continuaci�n: (1) Mariposa, (2) Espalda, (3) Pecho y (4) Libre.


Adem�s un nadador puede participar en m�s de una competencia del mismo o de diferentes estilos.

La informaci�n disponible por cada nadador es la siguiente:

 C�dula, Nombre, y Equipo de la Instituci�n Educativa al que pertenece (nro. del 1 al 3).

A su vez por cada competencia en la que participa el nadador se tienen los siguientes datos:

Estilo (nro. del 1 al 4), Tiempo realizado en la competencia (seg),

y Lugar en el que lleg� (nro. 1 Primer lugar medalla de oro, nro.

 2 Segundo lugar medalla de plata, nro. 3 Tercer lugar medalla de bronce, y nro. mayor que 4 ninguna medalla).

La informaci�n que debe generar su programa es la siguiente:

Por nadador: C�dula, Nombre, Total de medallas ganadas.

Por la federaci�n:
* Porcentaje de medallas de oro que gan� el Equipo nro. 2,
*
* con relaci�n al total de medallas entregadas entre todas las competencias.
*
* Total de nadadores que participaron en competencias del estilo Mariposa.
*
* Porcentaje de nadadores que tiene el Equipo nro. 1 con relaci�n
*
* al total de nadadores que participaron en las competencias.
*
 */

#include "Controlador.h"
using namespace std;

int main()
{
	Controlador c;
	c.ProcesarFederacion();
	c.ReporteFederacion();
	return 0;
}


