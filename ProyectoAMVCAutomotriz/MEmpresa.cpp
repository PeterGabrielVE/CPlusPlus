/*
 * MEmpresa.cpp
 *
 *  Created on: 05/06/2012
 *  Author: Pedro Gabriel Leal
 */
#include "MEmpresa.h"

MEmpresa::MEmpresa() {}

// Ejecuta el criterio de ordenamiento
bool CompxCed(MVendedor a, MVendedor b)
{  // Se usa "<" porque se requiere orden ascendente
   return a.GetCedula() < b.GetCedula();
}

//Almacena un dato del tipo MVendedor, en la casilla indicada por posicion
void MEmpresa ::SetVendedor(int posicion, MVendedor mve)
{ vec_vend[posicion] = mve; }

/* Retorna el objeto  MVendedor que se encuentra ubicado,
   en la casilla indicada por el par�metro posici�n */
MVendedor  MEmpresa::GetVendedor (int  posicion)
{ return vec_vend[posicion]; }

// Retorna la cantidad de vendedores de la empresa, es decir el tama�o de vec_vend
int MEmpresa :: CantVendedores()
{ return vec_vend.size(); }

// Incluye un vendedor al final del vector
void MEmpresa::IncluirVendedor(MVendedor mve)
{   vec_vend.push_back(mve);   }

/* Modifica dato(s) de un vendedor.
   NOTA: Para utilizar este m�todo, es necesario tener la ubicaci�n exacta del vendedor
   que se desea modificar.
   La ubicaci�n la toma el par�metro posici�n.
   Para localizar la posici�n, podr�a utilizarse alg�n m�todo de b�squeda */
void MEmpresa :: ModificarVendedor(int posicion, MVendedor mvemod)
{  SetVendedor(posicion, mvemod);  }

/* Elimina el vendedor que se encuentra el la posici�n especificada por el par�metro posicion */
void MEmpresa::EliminarVendedor(int posicion)
{
	vec_vend.erase(vec_vend.begin() + posicion);
	/* posicion es el nro. de la casilla donde se encuentra el vendedor  que se requiere eliminar.
	Por ejemplo: suponga que  posicion es 2, entonces se elimina el tercer vendedor del vector,
	el cual se encuentra en la casilla nro. 2  */

}

/* Ordena el vector, a trav�s de m�todo sort de la librer�a algorithm.
   Hace uso del m�todo anterior, que ejecuta el criterio de ordenamiento.
   El ordenamiento es ascendente por el dato c�dula del vendedor.
   Al finalizar la ejecuci�n del m�todo, el vector original queda ordenado */
void MEmpresa::OrdenarVendedoresXCed()
{  if (CantVendedores() > 0)
       sort(vec_vend.begin(),vec_vend.end(),CompxCed);
}

/* Busca en forma secuencial un vendedor, teniendo como par�metro la c�dula.
   Si lo encuentra, retorna la posici�n donde est� ubicado; en caso contrario
   retorna -1, para indicar que el vendedor no existe en la empresa */
int MEmpresa:: BuscarVendedorCed(string ci)
{ for (int i=0; i < CantVendedores(); ++i)
      if (vec_vend[i].GetCedula() == ci)
           return i;
       return -1;
}

// Busca el monto de la mayor comisi�n
float MEmpresa:: BuscarMayorComision()
{   float mayor = GetVendedor(0).Comision();
    // otra forma float mayor=vec_vend[0].Comision();
    for (int i=1; i < CantVendedores(); ++i)
       if (GetVendedor(i).Comision() > mayor)
           mayor = GetVendedor(i).Comision();
   return mayor;
}

// Cuenta la cantidad de vendedores que obtuvieron la mayor comisi�n
int MEmpresa::TotalVendedoresMayorComision()
{
    float mayor = BuscarMayorComision();
    int ct = 0;
    for (int i=0; i < CantVendedores(); ++i)
       if (GetVendedor(i).Comision() == mayor)
            ++ ct;
    return ct;
}

/* Retorna un vector de string, que contiene las c�dulas de los vendedores
   que obtuvieron la mayor comisi�n */
vector<string> MEmpresa::CedulasVendMayorComision()
{
     float mayor = BuscarMayorComision();
     vector <string> vced;
     for (int i=0; i < CantVendedores(); ++i)
       if (GetVendedor(i).Comision() == mayor)
           vced.push_back(GetVendedor(i).GetCedula());
     return vced;
}










