
/*
 * MSeccion.cpp
 * Author:Pedro Gabriel Leal
 *
 */

#include "MSeccion.h"
MSeccion::MSeccion(){}

void MSeccion :: SetNombreProfesor(string n)
{
   nombre_profesor = n;
}

void MSeccion :: SetNumeroSeccion(int n)
{
   numero_seccion = n;
}

void MSeccion :: SetEstudiante(int i, MEstudiante me) 
{
   vec_est[i] = me;
}

/*Retorna un objeto de MEstudiante que se encuentra en el vector 
vec_est, dado un sub�ndice, en este caso (i)*/
MEstudiante  MSeccion::GetEstudiante(int i)
{
   return vec_est[i];
}

string MSeccion :: GetNombreProfesor()
{
   return nombre_profesor;
}

int MSeccion :: GetNumeroSeccion()
{
   return numero_seccion;
}

/*M�todo que almacena informaci�n de un estudiante en el vector vec_est*/
void MSeccion::IncluirUnEstudiante(string ced, string nom, float nf)
{
	//Se instancia un objeto de la clase MEstudiante
    MEstudiante me;  
	// Se le da estado al objeto estudiante
    me.SetCedula(ced);
    me.SetNombre(nom);
    me.SetNota(nf);
    vec_est.push_back(me);
}

/*Retorna la cantidad de estudiantes procesados, es decir el tama�o de vec_est*/
int MSeccion::CantEstudiantes()
{
   return vec_est.size();
}

/*Retorna el promedio de notas de los estudiantes.  Se declara e
inicializa la variable acumn en 0. Posteriormente se recorre el 
vector vec_est con un for, solicitando a los objetos de la clase 
MEstudinate almacenados en el vector, su respectiva nota, que es 
lo que se va acumular en acumn. Por �ltimo se calcula el promedio*/
float MSeccion::PromedioNotas()
{
   float acumn = 0;
   for(int i=0; i < CantEstudiantes(); i++)
      acumn += vec_est[i].GetNota();
  
   if (CantEstudiantes() != 0)
       return acumn / CantEstudiantes();
   else return 0; 
}

/*Retorna el porcentaje de estudiantes con notas por encima del  
promedio de notas. Se declara e inicializa la variable cont en 0. 
Posteriormente se recorre el vector vec_est con un for, solicitando 
a los objetos de la clase MEstudinate almacenados en el vector, 
su respectiva nota, se chequea si la nota del estudiante est� por 
encima del promedio y si se cumple la condici�n se incrementa el 
contador. Por �ltimo se calcula el porcentaje*/
float MSeccion::PorcentajeEncPromedio()
{
   float cont = 0;
   float  prom = PromedioNotas(); 
   for(int i=0; i < CantEstudiantes(); i++)
     if (vec_est[i].GetNota() > prom)
         cont++;
  
   if (CantEstudiantes() != 0)
       return (cont * 100) / CantEstudiantes();
   else return 0; 
}


