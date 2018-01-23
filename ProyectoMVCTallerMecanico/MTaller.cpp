/*
 * MTaller.cpp
 *
 *  Created on: 17/10/2013
 *  Autor: Pedro Gabriel Leal
 */

#include "MTaller.h"

#include "MTaller.h"
// Construtor que inicializa en cero el atributo mayor
MTaller :: MTaller()
{
	mayor = 0;
}
void MTaller :: SetMayor(float m)
{
     mayor = m;
}
float MTaller :: GetMayor()
{
    return mayor;
}

/* Actualiza el atributo mayor comparandolo con la comisi�n total
   que recibio el mecanico */
void MTaller :: ProcesarTrabajoMecanico(MMecanico meca) // Relacion uso con MMecanico
{
   if (meca.GetAcMontoComision() > mayor)
      mayor = meca.GetAcMontoComision();
}

