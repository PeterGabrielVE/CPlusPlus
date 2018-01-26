/*
 * Controlador.cpp
 *
 *  Created on: 20/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}


 void Controlador::Estadisticas()
 {

	 //instanciamos la vista GRANDE
	 VHipermercado vh;
	 //invocamos el imprimir
	 vh.ImprimirHipermercado(mh.GetAcumtotvendido(), mh.GetContmueblesdscto());
 }




 /* Esta es otra forma de hacer el controlador..hay profesores que prefieren trabjar asi...
  * Observe que el ImprimirArticlulo se invoca una sola vez.
  * y observ que la variable montoapagar se debe declarar  */


 void Controlador::ProcesarArticulos()
 {



 	MElectrodomestico me;
     MMueble mm;
     VArticulo va;


     string cod, desc, serial, marca ;
     float cst, montoapagar;
     int tipo, tipoe,tipom,garantia,resp;


     do
     {

     	va.Limpiar();
     	va.ImprimirEncabezado("\n\n\tDATOS DEL ARTICULO",
     			                  "\t__________________");
     	cod= va.LeerString("\n\tCodigo: ");
     	desc= va.LeerString("\n\tDescripcion: ");
     	cst=va.LeerValidarNroDecimalValorInicial("\n\tCosto: ",0);
     	tipo= va.LeerValidarNro("\n\tTipo de Articulo -> 1)Electrodomestico  2)Mueble :",1,2);

     	switch(tipo)
     	{
     	case 1:{

     		serial= va.LeerString("\n\tSerial: ");
     		garantia=va.LeerValidarNroValorInicial("\n\tGarantia (en meses): ",0);
     		marca= va.LeerString("\n\tMarca: ");
     		tipoe= va.LeerValidarNro("\n\tTipo de Electrodomestico-> 1.Nevera  2.Lavadora  3.Cocina  4.Secadora :",1,4);

     		me.SetCodigo(cod); //esta en MArticulo(Herencia)
     		me.SetDesc(desc);  // esta en MArticulo (Herencia)
     		me.SetCosto(cst);  // esta en MArticulo (Herencia)
     		me.SetTipo(tipo); //esta en MMArticulo (Herencia)

     		//...y luego seteamos los datos leidos de MELECTRODOMESTICO
     		me.SetSerial(serial); //atributo de MElectrodomestico
     		me.SetGarantia(garantia); //atributo de MElectrodomestico
     		me.SetMarca(marca);  //atributo de MElectrodomestico
     		me.SetTipoelectrodom(tipoe); //atributo de MElectrodomestico


     		montoapagar= me.CalcMontoaPagar();


     		mh.ProcesarElectrodomestico(me);
     	}
     	break;

     	case 2:{

     	    	tipom= va.LeerValidarNro("\n\tTipo de Material del Mueble-> 1. Madera  2.Hierro Forjado  3.Ratan: ",1,3);


     	    	mm.SetCodigo(cod); //esta en MArticulo(Herencia)
     	    	mm.SetDesc(desc);  // esta en MArticulo (Herencia)
     	    	mm.SetCosto(cst);  // esta en MArticulo (Herencia)
     	    	mm.SetTipo(tipo); //esta en MMArticulo (Herencia)

     	    	mm.SetTipomaterial(tipom); //atributo de MMueble

     	    	montoapagar= mm.CalcMontoaPagar();

     	    	mh.ProcesarMueble(mm);
     	}
     	break;
     	}//witch

     	va.ImprimirArticulo(cod,montoapagar);

     	resp = va.LeerValidarNro("\n\t Desea procesar otro Articulo (1=SI, 2=NO)?",1,2);

     }while(resp == 1);

 }


