
/* MSeccion.h
* Author:Pedro Gabriel Leal
 */

#ifndef MSECCION_H
#define MSECCION_H
#include "MEstudiante.h"
#include <vector>
#include <string>

using namespace std;

class MSeccion
{
	private:
// vector<T> es un contenedor de las STL que, internamente, 
// es un array de elementos de tipo T. 
// Tiene la ventaja de crecer de forma transparente.
    string nombre_profesor;
    int numero_seccion;
    vector<MEstudiante> vec_est;
	public:
		MSeccion();
		void SetNombreProfesor(string);
        void SetNumeroSeccion(int);
        void SetEstudiante(int i, MEstudiante me); 
        string GetNombreProfesor();
        int GetNumeroSeccion();  
        MEstudiante GetEstudiante(int i);         
        void IncluirUnEstudiante(string ced, string nom, float nf);        
        int CantEstudiantes();
		float PromedioNotas();
		float PorcentajeEncPromedio();		
		float PorcentajeAprobados();
		float PorcentajeAplazados();
		//string DeterminarMayorNota();
		float CalcMayor();
		vector<string> DeterminarCedula();
};
#endif

