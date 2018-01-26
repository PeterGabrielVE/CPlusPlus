/*
 * MServPrest.cpp
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */
#include "MServPrest.h"
MServPrest::MServPrest()  {}

void MServPrest::SetDia(int d)
{	dia = d; }

void MServPrest::SetTipo(int t)
{	tipo = t; }

int MServPrest::GetDia()
{	return dia; }

int MServPrest::GetTipo()
{	return tipo; }
