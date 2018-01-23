/*
 * Author: Pedro Leal
 */

#include "MOperario.h"

MOperario::MOperario(){}

void MOperario::SetCedula (string c)
{
	cedula = c;
}

void MOperario::SetTipo (int to)
{
	tipo = to;
}

void MOperario::SetHorasTrab (int ht)
{
	horastrab = ht;
}

void MOperario::SetPrecioxHora (float ph)
{
	precioxhora = ph;
}

string MOperario::GetCedula ()
{
	return cedula;
}

int MOperario::GetTipo ()
{
	return tipo;
}

int MOperario::GetHorasTrab ()
{
	return horastrab;
}


float MOperario::GetPrecioxHora ()
{
	return precioxhora;
}

float MOperario::CalcBonoAlim()
{
	return 38.00 * 7;
}

float MOperario::CalcPagoExtra()
{
	float valorhoraextra, porcincr, pagoextra;
	int horasextras;

	if (horastrab > 40)
	{
		/*
		 * solo hay horas extras,cuando las horas trabajadas en la semana son mayor que 40,
		 * en este caso se calcula pago extra
		 */

		horasextras = horastrab - 40;
		/*
		 * Debemos calcular las horas extras para posteriormente multiplicarlas
		 * por "valorhore" que representa el valor de como se va a cancelar
		 * una hora extra, que ser� calculado a continuacion.
		 */

		switch (tipo)
		{
		case 1:
			  porcincr = 0.2;
			//Al operario se va a cancelar cada hora extra al valor de la hora normal(preciohora) + 20% del precio de la hora
			break;
		case 2:
			porcincr = 0.40;
			//Al operario se va a cancelar cada hora extra al valor de la hora normal(preciohora) + 40% del precio de la hora
			break;
		case 3:
			porcincr = 0.35;
			//Al operario se va a cancelar cada hora extra al valor de la hora normal(preciohora) + 35% del precio de la hora
			break;
		}

		valorhoraextra = precioxhora + ( porcincr * precioxhora);

		/*
		 * OJO.... NO VAYAN A CALCULAR EL VALORHORA =  PORCENTAJE DE INCREMENTO MULIPLICADO POR EL PRECIO POR HORA!!! OK..
		 * ESO SOLO ES EL INCREMENTO!!!
		 * LE DEBEN SUMAR EL PRECIO POR HORA
		 *
		 */

		pagoextra= valorhoraextra * horasextras;
		/*FINALMENTE CALCULAMOS EL PAGO EXTRA , QUE ES IGUAL AAL
		  AL VALOR A CANCELAR DE CADA HORA EXTRA Y LO MULTIPLICAMO POR EL TOTAL DE HORAS EXTRAS*/


		return pagoextra;


	}
	else
		return 0.00;
	//SI HORAS TRABAJADAS < 40, NO HAY PAGO EXTRA, NO HAY HORAS EXTRAS TRABAJADAS!!OK
}

float MOperario::CalcSueldoBase()
{
	if (horastrab < 40)
		return horastrab * precioxhora;
	else
		return precioxhora * 40;

	/*
	  � No es lo mismo a que yo coloque SOLO  horastrab * preciohora,
	  al momento de clacualr el sueldo base?

	No , no es lo mismo,
	si colocas que sueldo base= horastrab * preciohora,
	ocurren errores, mira por que:
	supongamos q el precio por hora es 100 bs,
	�q pasaria si el empleado trabajo 50 horas por ejemplo?
	-estarias multiplicando 50 * 100=5000bsf
	y debes cancelar solo 40* 100=400bsf y las 10 horas restantes
	se cancelarian al valor por hora extra. ok
    por eso no puedes solo  multiplicar horastrab * preciohora

	porq hay q considerar que cuando hay horas extras se le cancelan
	solo las 40 al precio por hora. y las restantes al valor de cada hora extra,
	como les expliqu� antes,
	mientras que si trabaj� 40 horas o menos, el sueldo basico ser�:
    las horas trabajadas multiplicadas por el precioxhora(normal)

	*/
}

float MOperario::CalcSueldoSemanal()
{
	return  CalcSueldoBase() + CalcPagoExtra() + CalcBonoAlim() ;

	/*
	 * mucho ojo cuando haga estas sentencias, poru si llegan a colocar:
	 * return  bonoalimentacion + pago extra + sueldo base, eso ESTA MALO!! OK.!!
	 * porq si existieran esoas variables, estas serian locales en ese modulo
	 * y solo se podrian utilizar alli, por eso, por ser locales,
	 * ademas que las variables locales se AUTODESTRUYEN
	 * cuando se termina de ejecutar el metodo q las utiliza. OK!!
	 * por ello se debe INVOCAR las funciones  que son las que se encargan de hacer los calculos. ok
	 */
}

/*
 * este metodo se hizo porque deseamos imprimir el tipo de operario,
 * recuerden que tipo es un dato int,
 * y por lo tanto podria imprimir 1, 2 0 3. y lo que se desea es que imprima
 * el nombre del tipo de operario en letras:SUPERVISOR, COSTURERA, EMPACADOR, ok
 * para ello hacemos uso de switch, q es pefecto para estos casos,
 * dado que el es un selector multiple, es decir tabaja como un "if",
 * pero solo se puede usar cuando se va a preguntar si dicha variable es igual a cierto valor puntual
 * y tambien se debe cumplir para poder trabajar con el switch
 * que el tipo de dato de la variable a comparar, debe ser int, char, o bool,. ok
 *
 */
string MOperario::DetTipoOpEnLetras()
{
	string tipoop;
	switch (tipo)
	{
	case 1:
		tipoop = "SUPERVISOR";
	break;
	case 2: tipoop = "COSTURERA";
	break;
	case 3: tipoop = "EMPACADOR";
	break;
	}
	return tipoop;
}
