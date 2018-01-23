

#include "MDocente.h"

MDocente::MDocente() {}

void MDocente::SetCedula(string c)
{
    cedula = c;
}

void MDocente::SetNombre(string n)
{
    nombre = n;
}

void MDocente::SetSueldo(float s)
{
    sueldo = s;
}

void MDocente::SetTipo(int t)
{
    tipo = t;
}

string MDocente::GetCedula()
{
    return cedula;
}

string MDocente::GetNombre()
{
    return nombre;
}

float MDocente::GetSueldo()
{
    return sueldo;
}

int MDocente::GetTipo()
{
    return tipo;
}


