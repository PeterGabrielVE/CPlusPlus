/*
 * Author: Pedro Gabriel Leal
 */

#include "MMiscelaneo.h"
MMiscelaneo:: MMiscelaneo(){}
//Determina y retorna el descuento para el miscelaneo (7%)
float MMiscelaneo:: CalcDscto()
{
      return CalcMontoProducto() * 0.07 ;
}
