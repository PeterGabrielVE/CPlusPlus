


/*
 * Controlador.cpp
 *
 *  Created on: 21/10/2013
 *  Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub

}

void Controlador::ProcesarLinea()

{
//instanciar
MPasajeros mps;
MViaje mv;
MLinea ml;
VPasajeros vps;
VViaje vv;
VLinea vl;

//variables de lectura de datos
string c,p;
int ed, s, cp, hs, ciu,resp;

//ciclo externo
do
{

	//encabezados
	system ("cls");
	cout << "\n\n\t\t\tDATOS DEL VIAJE";
	cout << "\n\t\t\t===============" << endl;

	//Leer Datos
	/*Se solicita al objeto de la clase VViaje
	 * que proceda a leer cada dato del viaje */
    p=vv.LeerPlaca();
    ciu=vv.LeerCuidadDestino();
    hs=vv.LeerHoraSalida();
    cp=vv.LeerCantidadPasajeros();

    //Setear datos
    /*Se le da estado al objeto de la clase MViaje. */
    mv.SetPlaca(p);
    mv.SetCiudad(ciu);
    mv.SetHoraSalida(hs);
    mv.SetCantPasajeros(cp);

    /*INICIALIZACION -> se inicializa acumuladores, contadores, mayor y/o menor de muchos
    		  de la clase MEDIANA (MViaje)*/
    /*el acumulador de descuento de los pasjeros de la tercera edad comenzar�n en cero,
     * lo cual indica que no se le ha procesado ningun viaje*/
  mv.SetAcumdscto(0);

  for (int i=0; i< mv.GetCantPasajeros(); ++i)
  {
	//encabezados
	  cout <<"\n\n\t\t\tDATOS DEL PASAJERO";
	  cout <<"\n\t\t\t====================";

	//ciclo interno-> clase peque�a-> PASAJERO

	//Leer Datos clase peque�a-> MPasajero
	/*Se solicita al objeto de la clase VPasajero que proceda a leer cada dato del pasajero */
	c=vps.LeerCedula()  ;
	ed=vps.LeerEdad();
	s=vps.Leersexo();

	//setear datos en clase peque�a
    //Se le da estado al objeto de la clase MPasajero
	mps.SetCedula(c);
	mps.SetEdad(ed);
	mps.SetSexo(s);

	//Clase Mediana->MViaje PROCESA clase PEQUE�A->MPasajero
	/* metodo encargado de incrementar el acumulador de desctos otorgado a los pasajeros de la tercera edad..,
   	 * (se le pasa como parametro MPsajero, para que, a traves de esta clase, INVOQUE el metodo calcular descto,
   	 * y asi acumularlo)
	 * Luego de procesar todas los pasajeros, ese acumulador tendr� el monto total de descuento aotorgado
	 *
				    (Relacion de uso MPasajero con MViaje) */
	mv.ProcesarPasajeros(mps);
  }

  //Imprmir clase mediana- > MViaje
  /* se imprime aqui porque luego de ejecutar el ciclo interno ya se ha procesado los pasajeros del viaje,
   * y ya se incrementado acumuladores, contadores, mayor y/o menor de muchos
   * de la clase mediana->MViaje , y se tienen valores finales que producen las salidas deseadas por viaje
   */
   vv.ImprimirViaje(mv.GetPlaca(), mv.DetTurno(),mv.CalcMontoTotViaje());

   //Clase Grande->MLinea PROCESA clase MEDIANA->MViaje
    /* metodo encargado de incrementar el contador de viajes hacia caracas,
     * para calcular El total de viajes realizados hacia la ciudad de Caracas,
   	 * y aqui tambien se incrementam el acumulador de ingresos obtenido en la ma�ana y
   	 * el acumulador de ingresos obtenido en la tarde, lo cual se usa para calcular
   	 * el turno en que se obtuvo menores ingresos(menor de muchos)
     * (se le pasa como paramtro MViaje, para que extraiga de alli la hora de salida del viaje,
     * y a trav�s de una sentencia SELECTIVA hace el incremento de dichos acumuladores se�alados.

   		         				(Relacion de uso MViaje con MLinea) */
     ml.ProcesarViaje(mv);

   cout<<"Desea procesar otro viaje(si=1/no=2)? ";
 cin >>resp;
}while (resp==1);


//Imprmir clase Grande- > MLinea
	/* se imprime aqui porque luego de ejecutar el ciclo externo,
     * es que ya se ha procesado todos lso viajes y se incrementado acumuladores,
     * contadores, mayor y/o menor de muchos,
     * y se tienen valores finales por la linea, asi que. por ello. se puede imprimir las salidas deseadas.
     * por esta raz�n, si se desea, se puede hacer otro metodo para imprimir la salida de la clase grande...
     * porque lo importante es que ya se hayan procesado todos los Viajes, por tambien se puede invocar aqui, asi:
    */
vl.ImprimirLinea(ml.GetContcaracas(),ml.CalcTurnoMenosIngreso());

}
