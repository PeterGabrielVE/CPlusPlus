/*
 * Seccion.h
 *
 *  Created on: 24/01/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef SECCION_H_
#define SECCION_H_
#include "Alumno.h"

int const MAX = 5;


class Seccion
{


private:


	int cont_hombres;
	int cont_mujeres;
	int cont_alumRepro;
	float acum_MujeresconB;
	float acum_nota;
	float cont_hombresAprobados;
	int cont_MujeresconB;
	int cont_MujeresAprobadas;
	int cont_MujeresSobreelPromedio;

	// arreglos


	int ptr;
	Alumno A_CantMujeres[MAX];




public:

	Seccion();
	/*declarando contadores y acumuladores para asi poder llamarlos a la hora de trabajarlos completamente en nuestra clase Seccion.cpp */

	// Empezando con arreglos

	void setPtr(int elPtr);
	int getPtr();
	bool setMujeres(Alumno elAlumno);
	Alumno getMujeres(int i);

	// fin de arreglos

	void contarhombres(Alumno elAlumno);
	void contarmujeres(Alumno elAlumno);
	void contaralumnosrepobrados(Alumno elAlumno);
	void acumularmujeresconB(Alumno elAlumno);
	void acumularnotas(Alumno elAlumno);
	void contarhombresaprobados(Alumno elAlumno);
	void ContarMujeresAprobadas(Alumno elAlumno);
	void ContarMujeresConB(Alumno elAlumno);
	void ContarMujeresSobreelPromedio (Alumno elAlumno);

	/* retornando contadores y acumuladores con sus respectivos tipos para asi poder darles uso dentro de nuestros procedimientos */

	float getCont_hombresAprobados();
	float getAcum_nota();
	int getCont_MujeresconB();
	int getCont_hombres();
	int getCont_mujeres();
	int getCont_alumRepro();
	float getAcum_MujeresconB();
	int getCont_MujeresAprobadas();
	int getcont_MujeresSobreelPromedio();

	/* declarando procedimientos para asi poder darles uso en nuestra clase operacional Seccion.cpp */

	float calcPromediodeseccion(Alumno elAlumno);
	  int calcAlumnasmujeresAprobadas(Alumno elAlumno);
	float calcPorcentajedealumnosreprobados(Alumno elAlumno);
	float calcPromediomujeresconB(Alumno elAlumno);
	float calcPorcentajevaronesaprobados(Alumno elAlumno);
	float calcMujeresAprobadas(Alumno elAlumno);
	float calcMujeresSobreelPromedio(Alumno elAlumno);

};

#endif /* SECCION_H_ */
