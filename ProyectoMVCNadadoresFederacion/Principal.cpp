/*
 *  Principal.cpp
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
La Federaci�n de nataci�n del Estado Lara, una vez al a�o organiza unas competencias
en donde intervienen nadadores que pertenecen al equipo de tres prestigiosas Instituciones
Educativas.
Es necesario chequear la actuaci�n que tendr� cada nadador y esto se logra al finalizar las
competencias ya que se tendr� el resultado de la cantidad de medallas que se lleva cada uno.
La Federaci�n dio a conocer que los estilos a nadar para las competencias son 4 y se
presentan a continuaci�n:
(1) Mariposa, (2) Espalda, (3) Pecho y (4) Libre.
Dentro de las reglas establecidas para las competencias un nadador puede participar en m�s
de una competencia del mismo o de diferentes estilos.
Al llegar el equipo, el cual se identifica con un nro. (valor del 1 al 3), deben inscribirse
sus nadadores, para ello entregan su c�dula laminada y de all� se toman los datos del
nro. de la c�dula y el nombre. Este proceso debe hacerlo cada nadador.
Adem�s como un nadador puede participar en varias competencias (no se sabe con antelaci�n en
cuantas participar�) por cada una  deber� indicar cual es el estilo (nro. del 1 al 4), que
tiempo realizo (en segundos) y en que lugar lleg�.
Se estipula, que si lleg� de primero recibe medalla de oro, de segundo medalla de plata,
de tercero medalla de bronce,  de cuarto en adelante no tiene medalla.
Evidentemente el nadador pertenece a un equipo, por lo tanto el dato n�mero del equipo,
es un dato que complementa la informaci�n del nadador.
En particular, la federaci�n necesita hacer una evaluaci�n del equipo nro 2, la cual
puede realizar si sabe cual es el porcentaje de medallas de oro que obtuvo ese equipo
en relaci�n al total de medallas entregadas entre todas las competencias.
En lo que respecta al equipo nro. 1 cual es el porcentaje de nadadores que tiene  ese
equipo en relaci�n al total de nadadores que participaron en las competencias.
Finalmente cuantos nadadores participaron en competencias del estilo mariposa.*/

#include "Controlador.h"

int main()
{
   Controlador c;
   c.ProcesarJornadasNatacion();
   return 0;
}




