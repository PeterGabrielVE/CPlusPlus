/*
 * VEmpresa.h
 *
 *  Author: Pedro Gabriel Leal
 */

#ifndef VEMPRESA_H_
#define VEMPRESA_H_
#include <vector>
#include "VGeneral.h"
class VEmpresa : public VGeneral
{  public:
      VEmpresa();
      void ImprimirVendedor(string ced,string nom,float monto, float comision, float bono);
      void ImprimirListado( vector<string> auxcedulas,
                                       vector<string> auxnombres,
                                       vector<float> auxmontovend,
                                       vector<float> auxcomisiones,
                                       vector<float> auxbonos);
      void ImprimirListaCedulas(vector<string> auxcedulas);
};
#endif /* VEMPRESA_H_ */
