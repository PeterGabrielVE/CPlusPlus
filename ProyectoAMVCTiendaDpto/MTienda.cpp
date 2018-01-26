/*
 * MTienda.cpp
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */
//Constructor
#include "MTienda.h"

MTienda::MTienda(){}
/* Constructor de MTienda, otra forma de implementar el vector "vecdptos",
 * En esta alternativa se generan las cinco casillas de vecdptos, en el momento que
 * se crea el objeto MTienda en la memoria
MTienda::MTienda():vecdptos(5){} */

void MTienda::SetDpto(int i,MDpto md)
{  vecdptos[i] = md;   }

MDpto MTienda::GetDpto(int i)
{  return vecdptos[i];   }

// Incluye un departamento al final del vector
void MTienda::IncluirDepartamento(MDpto md)
{  vecdptos.push_back(md);  }

// Retorna la cantidad de departamentos que tiene la tienda
int MTienda:: CantDptos()
{  return vecdptos.size();   }

/* Procesa una venta, para ello recibe un objeto de la clase MVenta. 
   Realiza un acceso directo a la posici�n del vector seg�n el nro. del departamento,
   y se le resta 1, porque los vectores en C++ comienzan en la posicion cero.
   Por ejemplo, el Dpto nro.5 se localiza en la casilla 4
   En la posicion que corresponda de acuerdo al nro del dpto, se acumula los bs de la venta */
void MTienda::ProcesarUnaVenta(MVenta venta)
{
 /* Se necesita el nro. del dpto, para poder ubicar la casilla que corresponde en el vector de
	departamentos que tiene la tienda y adem�s se necesita los bs de la venta para actualizar
	el acumulador de bs del departamento donde se hizo la venta.
    Luego MVenta tiene los datos del nro. del dpto, y adem�s el m�todo que calcula los bs de la venta
	De lo anterior, podr�amos realizar la secuencia de instrucciones que se presentan a continuaci�n
	para procesar una venta:
	1) Obtener el dato nro. del dpto que esta dentro de la venta y se guarda en una variable local
	   de tipo int (auxnrodpto), se le resta 1 y as� la variable auxnrodpto tiene la casilla exacta */

	int auxnrodpto = venta.GetNumDpto()- 1;

	/*	2) vectdptos[auxnrodpto] representa un objeto de la clase MDpto, que es precisamente el departamento al
	    que corresponde la venta que se realiz�.
	    Luego se puede activar cualquier m�todo de la clase MDpto, y como lo que se necesita es actualizar el acbs,
	    el m�todo que realiza esta operaci�n es ActualizarMontoDpto(venta) */

	vecdptos[auxnrodpto].ActualizarMontoDpto(venta);

	}

//Metodo que retorna las ventas totales entre todos los departamentos
float MTienda::TotalVentasTienda()
{ float acum = 0;
  for (int i=0; i< CantDptos(); ++i)  
    acum += vecdptos[i].GetAcBs();
  return acum;     
}

//Metodo que retorna el promedio de las ventas entre los departamentos
float MTienda::PromedioVentasTienda()
{ if (CantDptos() != 0)
     return TotalVentasTienda()/CantDptos();
  return 0;    
}
