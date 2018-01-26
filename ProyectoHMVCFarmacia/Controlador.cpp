/*
 * Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador(){}
void Controlador:: ProcesarCompraClientes()
{

       //instancias
         MMiscelaneo mi;
         MMedicina me;
         MCliente mc;
         VCliente vc;
         VGeneral vg;

        //variables de lectura
           string ced;
           string np, nc;
           int t,ca,resp;
           float p;

       //variables de salida de la herencia
           /* en este programa no hay variables de salida respecto a la herencia porque
            * no nos piden nada por  producto, recuerden que la herencia es
            * de productos de medicina y productos de miscelaneos
            */

           //Este programa es de doble ciclo con herencia,
           /*observe las diferencias con programas de ciclo simple con herencia
           (asi son la mayoria de ejercicios de la guia; con ciclo simple)
           identifiquemo clases:
           Clase
           Mediana  ->   Cliente
           Peque�a  ->   Producto(aqui esta la herencia)
           Solo que en este ejercicio no piden nada por al clase farmacia,
           por lo tanto la clase farmacia no existe!!!*/

         //Ciclo que procesa varios clientes

      /*Bloque de instrucciones que permiten leer los datos del cliente.
      Como la clase VCliente hereda de VGeneral, el objeto vc de la clase 
      VCliente puede usar los m�todos de la clase VGeneral para lecturas .
      Estos m�todos son: Limpiar, ImprimirEncabezado,
      LeerString, LeerNro,
      LeerNroDecimal,
      LeerChar,
      LeerValidarNro,
      LeerValidarNroValorInicial,
      LeerValidarNroValorFinal,
      asi como tambien usaremos metodos de VGeneral para majeo de pantalla como lo son:
      Limpiar
      ImprimirEncabezado,
      y si lo desea Pausa(que particularmente yo,
      no lo uso en el controlador, lo hago en las vistas)*/

      do{

    	  vc.Limpiar();
    	  vc.ImprimirEncabezado("\tDATOS DEL CLIENTE",
    			  "\t_________________"); // Metodo heredado de VGeneral

    	  //Leer datos de la clase Mediana
    	  ced = vc.LeerString("\tCedula : ");
    	  nc = vc.LeerString("\tNombre : ");

    	  mc.SetCedula(ced);
    	  mc.SetNombre(nc);

    	  //Inicializar por la clase Mediana

          mc.SetAcMedi(0);
          mc.SetAcMisc(0);
          mc.SetAcDesMedi(0);
          mc.SetAcDesMisc(0);

    	  //ciclo que procesa los productos comprados por el cliente
         do
         {
        	 /*Bloque de instrucciones que permiten leer los datos del producto comprado.
         Como la clase VCliente hereda de VGeneral, el objeto vc de la clase VCliente 
         puede usar los m�todos de la clase VGeneral. */

        	 vc.ImprimirEncabezado("\n\tDATOS DEL PRODUCTO",
        			 "\t__________________");
        	 //leer datos comunes de cada caso de la herencia
        	 np = vg.LeerString("\tNombre del producto: ");
        	 t = vg.LeerValidarNro("\tTipo Producto 1->MEDICINA 2->MISCELANEO : ",1,2);
        	 // Valida el dato leido
        	 p  = vg.LeerValidarNroDecimalValorInicial("\tPrecio : ",0);
        	 ca = vg.LeerValidarNroValorInicial("\tCantidad : ",0);
        	 //Dependiendo el tipo de producto comprado se crea y procesa las subclases(herencia)
             switch(t)
             {
             case 1:
             {
            	 /*Leer datos propios de Medicina-> no hay
            	  *
            	  * Seteamos en MPeque�a TODOS los valores leidos por el producto,
            	  * TANTO LOS GENERALES COMO PROPIOS
            	  * Con los m�todos Set enviamos TODO   a la clase MMedicina,
            	  * y sus clases heredadas; es decir a MMedicina, Mproducto y MArticulo*/

            	 me.SetDesc(np);
            	 me.SetTipo(t);
            	 me.SetPvp(p);
            	 /* el nombre del producto, el tipo y el precio se envia  a MArticulo desde MMedicina, mediante la herencia*/

            	 me.SetCantidad(ca);
            	 //La cantidad se envia a la clase MProducto desde Medicina mediante la herencia

            	 //la clase Mediana MCliente  invoca ProcesarMedicina
            	 mc.ProcesarMedicina(me);
             }
             break;

             case 2:
             {
            	 /*Leer datos propios de MMiscelaneos- > no hay
            	  *
            	  * Seteamos en MPeque�a TODOS los valores leidos por el producto,
            	  * TANTO LOS GENERALES COMO PROPIOS
            	  * Con los m�todos Set enviamos TODO   a la clase MMiscelaneos,
            	  * y sus clases heredadas; es decir a MMiscerlaneos, Mproducto y MArticulo*/

            	 /* Leemos la descripcion, el tipo y el pvp de la clase base MArticulo,
             esto se hace desde la instancia de la clase mediana..
             Porque MMiscelaneo hereda a MArticulo*/
            	 mi.SetDesc(np);
            	 mi.SetTipo(t);
            	 mi.SetPvp(p);
            	 /* el nombre del producto, el tipo y el precio se envia  a MArticulo desde MMiscelaneos, mediante la herencia*/

            	 mi.SetCantidad(ca);
            	 //La cantidad se envia a la clase MProducto desde MMiscelaneo mediante la herencia

            	 //La Clase MCliente Procesa Miscelaneos
            	 mc.ProcesarMiscelaneo(mi);
             }
             break;
             } //switch

         /*leemos una respuesta porque es un ciclo do-while.
         si hubiera el ciclo for, no hay respuesta. ok*/
      resp = vc.LeerValidarNro("\n\tEl cliente desea procesar un nuevo producto 1->SI 2->NO: ",1,2);
         // Valida el dato leido
   } while(resp==1);

      /*Imprimimos por la Clase Mediana*/
   vc.ImprimirCliente(mc.GetCedula(),mc.GetNombre(),mc.CalcMontoBruto(),
		              mc.CalcTotalDsctos(),mc.CalcMontoIva(), mc.CalcMontoNeto() );
   resp = vc.LeerValidarNro("\n\tDesea Procesar otro Cliente 1->SI 2->NO: ",1,2);
  }while(resp==1);

}

