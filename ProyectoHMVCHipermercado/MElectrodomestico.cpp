/*
 * MElectrodomestico.cpp
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */


#include "MElectrodomestico.h"


MElectrodomestico::MElectrodomestico() {
	// TODO Auto-generated ructor stub

}

void MElectrodomestico::SetGarantia(int g) {
	garantia = g;
}
void MElectrodomestico::SetMarca(string m) {
	marca = m;
}

void MElectrodomestico::SetSerial(string s) {
	serial = s;
}

void MElectrodomestico::SetTipoelectrodom(int te) {
	tipoelectrodom = te;
}

int MElectrodomestico::GetGarantia()  {
	return garantia;
}

string MElectrodomestico::GetMarca()  {
	return marca;
}

string MElectrodomestico::GetSerial()  {
	return serial;
}

int MElectrodomestico::GetTipoelectrodom()  {
	return tipoelectrodom;
}

float MElectrodomestico::CalcPvp() {
	return GetCosto() + (GetCosto()*0.40);
}

float MElectrodomestico::CalcFlete() {
	return CalcPvp() * 0.03;
}

float MElectrodomestico::CalcMontoaPagar() {
	return CalcPvp() + CalcFlete();
}


