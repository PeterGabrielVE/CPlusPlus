/*
 * MEmpresa.h
 *
 *  Created on: 05/06/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef MEMPRESA_H_
#define MEMPRESA_H_


#include "MVendedor.h"
#include <vector>
#include<algorithm> // para ordenar el vector usando el sort
class MEmpresa
{ private:
    vector<MVendedor> vec_vend;
  public:
    MEmpresa();
    void SetVendedor(int posicion, MVendedor mve);
    MVendedor GetVendedor(int posicion);
    int CantVendedores();
    void IncluirVendedor(MVendedor mve);
    void ModificarVendedor(int posicion,MVendedor mvemod);
    void EliminarVendedor(int posicion);
    void OrdenarVendedoresXCed();
    int BuscarVendedorCed(string ci);
    float BuscarMayorComision();
    int TotalVendedoresMayorComision();
    vector<string> CedulasVendMayorComision();
};
#endif /* MEMPRESA_H_ */
