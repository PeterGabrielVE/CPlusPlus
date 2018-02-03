/*
 * articulo.cpp
 *
 *  Created on: 29/05/2012
 *      Author: Pedro Gabriel Leal
 */

#include "articulo.h"
#include"vendedor.h"

articulo::articulo() {
	// TODO Auto-generated constructor stub

}
void articulo::inicializar()
{
	contArtV5=0;
	contArtV5y8=0;
	contArtV8=0;
	contpromVmayor8=0;
	acumVenta=0;
	acumComision=0;
	acumpromVmayor8=0;
}
void articulo::asignarPrecioA(float PA)
{
	PrecioA=PA;
}
float articulo::obtenerPrecioA()
{
	return PrecioA;
}
float articulo::calComision()
{
	float Comision;
	if(obtenerPrecioA()<5000)
		Comision=obtenerPrecioA()*0.03;
	else
	   if(obtenerPrecioA()>=5000 && obtenerPrecioA()<=8000)
	  	   Comision=obtenerPrecioA()*0.05;
	   else
		   if(obtenerPrecioA()>8000)
		   		Comision=obtenerPrecioA()*0.07;
	return Comision;
}
void articulo::acumularComision()
{
	acumComision=acumComision+ calComision();
}
void articulo::contarArtV5()
{
	if(obtenerPrecioA()<5000)
		contArtV5=contArtV5+1;
}
void articulo::contarArtV5y8()
{
	if(obtenerPrecioA()>=5000 && obtenerPrecioA()<=8000)
		contArtV5y8=contArtV5y8+1;
}
void articulo::contarArtV8()
{
	if(obtenerPrecioA()>=8000)
		contArtV8=contArtV8+1;
}
void articulo::acumularVenta()
{
	acumVenta=acumVenta+obtenerPrecioA();
}
float articulo::calpromV()
{
	float promV;
	promV=acumVenta/30;
	return promV;
}
float articulo::obteneracumComision()
{
	return acumComision;
}
float articulo::obteneracumVenta()
{
	return acumVenta;
}
int articulo::obtenercontArtV5()
{
	return contArtV5;
}
int articulo::obtenercontArtV5y8()
{
	return contArtV5y8;
}
int articulo::obtenercontArtV8()
{
	return contArtV8;
}
