 /*
 *  Created on: 10/01/2012
 *      Author: Pedro Gabriel Leal
 */

#include "VGeneral.h"
VGeneral::VGeneral(){}

// Permite hacer una pausa
void VGeneral::Pausa(){
   system("pause");
}
// Blanquea la pantalla
void VGeneral::Limpiar(){
   system("cls");
}
// Escribe un mensaje y lee una respuesta de tipo int
int VGeneral::SeleccionarRespuesta(string msj){
   int res;
   cout<<msj;
   cin>>res;
   return res;
}
// Imprime dos lineas de Encabezado consecutivas
void VGeneral::ImprimirEncabezado(string msj1, string msj2){
   cout << msj1 << endl;
   cout<< msj2 << endl << endl;
}
void VGeneral::ImprimirMensaje(string msj1){
   cout << msj1 << endl;
}
// Escribe un mensaje y lee una variable long
long VGeneral::LeerLong(string msj){
   long c;
   cout<<msj;
   cin>>c;
   return c;
}
// Escribe un mensaje y lee una variable sring
string VGeneral::LeerString(string msj){
   string n;
   cout<<msj;
   cin.sync();
   getline(cin,n);
   return n;
}
// Escribe un mensaje y leer una variable float
float VGeneral::LeerFloat(string msj){
   float n;
   cout << msj;
   cin >> n;
   return n;
}
// Escribe un mensaje y leer una variable int
int VGeneral :: LeerInt(string msj){
    int n;
    cout<<msj;
    cin>>n;
    return n;
}
// Escribe un mensaje y leer una variable char
char VGeneral :: LeerChar(string msj){
    char n;
    cout<<msj;
    cin>>n;
    return n;
}
// Imprime un dato float usando un formato fijo con una precision de dos decimales
void VGeneral :: ImprimirFloat(float num){
    cout << setiosflags(ios::fixed) << setprecision(2)<< num<<endl;
}

bool VGeneral :: AbrirArchivo (std::ifstream &archivo, char nomb_arch [128]){
   archivo.open (nomb_arch, ios::in);
   cin.sync();
   return archivo.is_open();
}

string VGeneral :: LeerLinea(std::ifstream &archivo){
   string linea;
   getline(archivo, linea);
   return linea;
}

char VGeneral :: LeerChar (std::ifstream &archivo){
   char ch;
   archivo >> ch;
   return ch;
}

long VGeneral :: LeerLineaLong(std::ifstream &archivo){
   long nro;
   archivo >> nro;
   string nada;
   getline(archivo, nada);
   return nro;
}

float VGeneral :: LeerLineaFloat(std::ifstream &archivo){
   float nro;
   archivo >> nro;
   string nada;
   getline(archivo, nada);
   return nro;
}

string VGeneral :: LeerDato (std::ifstream &archivo){
   string dato;
   archivo >> dato;
   return dato;
}

bool VGeneral :: FinArchivo (std::ifstream &archivo){
   return archivo.eof();
}

void VGeneral :: CerrarArchivo (std::ifstream &archivo){
   archivo.close();
}




