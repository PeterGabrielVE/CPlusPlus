/*
 * Author: Pedro Gabriel Leal
 */

#include "VGeneral.h"
VGeneral::VGeneral(){}
//--------------------------------------------------------------------------
// ****************METODOS GENERALES EFECTOS DE PANTALLA********************
//--------------------------------------------------------------------------
// Permite hacer una pausa
void VGeneral::Pausa()
{
   system("pause");
}
// Blanquea la pantalla
void VGeneral::Limpiar()
{
   system("cls");
}
// Imprime dos lineas de Encabezado consecutivas
void VGeneral::ImprimirEncabezado(string msj1, string msj2)
{
   cout << msj1 << endl;
   cout<< msj2 << endl << endl;
}
// Imprime un mensaje en la pantalla
void VGeneral::ImprimirMensaje (string msj)
{
   cout << msj;
}
// Imprime una secuencia de lineas en blanco de acuerdo a la cantidad
// especificada en el parametro ct
void VGeneral::ImprimirLineasBlanco(int ct)
{
   for (int i = 0; i < ct; ++i)
	   cout << endl;
}
//-------------------------------------------------------------------------
// ****************METODOS PARA LEER DATOS POR TECLADO ********************
//-------------------------------------------------------------------------
// Escribe un mensaje y lee un valor numerico sin decimales (variable int, long)
long VGeneral::LeerNro(string msj)
{
   long c;
   cout<<msj;
   cin>>c;
   return c;
}
// Escribe un mensaje y lee una variable sring
string VGeneral::LeerString(string msj)
{
   string n;
   cout<<msj;
   cin.sync();
   getline(cin,n);
   return n;
}
// Escribe un mensaje y leer una variable float
double VGeneral::LeerNroDecimal(string msj){
   double n;
   cout << msj;
   cin >> n;
   return n;
}
// Lee y valida un valor numerico (int, long) en un rango de valores
long VGeneral::LeerValidarNro(string msj, long valorinicial, long valorfinal)
{
 long dato;
 do
  {  dato=LeerNro(msj);
    if (dato<valorinicial or dato>valorfinal)
    cout<<"\n Dato no valido"<<endl;
  } while (dato<valorinicial or dato>valorfinal);
 return dato;
}
// Lee y valida un valor numerico (int, long) con un valor inicial
long VGeneral::LeerValidarNroValorInicial(string msj, long valorinicial)
{
 long dato;
 do
  {  dato=LeerNro(msj);
    if (dato<valorinicial)
    cout<<"\n Dato no valido"<<endl;
  } while (dato<valorinicial);
 return dato;
}
// Lee y valida valor numerico (int, long) con un valor final
long VGeneral::LeerValidarNroValorFinal(string msj, long valorfinal)
{
 long dato;
 do
  {  dato=LeerNro(msj);
    if (dato>valorfinal)
    cout<<"\n Dato no valido"<<endl;
  } while (dato>valorfinal);
 return dato;
}
// Escribe un mensaje y leer una variable char
char VGeneral :: LeerChar(string msj)
{
    char n;
    cout<<msj;
    cin>>n;
    return n;
}
//------------------------------------------------------------------------------
// ****************METODOS PARA IMPRIMIR A NIVEL DE PANTALLA********************
//------------------------------------------------------------------------------
// Escribe un mensaje e imprime un dato de tipo char
void VGeneral :: ImprimirChar(string msj, char c)
{
     cout << msj << c;
}
// Escribe un mensaje e imprime un dato de tipo string
void VGeneral :: ImprimirString(string msj, string s)
{
     cout << msj << s;
}
// Escribe un mensaje e imprime un dato numerico (int,long)
void VGeneral :: ImprimirNro(string msj, long n)
{
    cout << msj << n;
}
// Escribe un mensaje e imprime un dato de tipo float
// usando un formato fijo con una precision de dos decimales
void VGeneral :: ImprimirNroDecimal(string msj, double f)
{
     cout << msj <<setiosflags(ios::fixed) << setprecision(2)<< f;
}

