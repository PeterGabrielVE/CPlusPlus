//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : MEmpresa.cpp
//  @ Date : 06/12/2011
//  @ Author : Pedro Gabriel Leal
//
//


#include "MEmpresa.h"
#include "MEscritorio.h"
#include "MLaptop.h"

MEmpresa::MEmpresa() {
	acum_ma=acum_m=acum_montot=0;
	cont_laptop=cont_equipos=cont_escri=0;
}

void MEmpresa::ProcesaEscritorio(MEscritorio me) {
	acum_ma +=me.Det_IncreMa();
	cont_equipos++;
	cont_escri++;
	acum_m +=me.Det_IncreM();
	acum_montot +=me.Det_MontoFact();
}

void MEmpresa::ProcesarLaptpo(MLaptop ml) {
	acum_ma +=ml.Det_IncreMa();
	cont_equipos++;
	cont_laptop++;
	acum_m +=ml.Det_IncreM();
	acum_montot +=ml.Det_MontoFact();
}

float MEmpresa::GetAcum_Ma() {
	return acum_ma;
}

float MEmpresa::GetAcum_M() {
	return acum_m;
}

float MEmpresa::GetAcum_MontoT() {
	return acum_montot;
}

float MEmpresa::Det_IncreT() {
	return acum_ma+acum_m;
}

float MEmpresa::PorcLaptop(){
	return float(cont_laptop)/ cont_equipos *100;
}

float MEmpresa::PorcEscri(){
	return float(cont_escri)/ cont_equipos * 100;
}
