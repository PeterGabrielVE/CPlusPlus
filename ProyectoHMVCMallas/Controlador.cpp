/*
 * Controlador.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador(){}

void Controlador::ProcesarClientes()
 {
  //instanciar
	   MCliente mc;
       VCliente vc;

  //Declarar variables de lectura
    string c,n;
    int tm,a,resp ;
    float m;
      
    do
    {
     //Encabezado de la entrada
      vc.Limpiar();
      vc.ImprimirEncabezado("\tDatos del Cliente","\t===== === ========" );
     
     //Invocar los metodos de la vista pequ�a(VCliente) q leen los datos de la clase peque�a(MCliente)
     c=vc.LeerString("\tCedula: ");
     n=vc.LeerString("\tNombre: ");
     tm=vc.LeerValidarNro("\tTipo de Malla -> (1)Plana (2)Rollo: ",1,2);
     m=vc.LeerValidarNroDecimalValorInicial("\tMetros: ",0);
     a=vc.LeerValidarNroValorInicial("\tAnnos comprando en la empresa: ",0);


     //Setear los datos leidos en la clase Modelo peque�a(MCliente)
     mc.SetCedula(c);
     mc.SetNombre(n);
     mc.SetTipoMalla(tm);
     mc.SetAntiguedad(a);
     mc.SetMetros(m);

     
     //Imprimir Salida de la clase peque�a, invocando el metodo Imprimir de la vist peque�a(VCliente)
     vc.ImprimirCliente( mc.GetCedula(),mc.GetNombre(),
    		             mc.CalcTipoMallaComprada(),mc.CalcDescuento());
     /* De la Clase Madre (MEmpresa) se invoca el metodo ProcesarCliente,
        para que este incremente contadores y acumuladores */
      me.ProcesarCliente(mc);

      resp=vc.LeerValidarNro("\n\tDesea Seguir si(1)  No(2) ? ",1,2);

    }while(resp==1);

 }

void Controlador::ReporteEmpresa(){
    //instancias
	    VEmpresa ve;
    //Imprimir Salida de la clase peque�a, invocando el metodo Imprimir de la vist peque�a(VCliente)
        ve.ImprimirEmpresa(me.CalcPorcClie10(),me.GetMenordscto() );

}
