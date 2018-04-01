
// MSeccion.cpp

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
vec_est, dado un subíndice, en este caso (i)*/
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

/*Método que almacena información de un estudiante en el vector vec_est*/
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

/*Retorna la cantidad de estudiantes procesados, es decir el tamaño de vec_est*/
int MSeccion::CantEstudiantes()
{
   return vec_est.size();
}

/*Retorna el promedio de notas de los estudiantes.  Se declara e
inicializa la variable acumn en 0. Posteriormente se recorre el 
vector vec_est con un for, solicitando a los objetos de la clase 
MEstudinate almacenados en el vector, su respectiva nota, que es 
lo que se va acumular en acumn. Por último se calcula el promedio*/
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
su respectiva nota, se chequea si la nota del estudiante está por 
encima del promedio y si se cumple la condición se incrementa el 
contador. Por último se calcula el porcentaje*/
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

float MSeccion::PorcentajeAprobados()
{
	float contA = 0 ;
	for(int i=0; i < CantEstudiantes(); i++)
	if(vec_est[i].GetNota()>=48)
	contA++;

	if (CantEstudiantes() != 0)
	 return (contA * 100) / CantEstudiantes();
	 else return 0;
}



float MSeccion::PorcentajeAplazados()
{
	float contApl = 0 ;
	for(int i=0; i < CantEstudiantes(); i++)
	if(vec_est[i].GetNota()<48)
	contApl++;

	if (CantEstudiantes() != 0)
	return (contApl * 100) / CantEstudiantes();
	else return 0;
}

/*string MSeccion::DeterminarMayorNota()
{
	float mayorNota=0;
	string ceduMayor;
	for(int i=0; i < CantEstudiantes(); i++)
	if(vec_est[i].GetNota()>mayorNota)
	mayorNota=vec_est[i].GetNota();

	for(int i=0; i < CantEstudiantes(); i++)
	if(vec_est[i].GetNota()==mayorNota)
	{
		ceduMayor=vec_est[i].GetCedula();
	}
return ceduMayor;
}*/

float MSeccion::CalcMayor()
{
	float mayor=0;
	for(int i=0; i < CantEstudiantes(); i++)
	if(vec_est[i].GetNota()>mayor)
	mayor=vec_est[i].GetNota();
	return mayor;
}



vector<string> MSeccion::DeterminarCedula()
{
	vector<string> vecCedulas;
	float mayor=CalcMayor();
	for(int i=0; i < CantEstudiantes(); i++)
	if(vec_est[i].GetNota()==mayor)
	vecCedulas.push_back(vec_est[i].GetCedula());
	return vecCedulas;
}








