//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : MEscritorio.h
//  @ Date : 06/12/2011
//  @ Author : Pedro Gabriel Leal
//
//


#if !defined(_MESCRITORIO_H)
#define _MESCRITORIO_H
#include "MEquipo.h"

class MEscritorio : public MEquipo {
public:
	MEscritorio();
	MEscritorio(string s, int m, float pc, int me, int t);
	float Det_IncreMa();
	float Det_IncreM();
	float Det_MontoIva();
	float Det_PrecioV();
	float Det_MontoFact();
};

#endif  //_MESCRITORIO_H
