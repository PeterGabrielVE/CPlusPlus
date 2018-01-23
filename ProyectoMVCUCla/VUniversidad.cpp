

#include "VUniversidad.h"

VUniversidad::VUniversidad() {}

void VUniversidad::ImprimirReporte (float porc, float mayorS, float prom)
{
  system("cls");
  cout << "\n\n\t\t\tINFORMACION POR LA UCLA" << endl;
  cout << "\t\t\t=========================" << endl;
  cout << "\tPorcentaje de docentes contratados: "<<setiosflags(ios::fixed)
		<<setprecision(2)<<porc<<"%"<<endl;
  cout <<"\tMayor sueldo de los docentes contratados: "<<setiosflags(ios::fixed)
		<<setprecision(2)<<mayorS<<" Bsf"<<endl;
  cout <<"\tPromedio de sueldos de los docentes ordinarios: "<<setiosflags(ios::fixed)
		<<setprecision(2)<<prom<<" Bsf"<<endl;
  system("pause");
}
