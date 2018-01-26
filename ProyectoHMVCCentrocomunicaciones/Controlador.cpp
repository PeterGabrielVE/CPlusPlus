/*
 * Controlador.cpp
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}

void Controlador::ProcesarTelefonos()
{
 //instancias
	MFijo mf;
	MCelular mc;
	//hay dos vistas, porque la salida de tlf fijos es diferente a la salida de tlf celulares
	VFijo vf;
	VCelular vc;
	VGeneral vg;

	//variables de lectura
	int nro,t,resp,minadic;
	float rentab,mtotpag;

	do
	{
	  vg.Limpiar();
	  vg.ImprimirEncabezado("Datos del Telefono:",
			                "__________________\n");
	  //leemos datos comunes
	  nro=vg.LeerNro("Numero telefono: ");
	  rentab=vg.LeerNroDecimal("renta basica: ");
	  t=vg.LeerValidarNro("1-> Fijo 2->celular: ",1,2);
	  switch(t)
	  {
	  case 1:
	         {
	          //leemos datos propios de MFIJO
	           minadic=vf.LeerNro("Minutos Adicioanales: ");

	           //seteamos TODOS los datos : datos comunes y datos propios de MFijo
	           mf.SetNumero(nro);
	           mf.SetRentabasica(rentab);
	           mf.SetTipo(t);
	           mf.SetMinutoadic(minadic);
               // Imprimimos la salida por telefonos fijos
	           vf.ImprimirFijo(mf.GetNumero(),mf.GetRentabasica(),mf.CalcMontoTotAPagar()  );

	           /*La clase grande (centro de comunicaciones ) invoca el procesarFijo,
	            (para acumular el monto a pagar procesado)*/
	           mcc.ProcesarFijo(mf);
	         }
	         break;

	  case 2:
	  	         {
     	        	//leemos datos propios de MCELULAR
	  	           mtotpag=vc.LeerNroDecimal("Monto total pagado.: ");

	  	         //seteamos TODOS los datos : datos comunes y datos propios de CELULAR
	  	           mc.SetNumero(nro);
	  	           mc.SetRentabasica(rentab);
	  	           mc.SetTipo(t);
	  	           mc.SetMontototalpagado(mtotpag);

	  	         // Imprimimos la salida por telefonos Celulares
	  	           vc.ImprimirCelular(mc.GetNumero(),mc.GetRentabasica(),mc.CalcPagoAdicional()  );

	  	         /*La clase grande (centro de comunicaciones ) invoca el procesarCelular,
	  	         	            (para acumular el monto a pagar procesado)*/
	  	           mcc.ProcesarCelular(mc);
	  	         }
	  	         break;

	      }//switch

	  resp=vg.LeerValidarNro("Desea Procesar otro telefono(si=1/no=2)? ",1,2);
  }while (resp==1);


}

void Controlador::Estadisticas()
{

  VCentroComunicaciones vcc;
  vcc.ImprimirCentroComunicaciones(mcc.GetAcumrecaudado());
}
