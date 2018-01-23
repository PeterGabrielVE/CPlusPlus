/*
 * Author: Pedro Leal
 */

#include "VOperario.h"

VOperario::VOperario(){}

string VOperario::LeerCedula()
{
	string c;
	cout << "\n\n\tCedula del Operario: ";
	cin>>c;
	return c;
}

int VOperario::LeetTipoO ()
{
	int toop;
	do
	{
		cout << "\tTipo de Operario (1) SUPERVISOR (2) COSTURERA (3) EMPACADOR: ";
		cin>> toop;
		if (toop < 1 or toop > 3)
		cout<<"\nDato NO Valido!" << endl;
	}
	while (toop < 1 or toop > 3);
	/*
	 * � como hacemos para validar un dato ?
	 * - pues leemos el valor y chequeamos si dicho valor no se encuentre
	 * en el rango permitido para los posibles valores que pueda tomar la variable,
	 * si este es el caso, entonces haremos un do-while
	 * controlado con la condicion de ese rango de valores incorrectos,
	 * el ciclo se leera asi:
	 * haga mientras el dato esta incorrecto, y entonces se repite el ciclo y en cada iteracion,
	 * se volver� a pedir el dato hasta que est� correcto,
	 * y en ese momento se termina el ciclo y retorna dicho valor. ok
	 *
	 */
	return toop;
}

int VOperario::LeerHorasTrab()
{
	int ht;
	do
	{
	 cout << "\tHoras Trabajadas Por el Operario: ";
	 cin>> ht;
	 if (ht < 0)
	 	cout<<"\nDato NO Valido!" << endl;
	}while(ht<0);

	 return ht;
}


float VOperario::LeerPrecioH ()
{
	float ph;
 do
  {

	cout << "\tPrecio Por Hora: ";
	cin >> ph;
	if (ph < 0.00)
	 cout<<"\nDato NO Valido!" << endl;
  }while(ph<0.00);

  return ph;
}

void VOperario::ImprimirOperario (string c, string top, int ht,
									float ph, float sueldosem)
{
	system("cls");

	cout << "\n\n\t\t\tINFORMACION DEL OPERARIO" << endl;
	cout << "\t\t\t======================== \n" << endl;

	cout << "\t\tCedula del Operario: " << c << endl;

	cout << "\t\tTipo de Operario: " << top << endl;

	cout << "\t\tHoras Trabajadas: " << ht << endl;

	cout << "\t\tPrecio por Hora: " << setiosflags (ios::fixed)
			<< setprecision (2) << ph << endl;

	cout << "\t\tSueldo Semanal: " << setiosflags (ios::fixed)
			<< setprecision (2) <<  sueldosem << endl;

	 system("pause");
}
