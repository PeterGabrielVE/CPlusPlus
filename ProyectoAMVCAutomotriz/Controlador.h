/*
 * Controlador.h
 *
 *  Created on: 05/06/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_

#include "MEmpresa.h"
#include "VEmpresa.h"
class Controlador
{  private:
      VEmpresa ve;
      MEmpresa me;
   public:
      Controlador();
      void Actualizar();
      void Incluir(string ced);
      void Modificar(int posicion, MVendedor mve);
      void Eliminar(int posicion);
      void ComisionMayorListado();
      void ListadoVendedores();
};
#endif /* CONTROLADOR_H_ */
