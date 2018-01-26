/*
 * Author: Pedro Gabriel Leal
 */

#include "MMedicina.h"

MMedicina:: MMedicina(){}
//Determina y retorna el descuento para la medicina (40%)
float MMedicina:: CalcDscto()
{
      return CalcMontoProducto() * 0.40;
}
