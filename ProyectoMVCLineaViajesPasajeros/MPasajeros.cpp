/*
 * MPasajeros.cpp
 *
 *  Created on: 21/10/2013
 *      Author: Alirio Martinez
 */

#include "MPasajeros.h"

MPasajeros::MPasajeros() {}

void MPasajeros::SetCedula(string c){
	cedula = c;}

string MPasajeros::GetCedula(){
	return cedula;}

void MPasajeros::SetEdad(int e){
	edad = e;}

int MPasajeros::GetEdad(){
	return edad;}

void MPasajeros::SetSexo(int s){
	sexo = s;}

int MPasajeros::GetSexo(){
	return sexo;}

