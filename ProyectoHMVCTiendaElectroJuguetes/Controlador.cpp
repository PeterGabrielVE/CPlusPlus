/*
 * Controlador.cpp
 *
 *  Created on: 11/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador()
{
	// TODO Auto-generated constructor stub

}

void Controlador::ProcesarArticulos()
{

	//Instancias
	  MElectrodomesticos me; //relacion de AGREGACION
	  MJuguetes mj; //relacion de AGREGACION
	  VElectrodomesticos ve; //relacion de AGREGACION
	  VGeneral vg; // relacion de AGREGACION


	//variables de lectura
	  string cod, desc,col;
	  float cost,pv;
	  int  t,resp;

	  /*no hay variables de salida porque hay dos vistas por la herencia
	  y se imprime en cada opcion del switch*/

	do{
		ve.Limpiar();
		ve.ImprimirEncabezado("\n\n\tDatos  del Articulo",
						          "\t___________________");
		//leer datos comunes
		cod=vg.LeerString("\n\tCodigo: ");
	    desc=vg.LeerString("\n\tDescripcion: ");
	    cost=vg.LeerNroDecimal("\n\tCosto: ");
	    t=vg.LeerValidarNro("\n\tTipo de Articulo (1)Electrodomestico  (2) Juguetes :",1,2);

	    /*Nota
	     * Observe que para leer los datos comunes, podemos hacerlo con cualquiera de las vistas
	     * eso sucede en el caso de que hayan vistas de la herencia (VJuguete, VElectrodomestico),
	     * porque de existir la clase puente, VProducto,
	     * se hubiera utilizado dicha vista para leer los datos comunes, como generalmente lo hacemos. ok
	     * peor en este caso no aplica porque no existe tal clase.
	     */


	 switch(t)
	 {
	 case 1: {
		         //leer datos propios de la clase Electrodomestico
		          col=ve.LeerString("\n\tColor: ");
		          /*RECUERDEN Que \n permite bajar a la proxima linea y \t deja 8 espacios,
		           * si desea djar 16 espacio : \t\t
		           */
                 //setear TODOS los datos leidos en MJuguete
		          me.SetCodigo(cod);
		          me.SetDesc(desc);
		          me.SetCosto(cost);
		          me.SetTipo(t);
		          me.SetColor(col);

		          //imprimir salida por la subclase(Electrodomestico)
		          ve.ImprimirElectrodomesticos(me.GetCodigo(),me.GetDesc(), me.GetColor(),me.CalcularPvp());

		          //La clase Grande (MTienda) invoca PROCESARELECTRODOMESTICOS
		           //NO HAY PROCESARELECTRODOMESTICO porq no hay salida de la tienda por electrodomestico
		      }
	 break;

	 case 2: {
		         //Leer datos propios de la clase Juguete:
                   pv=vg.LeerValidarNroDecimalValorInicial("\n\tPrecio de venta: ", cost);
                   /* Recuerde que el precio de venta es un dato de entrada por juguete,
                    * pero no aparece entre los atributos de Mjuguete porque lo heredamos de MArticulo. ok
                    */
                 //Setear TODOS los datos en la clase MJuguete
	 		      mj.SetCodigo(cod);
	 		      mj.SetDesc(desc);
	 		      mj.SetCosto(cost);
	 		      mj.SetTipo(t);
	 		      mj.SetPvp(pv);

	 		     //imprimir salida por la subclase(Juguete)
	 		      //    no aplica

	 		      //La clase Grande (MTienda) invoca PROCESARJUGUETE
	 		     //si HAY PROCESARJUGUETE porq hay salida de la tienda por JUGUETE
	 		      mt.ProcesarJuguetes(mj);
	          }
	 	 break;
	 }//switch

	  resp=ve.LeerValidarNro("\n\tDesea procesar otra venta (si=1/no=2 )?",1,2);
	 }while (resp==1);
}

  void Controlador::Estadisticas()
  {

	//imprimir salida por la clase Grande(MTienda)
	 //instanciamos la clase VTienda - relacion de AGREGACION
	  VTienda vt;
	vt.ImprimirTienda(mt.GetAcumgananciajug());
 }


  /* Respecto a las instancias,
   * como MJuguete, MElectrodomestico,
   * VJuguete, VElectrodomestico
   * se utulizan solo en ProcesarArticulos,
   *  es por ello que se declaran como instancias
   *  locales en dicho metodo(AGREGACION)
   *
   *
   *  y como VTienda solo se utiliza en Estadisticas
   *  es por ello que se declara como instancia
   *  local en dicho metodo
   *
   *  Observe que MTienda se utilia tanto en ProcesarArticulos como en Estaditicas,
   *  por ello, es una INSTANCIA DEL CONTROLADOR.OK
   *
   *  EN RESUMEN, CUANDO HAY MENU,SUCEDE ESTO..
   *  Y EL METODO PROCESAR DEL CONTROLADOR INSTANCIARA LAS SUBCLASES (MJuguete, MElectrodomestico en nuestro caso)
   *  y tambien instanciara las vistas de las subclases o la vista de la clase peque�a.
   *
   *  y el metodo ESTADISTICAS intanciara la Vista Grande
   *
   *  y el controlador declarara comno ATRIBUTO LA CLASE GRANDE, EN NUESTRO CASO MTIENDA. OK
   *
   *  */




