//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : MLaptop.cpp
//  @ Date : 06/12/2011
//  @ Author : Pedro Gabriel Leal
//
//


#include "MLaptop.h"

MLaptop::MLaptop() {}

MLaptop::MLaptop(string s, int m, float pc, int me, int t){}

float MLaptop :: Det_IncreMa(){
			if(GetMarca()==2 or GetMarca()==3)
				return GetPrecioC()*0.10;
			else
				return GetPrecioC()*0.12;
			return 0;
}
float MLaptop::Det_IncreM(){
				if(Det_Trimestre()==1)
					return GetPrecioC()*0.25;
				else if(Det_Trimestre()==2)
					return GetPrecioC()*0.20;
				else return 0;
}

float MLaptop::Det_MontoIva() {
	return Det_PrecioV()* 0.12;
}

float MLaptop::Det_PrecioV() {
	return GetPrecioC() + Det_IncreM() + Det_IncreMa();
}

float MLaptop::Det_MontoFact() {
	return Det_PrecioV() + Det_MontoIva();
}

