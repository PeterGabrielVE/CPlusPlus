/*
 * Author: Pedro Gabriel Leal
 */

//Constructor
#include "MProducto.h"
MProducto:: MProducto(){}


//set
void MProducto:: SetCantidad(int ca)
{
     cantidad = ca;
}
//Get

int MProducto:: GetCantidad()
{
       return cantidad;
}

float MProducto:: CalcMontoProducto()
{
      return cantidad * GetPvp();//
}
