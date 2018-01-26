/*
 * VEmpresa.cpp
 *
 *  Author: Pedro Gabriel Leal
 */

#include "VEmpresa.h"

VEmpresa::VEmpresa() {}

// Imprime la informaci�n de un vendedor
void VEmpresa :: ImprimirVendedor(string ced,string nom,
                 float monto, float comision, float bono)
{  Limpiar();
   ImprimirEncabezado("\n DATOS DEL VENDEDOR"," ==================");
   ImprimirString("\n Cedula: ",ced);
   ImprimirString("\n\n Nombre: ",nom);
   ImprimirNroDecimal("\n\n Monto Vendido: ",monto);
   ImprimirNroDecimal("\n\n Comision: ",comision);
   ImprimirNroDecimal("\n\n Bono: ",bono);
   ImprimirLineasBlanco(2);
}

// Imprime un listado con la informaci�n de todos los vendedores
void VEmpresa :: ImprimirListado(vector<string> auxcedulas,
             vector<string> auxnombres, vector<float> auxmontos,
             vector<float> auxcomisiones, vector<float> auxbonos)
{  Limpiar();
   /*Bloque de instrucciones que permite imprimir la informaci�n
   de los vendedores que se encuentran en los respectivos vectores*/
   ImprimirEncabezado("\n\n DATOS DE LOS VENDEDORES"," =======================");
   ImprimirLineasBlanco(1);
   ImprimirStringJustificado("Cedula",8);
   ImprimirStringJustificado("Nombre",20);
   ImprimirStringJustificado("Monto Vendido",18);
   ImprimirStringJustificado("Comision",12);
   ImprimirStringJustificado("Bono",12);
   ImprimirLineasBlanco(2);
   /*Instrucciones que imprimen por cada vendedor: la c�dula,que se encuentra en el
     vector auxcedulas, el nombre que se encuentra en el vector auxnombres y as� toda la informaci�n.
     Se recorren los vectores con un for*/
   for(unsigned int i=0; i < auxcedulas.size(); i++)
   { ImprimirStringJustificado(auxcedulas[i],8);
     ImprimirStringJustificado(auxnombres[i],20);
     ImprimirNroDecimalJustificado(auxmontos[i],18);
     ImprimirNroDecimalJustificado(auxcomisiones[i],12);
     ImprimirNroDecimalJustificado(auxbonos[i],12);
     ImprimirLineasBlanco(1);
   }
   ImprimirLineasBlanco(2);
   Pausa();
}

// Imprime un listado de cedulas
void VEmpresa:: ImprimirListaCedulas(vector<string> auxcedulas)
{  ImprimirEncabezado("\n\n Listado de Cedulas de Vendedores con mayor comision"," ");
ImprimirStringJustificado("\n  Cedula",8);
   ImprimirLineasBlanco(2);
   for(unsigned int i=0; i < auxcedulas.size(); i++)
      { ImprimirStringJustificado(auxcedulas[i],8);
        ImprimirLineasBlanco(1);
      }
   ImprimirLineasBlanco(2);
   Pausa();
}
