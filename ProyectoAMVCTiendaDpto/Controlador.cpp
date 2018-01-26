/*
 * Controlador.cpp
 *
 *  Created on: 09/12/2011
 *  Author: Pedro Gabriel Leal
 */
#include "Controlador.h"
Controlador::Controlador(){}

/* M�todo que lee por teclado los datos del departamento.
   Estos datos son  insertados en el vector a traves del
   m�todo IncluirDepartamento de la clase MTienda  */
   
void Controlador::CargarDatosDepartamentos()
{  string nom;
   MDpto md; // al crearse el objeto md, el atributo acbs se coloca en cero

   vt.Limpiar();
   vt.ImprimirEncabezado("\n\n   ojoDatos de los Departamentos","   ==========================");
   for (int i=0; i<5; i++)
   {   //bloque de instrucciones que permiten leer los datos de los departamentos
       vt.ImprimirNro("\n   Departamento Nro. ",i+1);
       nom = vt.LeerString("\n   Nombre : ");
      //bloque de instrucciones que permiten darle estado al objeto de la clase MDpto
       md.SetNomDpto(nom);
      // md en el atributo acbs tiene cero ya que el contructor de MDpto lo inicializa
       mt.IncluirDepartamento(md);
       /* Si se genero el vector a nivel del constructor de MTienda, en vez de activar
         el m�todo IncluirDepartamento(md), se debe colocar mt.SetDpto(i,md); */
    }  // for
   vt.Pausa();
} 

// Procesa las ventas, actualizando con las mismas el vector de departamentos
void Controlador::ProcesarVentas()
{  int dep, cant, resp;
   float pre;
   MVenta mv;      
   vt.Limpiar();
   /*bloque de instrucciones que lee la cantidad de departamentos que tiene la tienda a
   la que se le van a procesar las ventas y posteriormente lee los nombres de los 
   departamentos, con lo que va creando un vector que luego se enviar�n a la clase
   MTienda*/
   
   //Chequeo de que se esten cargados los datos de los dptos
   if (mt.CantDptos() ==0)
      { vt.Limpiar();
        vt.ImprimirMensaje("\n\n NO se pueden procesar VENTAS no EXISTEN Departamentos\n\n");               
        vt.Pausa();
        return;
        }  
   do
   {   vt.Limpiar();
       vt.ImprimirEncabezado("\n\n   Datos de la venta", "   =================="); 
       //bloque de instrucciones que permiten leer los datos de cada venta
       dep = vt.LeerValidarNro("   Numero del departamento : ",1,mt.CantDptos());
       cant = vt.LeerValidarNroValorInicial("   Cantidad Comprada : ",0);
       pre = vt.LeerValidarNroDecimalValorInicial("   Precio de venta : ",0);
       //bloque de instrucciones que permiten darle estado al objeto de la clase MVenta
       mv.SetNumDpto(dep);
       mv.SetCantVend(cant);
       mv.SetPrecio(pre);
       //metodo de la clase MTienda que procesa cada venta
       mt.ProcesarUnaVenta(mv);    
       resp = vt.LeerValidarNro("   Desea procesar otra venta?  1. Si  2. No : ", 1, 2);
   } while (resp == 1);
} 

// Permite mostrar el reporte que require la tienda
void Controlador::ReporteTienda()
{  //Chequeo de que hayan datos para generar el reporte
	if (mt.CantDptos() ==0)
	      { vt.Limpiar();
	        vt.ImprimirMensaje("\n\n NO EXISTEN DATOS QUE PERMITAN GENERAR LAS SALIDAS REQUERIDAS\n\n");
	        vt.Pausa();
	        return;
	        }
     /*Bloque de instrucciones que solicita al objeto MTienda
     toda la informaci�n que se debe imprimir, hace uso de vectores auxiliares */
     vector<string> auxnom;
     vector<float> auxbsdpto;
     for (int i = 0; i < mt.CantDptos(); ++i)
     {   auxnom.push_back(mt.GetDpto(i).GetNomDpto());
         auxbsdpto.push_back(mt.GetDpto(i).GetAcBs());
     }
     //M�todo de la clase VTienda que  se encarga de imprimir la informaci�n solicitada
     vt.ReporteTienda(auxnom, auxbsdpto,mt.TotalVentasTienda(),mt.PromedioVentasTienda());
     return; 
}
