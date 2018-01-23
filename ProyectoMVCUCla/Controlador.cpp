

#include "Controlador.h"

Controlador::Controlador(){}

void Controlador::ProcesarDocentes()
{
	 MDocente md;
	 VDocente vd;
	 string c,n;
	 int t,resp;
	 float s;

	 do
	 {
		 system ("cls");

		 cout << "\n\nDATOS DEL DOCENTE" << endl;
		 cout <<     "=================" << endl;

		 c = vd.LeerCedula();
		 n = vd.LeerNombre();
		 t = vd.LeerCategoria();
		 s = vd.LeerSueldoMensual();

		 md.SetCedula(c);
		 md.SetNombre(n);
		 md.SetTipo(t);
		 md.SetSueldo(s);
		 mu.ProcesarDocente(md);

		 cout << "\n\t\tDesea procesar otro Docente (1) Si - (2) No?: ";
		 cin >> resp;

	 	 } while (resp == 1);

}

void Controlador::ReporteUniversidad()
{
	VUniversidad vu;
   vu.ImprimirReporte(mu.CalcPorcDocContrat(), mu.GetMayorS(), mu.CalcPromDocOrd());
}
