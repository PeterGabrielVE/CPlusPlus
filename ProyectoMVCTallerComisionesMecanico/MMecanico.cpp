// MMecanico.cpp
#include "MMecanico.h"
MMecanico::MMecanico()
{}
void MMecanico::SetCedula(long c)
{
   cedula = c;
}
void MMecanico::SetNombre(string n)
{
   nombre = n;
}
void MMecanico::SetCantRepara(int c)
{
   cant_repara = c;
}
void MMecanico::SetAcMontoComision(float mc)
{
   ac_montocomision = mc;
}

void MMecanico::SetMayor(float may) {
	mayor = may;
	}

long MMecanico::GetCedula()
{
   return cedula;
}
string MMecanico::GetNombre()
{
   return nombre; 
}
int MMecanico::GetCantRepara()
{
   return cant_repara;
}   
float MMecanico::GetAcMontoComision()
{
   return ac_montocomision;
}

float MMecanico::GetMayor() {
		return mayor;
	}

// El mecanico va actualizando su comision
void MMecanico::ProcesarReparacion(MReparacion mr)
{
     ac_montocomision += mr.CalcComisionReparacion();

     if(mr.CalcComisionReparacion() > mayor)
    	 mayor= mr.CalcComisionReparacion() ;
     /* fijense que se compara con la comision de la reparacion del mecanico
      * y NO con el monto de la reparacion,
      * esto es, porque se desea calcular :
      * cual fue el mayor monto reunido por comision; es decir nos piden
      * la comision mayor entre todas sus reparciones..
      * si nos pidieran el monto de la reparacion mayor,
      * entomncs comparariamos el mayor con el atributo monto reparacion. ok
      *
      */
}
