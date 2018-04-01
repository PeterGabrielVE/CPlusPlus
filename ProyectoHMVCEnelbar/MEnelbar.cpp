/*Implementaci�n de la clase mayor (.cpp)
 *
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */
#include "MEnelbar.h"

MEnelbar::MEnelbar() {
}

void MEnelbar::SetCapitalEmpieza(float ce) {
	capital_empieza = ce;
}

float MEnelbar::GetCapitalEmpieza() {
	return capital_empieza;
}

void MEnelbar::IncluirSuscriptor(MSuscriptor s) {
	arr_suscr.push_back(s);
}

int MEnelbar::CantSuscriptores() {
	return arr_suscr.size();
}

float MEnelbar::GetCapitalQueda() {
	float cap_queda = capital_empieza;
	for (int i = 0; i < CantSuscriptores(); i++)
		cap_queda += arr_suscr[i].DetRentaMes();
	return cap_queda;
}



int MEnelbar::CantSusctEncimaProm() {
	float p = MontoRentaProm();
	float valor;
	int cont = 0;
	for (int i = 0; i < CantSuscriptores(); i++) {
		valor = arr_suscr[i].DetRentaMes();
		if (valor >= p)
			cont++;
	}
	return cont;
}

int MEnelbar::BuscarSuscriptor(string cod) {
	for (int i = 0; i < CantSuscriptores(); i++)
		if (arr_suscr[i].GetCodigo() == cod)
			return i;
	return -1;
}

MSuscriptor MEnelbar::ObtenerSuscriptor(int i) {
	return arr_suscr[i];
}
float MEnelbar::MontoRentaProm() {
	float acum_rentas = 0;
	for (int i = 0; i < CantSuscriptores(); i++)
		acum_rentas += arr_suscr[i].DetRentaMes();
	if (CantSuscriptores() == 0)
		return 0;
	else
		return acum_rentas / (float) CantSuscriptores();
}
float MEnelbar::MayorRentaMes() {
	float mayor = arr_suscr[0].DetRentaMes();
	for (int i = 1; i < CantSuscriptores(); i++)
		if (mayor < arr_suscr[i].DetRentaMes())
			mayor = arr_suscr[i].DetRentaMes();
	return mayor;
}
float MEnelbar::PorcSusCantImp(){
	float acumci = 0;
	float acumtot = 0;
	for (int i = 0; i < CantSuscriptores(); i++){
		acumtot += arr_suscr[i].DetRentaMes();
		if ((arr_suscr[i].GetImpulsos() >= 1000) and (arr_suscr[i].GetImpulsos() <= 2500))
			acumci += arr_suscr[i].DetRentaMes();
	}
	if (acumtot >0)
		return (acumci*100)/acumtot;
	else
		return 0;
}
float MEnelbar::Prompulsos(){
	float acum = 0;
	for (int i= 0; i<CantSuscriptores(); i++)
		acum+=arr_suscr[i].GetImpulsos();
	if (arr_suscr.size()!=0)
	return acum/arr_suscr.size();
	else
		return 0;
}
void MEnelbar::listsusdebajo(vector<string> &codigo, vector <int> &impulsos){
	float promedio = Prompulsos();
	for (int i= 0; i<CantSuscriptores(); i++)
      if (arr_suscr[i].GetImpulsos()<promedio){
    	  codigo.push_back(arr_suscr[i].GetCodigo());
          impulsos.push_back(arr_suscr[i].GetImpulsos());
}}

