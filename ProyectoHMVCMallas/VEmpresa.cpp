/*
 * Controlador.cpp
 *
 *  Created on: 06/11/2013
 *      Author: Pedro Gabriel Leal
 */
   #include "VEmpresa.h"

   VEmpresa::VEmpresa(){}
   
   void VEmpresa::ImprimirEmpresa(float PorcClie10, float menordscto)
   {
	Limpiar();
    ImprimirEncabezado("\t\t\tInformacion de la Empresa",
    		            "\t\t\t=========== == == =======");

    ImprimirNroDecimal(" \n   Porcentaje de clientes con mas de 10 a�os comprando en la Empresa: ", PorcClie10);
    ImprimirNroDecimal(" \n\n   Menor descuento otorgado: ", menordscto);
    ImprimirLineasBlanco(3);
    Pausa();
   }                             
   
   
    
