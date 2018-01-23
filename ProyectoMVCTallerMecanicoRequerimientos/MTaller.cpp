/*
 * MTaller.cpp
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#include "MTaller.h"

MTaller::MTaller()
{
	mayor = 0;
	// TODO Auto-generated constructor stub

}

void MTaller :: SetMayor(float m)
{
     mayor = m;
}
float MTaller :: GetMayor()
{
    return mayor;
}

void MTaller::SetAcumingresado(float acumingresado) {
	this->acumingresado = acumingresado;
}

float MTaller::GetAcumingresado()  {
	return acumingresado;
}


void MTaller::SetAcummtoelec(float acummtoelec) {
	this->acummtoelec = acummtoelec;
}

float MTaller::GetAcummtoelec()  {
	return acummtoelec;
}

void MTaller::SetAcummtofrenos(float acummtofrenos) {
	this->acummtofrenos = acummtofrenos;
}

float MTaller::GetAcummtofrenos()  {
	return acummtofrenos;
}

void MTaller::SetAcummtotrend(float acummtotrend) {
	this->acummtotrend = acummtotrend;
}

float MTaller::GetAcummtotrend()  {
	return acummtotrend;
}

void MTaller :: ProcesarMecanico(MMecanico mm) // Relacion uso con MMecanico
{

   if (mm.GetAcMontoComision() > mayor)
      mayor = mm.GetAcMontoComision();
   /* aqui se calcula El mayor monto total cobrado en comisiones;
    * es decir; cada vez que se va a comparar la comision total obtenida
    * por el mecanico, luego de haber procesado todas sus reparaciones. */
}

void MTaller::ProcesarReparacionTaller(MReparacion mr) {

 acumingresado+= mr.GetMontoReparacion();
 /* para calcular -total bs que ingresaron al taller,
  * tenemos que acumular cada monto de cada reparacion,
  * al final obtendremos el monto total ingresado al taller*/

 switch(mr.GetTipoReparacion())
 {
    case 1: acummtoelec+= mr.CalcGanancia();
            break;
    case 2: acummtotrend+= mr.CalcGanancia();
            break;
    case 3: acummtofrenos+= mr.CalcGanancia();
            break;
 }
 /* como dar respuesta a la pregunta:
  *  -tipo de reparacion con mayor ganancia?
  *  pues, cuantos tipos de reparacion hay? 3, cierto?
  *  ok...entonces es un mayor de 3,
  *  yo les habia explicado un mayor de 2,
  *  pero un mayor de 3, es muy parecido:
  *  declaramos 3 acumuiladores, los inicializamos,
  *  se incrementan AQUI  en el PROCESAR,
  *  y se hace una funcion tipo string q calcula el tipo de reparacion mayor. ok
  *  el detalle de este calculo es que se debe acumular
  *  LA GANANCIA OBTENIDA POR CADA REPARACION,en uno de los 3 acumuladores..
  *  para ello, tenemos q calcularla. donde hacerlo?
  *  pues, en la clase reparacion,
  *  al monto de la reparacion le restamos la comision que se le otorga al mecanico
  *  por dicha reparacion;
  *  asi obtenemos la ganancia que acumularemos aqui,
  *  dependiendo, porsupuesto, del tipo de reparacion. ok
  *
  *
  */


}

string MTaller::CalcMayorTipoReparac() {
	string cadenamayor="";
	float mayor;


	//primero se calcula el mayor de los tres
	mayor= acummtoelec;
	if(acummtotrend > mayor)
		mayor= acummtotrend;
	if(acummtofrenos > mayor)
		mayor = acummtofrenos;

  //Luego se calcula QUIEN posee el mayor
	if(acummtoelec == mayor)
		cadenamayor= cadenamayor + "Electrica ";
	if(acummtotrend == mayor)
			cadenamayor= cadenamayor + "Tren Delantero ";
	if(acummtofrenos == mayor)
			cadenamayor= cadenamayor + "Frenos ";

	//..y finalmente, lo retornamos..
	return cadenamayor;


}
