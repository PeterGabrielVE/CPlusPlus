
/* Controlador.cpp
* Author:Pedro Gabriel Leal
 */
#include "Controlador.h"
Controlador :: Controlador(){}

void Controlador :: ProcesarSeccion()
{
   string ced;
   string nom,nom_prof;
   float nf;
   int resp;
   string nom_secc;
   int num_secc;   

   vs.Limpiar();
   vs.ImprimirEncabezado("DATOS DE LA SECCION","===================");
   nom_prof = vs.LeerString("Nombre Profesor : ");
   num_secc = vs.LeerValidarNro("Numero Seccion : ",1,10);
   ms.SetNombreProfesor(nom_prof);
   ms.SetNumeroSeccion(num_secc);
   do
   {
      vs.ImprimirEncabezado("\nDATOS DEL ESTUDIANTE", "====================");
      ced = vs.LeerString("Cedula : ");
      nom = vs.LeerString("Nombre : ");
      nf = vs.LeerNroDecimal("Nota Final : ");
      
      /*M�todo de la clase MSeccion que almacena la informaci�n de un estudiante*/
      ms.IncluirUnEstudiante(ced, nom, nf);     
      
      resp = vs.LeerValidarNro("Desea procesar otro estudiante (1)SI (2)NO : ",1,2);
      vs.Limpiar();
   }
   while (resp == 1); 
}   
   
void Controlador :: ReporteSeccion()
{   
   //Chequeo de que haya estudiantes 
   if (ms.CantEstudiantes()!=0)
      {
         /*Bloque de instrucciones que declara y carga los vectores que contienen 
         la informaci�n de los estudiantes, estos son auxcedulas, auxnombres auxnotas*/
         vector<string> auxcedulas;
         vector<string> auxnombres;
         vector<float> auxnotas;
         for (int i = 0; i < ms.CantEstudiantes(); ++i)
         {        
            auxcedulas.push_back(ms.GetEstudiante(i).GetCedula());   
            auxnombres.push_back(ms.GetEstudiante(i).GetNombre());   
            auxnotas.push_back(ms.GetEstudiante(i).GetNota());    
         }   
         /*M�todo de la clase VSeccion que  se encarga de imprimir el reporte de los 
         estudiantes con los respectivos totales*/ 
         vs.ImprimirSeccion(ms.GetNombreProfesor(),ms.GetNumeroSeccion(),
                            auxcedulas, auxnombres, auxnotas, 
                            ms.PromedioNotas(), ms.PorcentajeEncPromedio(), ms.PorcentajeAprobados(), ms.PorcentajeAplazados(), ms.DeterminarCedula());       }
   else 
      {
         vs.Limpiar();
         vs.ImprimirMensaje("\nNO SE PROCESARON ALUMNOS\n");               
         vs.Pausa();
      } 
}


