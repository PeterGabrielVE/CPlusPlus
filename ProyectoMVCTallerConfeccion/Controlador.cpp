/*
 * Author: Pedro Leal
 */

#include "Controlador.h"

Controlador::Controlador(){}

void Controlador::ProcesarTallerC()
{
	//paso #1: instanciar clases
	MOperario mo;
	VOperario vo;

	/*
	 * Observen que las 2 clases se declaran como locales, es decir por AGREGACION,
	 * esto es porque solo se usan en este modulo
	 *
	 */

	//paso #2 DECLARAR VARIABLES DE LECTURA
	string c;
	float ht, ph;
	int to, resp;
	//paso #3 INSTANCIAR CLASES

     /*
      * CICLO DO-WHILE
      *
      * se hace un ciclo do-while porque se desconoce la cantidad de operarios a procesar.
      */
	do
	{
		//paso #4 ENCABEZADOS DE LECTURA
		system ("cls");
		cout << "\n\n\t\t\t Datos del Operario" << endl;
		cout << "\t\t\t==================" << endl;

		//paso #4 LEER DATOS DE ENTRADA
		c = vo.LeerCedula ();
		to = vo.LeetTipoO();
		ht = vo.LeerHorasTrab();
		ph = vo.LeerPrecioH();

        ////paso #5 SETEAR EN LA CLASE PEQUE�A TODOS LOS DATOS LEIDOS
		mo.SetCedula(c);
		mo.SetTipo (to);
		mo.SetHorasTrab (ht);
		mo.SetPrecioxHora (ph);

		//paso #6 IMPRIMIR POR LA CLASE PEQUE�A, HACIENDO USO DE LA VISTA PEQUE�A.
		vo.ImprimirOperario ( mo.GetCedula(), mo.DetTipoOpEnLetras(),
	      			          mo.GetHorasTrab(), mo.GetPrecioxHora(),
				              mo.CalcSueldoSemanal());

		/* paso #7 INVOCAR EL METODO PROCESAROPERARIO DE LA CLASE GRANDE,
		   QUE VA A SER EL ENCARGADO DE INCREMENTAR CONTADORES Y ACUMULADORES*/
		mtc.ProcesarOperario (mo);

		//paso #8 LEER RESPUESTA, porque se esta vtrabjando con un do-while
		cout << "\n\n\t\tDesea Procesar Otro Operario? (1)SI (2)No : ";
	    cin >> resp;
	}
	while (resp == 1);

	/*
	 * observen que se invoca el metodo que imprime la clase grande fuera del ciclo,
	 * puesto que esto garantiza que ya se han procesado todos los operaris,
	 * y por lo tanto se puede emitir la salida final. Ok
	 */
}


void Controlador::Reporte()
{ //instanciar la vista Grande, AGREGACION
	VTallerC vt;
    vt.ImprimirReporte (mtc.GetAcumMontoHE (), mtc.GetAcumSueldo(),mtc.GetContOperHE());

}
