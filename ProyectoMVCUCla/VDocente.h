

#ifndef VDOCENTE_H_
#define VDOCENTE_H_
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

class VDocente
{
public:
	VDocente();
	string LeerCedula();
	string LeerNombre();
	int LeerCategoria();
	float LeerSueldoMensual();
};
#endif /* VDOCENTE_H_ */
