/*
 * MTienda.cpp
 *
 *  Created on: 12/11/2013
 *      Author: Pedro Gabriel Leal
 */

#include "MTienda.h"

MTienda::MTienda() {
	// TODO Auto-generated ructor stub

	 acganancia=0;
	 contvint=contlt=contld=0;

	 menorcostonetoDig=999999999;//Req 1
	 menorcostoneto=   999999999;//Req 2

	 acumpnetotrad40=0;//Req 3
	 contador40=0;//Req 3

	 mayorpvpD=0;  //Req 4

	 titulomayorD="";

	 autormayorD="";
}

//set
void MTienda::SetAcganancia(float acgan)
{
    acganancia = acgan;
}

void MTienda::SetContld(int cld)
{
    contld = cld;
}

void MTienda::SetContlt(int clt)
{
    contlt = clt;
}

void MTienda::SetContvint(int cvi)
{
    contvint = cvi;
}

void MTienda::SetMenorcostonetoDig(int mencnDig) {//Req 1
	menorcostonetoDig = mencnDig;
}

void MTienda::SetMenorcostoneto(int menorcn) {//Req 2
	menorcostoneto = menorcn;
}

void MTienda::Setacumpnetotrad40(float acumpneto40) { //Req 3
	acumpnetotrad40 = acumpneto40;}

void MTienda::Setcontador40(int cont40) { //Req 3
		contador40 = cont40;
	}

void MTienda::SetMayorpvpD(float mayorpD) { //Req 4
	mayorpvpD = mayorpD;
}

void MTienda::SetAutormayorD(string autormayD) { //Req 4
	autormayorD = autormayD;
}
void MTienda::SetTitulomayorD(string titulomayD) { //Req 4
	titulomayorD = titulomayD;
}



//get
float MTienda::GetAcganancia()
{
    return acganancia;
}

int MTienda::GetContld()
{
    return contld;
}

int MTienda::GetContlt()
{
    return contlt;
}

int MTienda::GetContvint()
{
    return contvint;
}

int MTienda::GetMenorcostonetoDig() { //Req1
	return menorcostonetoDig;
}

int MTienda::GetMenorcostoneto()  {//Req2
	return menorcostoneto;
}

float MTienda::Getacumpnetotrad40()  { //Req3
	return acumpnetotrad40;
}

int MTienda::Getcontador40()  {//Req3
	return contador40;
}

float MTienda::GetMayorpvpD()  { //Req4
	return mayorpvpD;
}

string MTienda::GetAutormayorD()  { //Req4
	return autormayorD;
}

string MTienda::GetTitulomayorD()  { //Req4
	return titulomayorD;
}

//Procesar
void MTienda::ProcesarTradicional(MTradicional mt)
{

	++contlt;

	acganancia+=mt.CalcGanancia(); //ACUMULAMOS LA GANANCIA POR LA VENTA DEL LIBRO TRADICIONAL

	if(mt.GetTipocompra()==2)
		++contvint;

    if(mt.CalcCostoNeto() < menorcostoneto) //Req 2
	    	menorcostoneto = mt.CalcCostoNeto();

    if(mt.CalcGanancia() > mt.CalcCostoNeto()*0.40 ) //Req 3
    {
    	acumpnetotrad40+= mt.CalcPrecioNeto();
        ++contador40;
    }

}

void MTienda::ProcesarDigital(MDigital md)
{
	++contld;/*AQUI INCREMENTAMOS EL contador40 DE LIBROS DIGITAL,
	           EL CUAL LO USAREMOS PARA CALCULAR EL TIPO DE LIBRO CON MAYOR VENTA*/
    acganancia+=md.CalcGanancia(); //ACUMULAMOS LA GANANCIA POR LA VENTA DEL LIBRO DIGITAL

    if(md.CalcCostoNeto() < menorcostonetoDig) //Req 1
    	menorcostonetoDig = md.CalcCostoNeto();

    if(md.CalcCostoNeto() < menorcostoneto)     //Req 2
    	    	menorcostoneto = md.CalcCostoNeto();

    if(md.CalcPrecioNeto() > mayorpvpD ) //Req 4
    {
     mayorpvpD= md.CalcPrecioNeto() ;
     autormayorD= md.GetAutor();
     titulomayorD= md.GetTitulo();
    }

}

float MTienda::CalcPorcVInt()
{
	if(contlt!=0)
		return (contvint *100)/contlt;
	else
		return 0;

}

string MTienda::CalcMayorTipo()
{
	if(contlt >contld)
		return "Tradicional";
	 else
	   if(contld >contlt)
		  return "Digital";
	     else
	      return "Son Iguales";
}



float MTienda::CalcPromedioPnetoTrad40() {/* <-Req 3*/
 if (contador40!=0)
	 return acumpnetotrad40/contador40;
 else return 0;
}










