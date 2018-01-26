/*
 * Controlador.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */
   #include "VCliente.h"

   VCliente::VCliente(){}
   
   
   void VCliente::ImprimirCliente(string cedu, string nom, string MallaComprada, float Dscto)
   {
     Limpiar();
     ImprimirEncabezado("\n\tInformacion del Cliente\n",
                        "\t=========== === =======") ;
     ImprimirString("\n\tCedula : ",cedu);
     ImprimirString("\n\tNombre : ",nom);
     ImprimirString("\n\tTipo de Malla Comprada: ",MallaComprada);
     ImprimirNroDecimal("\n\tDescuento : ", Dscto);

     ImprimirLineasBlanco(3);
     Pausa();
   }
   
   

