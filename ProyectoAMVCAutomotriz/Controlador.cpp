/*
 * Controlador.cpp
 *
 *  Created on: 05/06/2012
 *  Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {}

void Controlador :: Incluir(string ced)
{ 	ve.Limpiar();
	ve.ImprimirEncabezado("\n\n INCLUIR UN VENDEDOR"," ===================");
    ve.ImprimirString("\n Cedula : ", ced);
	string nomb = ve.LeerString("\n\n Nombre: ");
	float monto = ve.LeerValidarNroDecimalValorInicial("\n Monto vendido: ",0);
	MVendedor mve; // Crea el objeto mve
	// Se le da estado al objeto mve MVendedor
	mve.SetCedula(ced);
	mve.SetNombre(nomb);
	mve.SetMontoVend(monto);

	ve.ImprimirNroDecimal("\n Comision: ",mve.Comision());
	ve.ImprimirNroDecimal("\n\n Bono: ",mve.Bono());
	int opi = ve.LeerValidarNro("\n\n\n         Confirma la inclusion 1. Si, 2. No: ",1,2);
	if (opi == 2)
	   return;
		me.IncluirVendedor(mve); // metodo de la clase mempresa
	ve.ImprimirMensaje("\n\n\n       ....... INCLUSION REALIZADA CON EXITO .......");
}

void Controlador :: Modificar(int posicion, MVendedor mve)
{   // solo se podr� modificar el monto vendido
	ve.ImprimirEncabezado("\n\n  MODIFICAR UN VENDEDOR","  =====================");
    float monto_ant = mve.GetMontoVend(); // guarda en la variable monto_ant el monto que ten�a el vendedor
    float monto = ve.LeerValidarNroDecimalValorInicial("\n  Ingrese el nuevo monto vendido: ",0);
    if (monto_ant == monto)
       { ve.ImprimirMensaje("\n\n ...NO HAY CAMBIOS...");
         return;
       }
    int opi = ve.LeerValidarNro("\n\n\n         Confirma la modificacion 1. Si, 2. No: ",1,2);
  	if (opi == 2)
  	   return;
  	mve.SetMontoVend(monto);
  	me.ModificarVendedor(posicion, mve);// metodo de la clase mempresa
    ve.ImprimirMensaje("\n\n\n       ....... MODIFICACION REALIZADA CON EXITO .......");
}

void Controlador :: Eliminar(int posicion)
{   int op =ve.LeerValidarNro("\n\n Confirma la eliminacion 1. Si  2. No: ",1,2);
    if (op == 2)
    	return;
    me.EliminarVendedor(posicion); // metodo de la clase mempresa
    ve.ImprimirMensaje("\n\n\n       ....... ELIMINACION REALIZADA CON EXITO .......");
}

void Controlador::Actualizar()
{ string ced;
  int opc;
  do
  { ve.Limpiar();
    ve.ImprimirEncabezado("\n ACTUALIZACION DE VENDEDOR"," =========================");
    ced = ve.LeerString("\n  Cedula : ");
    int posicion = me.BuscarVendedorCed(ced);
    if (posicion == -1)  // No existe el vendedor
       { opc = ve.LeerValidarNro("\n 1. Incluir  2. Salir: ",1,2);
         if (opc == 1)  // Incluir
            Incluir(ced);
       }
    else // encontro el vendedor
    { MVendedor mve = me.GetVendedor(posicion);
      ve.ImprimirVendedor(mve.GetCedula(),mve.GetNombre(),
               mve.GetMontoVend(),mve.Comision(),mve.Bono());
      opc = ve.LeerValidarNro("\n 1. Modificar  2. Eliminar  3. Salir: ",1,3);
      switch (opc)
        { case 1: Modificar(posicion, mve);
                  break;
          case 2: Eliminar(posicion);
                  break;
        }
    } // else encontro el vendedor
    opc = ve.LeerValidarNro("\n\n  Continuar con actualizacion 1. Si 2. No: ",1,2);
  } while (opc == 1);
}

void Controlador :: ComisionMayorListado ()
{   ve.Limpiar();
    if (me.CantVendedores() == 0)   // El vector esta vac�o
       {  ve.ImprimirMensaje("\n NO HAY VENDEDORES \n\n");
          ve.Pausa();
          return;
       }
    ve.ImprimirNroDecimal("\n  Mayor comision es: ",me.BuscarMayorComision());
    ve.ImprimirLineasBlanco(3);
    ve.ImprimirListaCedulas(me.CedulasVendMayorComision());
}

void Controlador :: ListadoVendedores()
{  if (me.CantVendedores() == 0)   // El vector esta vacio
     { ve.Limpiar();
       ve.ImprimirMensaje("\n NO HAY VENDEDORES \n\n");
       ve.Pausa();
       return;
       }
    me.OrdenarVendedoresXCed( );
   /* Bloque de instrucciones que declara y carga los vectores auxiliares, que se le pasaran a la vista
      para la impresi�n  del listado */
    vector<string> auxcedulas;
    vector<string> auxnombres;
    vector<float> auxmontos;
    vector<float> auxcomisiones;
    vector<float> auxbonos;
    for (int i = 0; i < me.CantVendedores(); ++i)
      { auxcedulas.push_back(me.GetVendedor(i).GetCedula());
        auxnombres.push_back(me.GetVendedor(i).GetNombre());
        auxmontos.push_back(me.GetVendedor(i).GetMontoVend());
        auxcomisiones.push_back(me.GetVendedor(i).Comision());
        auxbonos.push_back(me.GetVendedor(i).Bono());
      }
    // M�todo de la clase VEmpresa que  se encarga de imprimir el listado
    ve.ImprimirListado(auxcedulas, auxnombres, auxmontos, auxcomisiones, auxbonos);
}








