/*
 * MDpto.cpp
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */

#include "MDpto.h"
//Constructor
MDpto :: MDpto() 
{  acbs = 0; }

//Metodos Setters
void MDpto :: SetNomDpto(string n)
{   nomdpto = n; }

void MDpto :: SetAcBs(float ac)
{   acbs = ac; }

//Metodos Getters
string MDpto :: GetNomDpto()
{   return nomdpto; }

float MDpto :: GetAcBs()
{   return acbs; }

// Actualiza el acbs con la venta realizada
void MDpto :: ActualizarMontoDpto(MVenta venta)
{ acbs += venta.MontoVenta(); }


