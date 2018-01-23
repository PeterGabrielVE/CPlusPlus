

#include "MUniversidad.h"

MUniversidad::MUniversidad()
{
	contdoccontrat = contordinario = conttotal = 0;
    mayors = acumsuelord = 0.00;
}

void MUniversidad::SetContdoccontrat(int c1)
{
    contdoccontrat = c1;
}

void MUniversidad::SetContordinario(int c2)
{
    contordinario = c2;
}

void MUniversidad::SetConttotal(int c3)
{
    conttotal = c3;
}

void MUniversidad::SetMayorS(float m)
{
    mayors = m;
}

void MUniversidad::SetAcumsuelord(float a)
{
    acumsuelord = a;
}

int MUniversidad::GetContdoccontrat()
{
    return contdoccontrat;
}

int MUniversidad::GetContordinario()
{
    return contordinario;
}

int MUniversidad::GetConttotal()
{
    return conttotal;
}

float MUniversidad::GetMayorS()
{
    return mayors;
}

float MUniversidad::GetAcumsuelord()
{
	return acumsuelord;
}

void MUniversidad::ProcesarDocente(MDocente md)
{
	++ conttotal;


	if (md.GetTipo()==1)
		++contdoccontrat;
		else
		{
			++contordinario;
			acumsuelord+=md.GetSueldo();
		}

	if (md.GetTipo()== 1 and md.GetSueldo()>mayors)
		mayors=md.GetSueldo();
}

float MUniversidad:: CalcPorcDocContrat()
{
		if (conttotal == 0)
			return 0.00;
		else
		return (contdoccontrat*100)/conttotal;
}

float MUniversidad::CalcPromDocOrd()
{
	if (contordinario == 0)
		return 0.00;
	else
	return acumsuelord/contordinario;
}
