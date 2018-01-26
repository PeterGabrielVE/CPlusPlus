/*
 * Author: Pedro Gabriel Leal
 */

#include "MCliente.h"

//Constructor, se inicializan los acumuladores
MCliente:: MCliente()
{
	ac_misc=ac_medi= ac_des_medi=ac_des_misc=0;
}


void MCliente::SetAcMedi(float ac_me)
{
    ac_medi = ac_me;
}

void MCliente::SetAcMisc(float ac_mi)
{
    ac_misc = ac_mi;
}

void MCliente::SetAcDesMedi(float ac_des_me)
{
    ac_des_medi = ac_des_me;
}

void MCliente::SetAcDesMisc(float ac_des_mi)
{
    ac_des_misc = ac_des_mi;
}

float MCliente::GetAcMedi()
{
    return ac_medi;
}

float MCliente::GetAcMisc()
{
    return ac_misc;
}

float MCliente::GetAcDesMedi()
{
    return ac_des_medi;
}

float MCliente::GetAcDesMisc()
{
    return ac_des_misc;
}


/*M�todo que recibe un objeto de la clase MMedicina para acumularle
 * el monto del producto y el descuento de la medicina, lo cual permitira actualizar
los acumuladores: ac_medi y ac_des_medi*/

void MCliente :: ProcesarMedicina(MMedicina me)
{
   ac_medi += me.CalcMontoProducto();
   ac_des_medi += me.CalcDscto();
}

/*M�todo que recibe un objeto de la clase MMiscelaneo para acumularle
 * el monto del producto y el descuento de la medicina, lo cual permitira actualizar
los acumuladores: ac_misc y ac_des_misc*/

void MCliente :: ProcesarMiscelaneo(MMiscelaneo mi)
{  
   ac_misc += mi.CalcMontoProducto();
   ac_des_misc += mi.CalcDscto();
}
//Calcula y retorna el monto total bruto 
float MCliente:: CalcMontoBruto()
{
   return ac_misc + ac_medi;
}
//Calcula y retorna el monto del descuento 
float MCliente :: CalcTotalDsctos()
{
   return ac_des_medi + ac_des_misc;
}
//Calcula y retorna el monto del IVA 
float MCliente :: CalcMontoIva()
{
   return (ac_misc - ac_des_misc)  * 0.12;
}
//Calcula y retorna el monto total a cancelar 
float MCliente :: CalcMontoNeto()
{
   return CalcMontoBruto() - CalcTotalDsctos() + CalcMontoIva();
}
