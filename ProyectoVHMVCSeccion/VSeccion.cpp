
/* VSeccion.cpp
* Author:Pedro Gabriel Leal
 */

#include "VSeccion.h"
VSeccion :: VSeccion(){}

void VSeccion :: ImprimirSeccion(string nomprof, int numsecc,
                                 vector<string> auxcedulas,
                                 vector<string> auxnombres,
                                 vector<float> auxnotas,
                                 float promedio, float porcentaje, float porcA,float porcAp
                                 ,vector<string >cedulaM)
{
  
   Limpiar();
   /*Bloque de instrucciones que permite imprimir la informaci�n de 
   los estudiantes que se encuentran en los repectivos vectores*/   

   ImprimirEncabezado("\n DATOS DE LA SECCION","===================");
   cout<< "Nombre del profesor asignado : " << nomprof << endl;
   cout<<"Numero de la seccion : " << numsecc << endl <<endl;
      
   ImprimirEncabezado("\n ESTADISTISCAS DE LA SECCION","===========================");
   cout << setw(8) << "CEDULA" << setw(20) << "NOMBRE" << setw(12) << "NOTA" << endl;
   /*Instrucciones que imprimen por cada estudiante: la c�dula, que se encuentra en 
   el vector auxcedulas, el nombre que se encuentra en el vector auxnombres y la nota
   que se encuentran en el vector auxnotas. Se recorren los vectores con un for*/
   for(int i=0; i < auxcedulas.size(); i++)
    cout<<setw(8)<<auxcedulas[i]
        <<setw(20)<<auxnombres[i]
        <<setw(12)<<auxnotas[i]<< endl;
   cout << endl;
   //Instrucci�n que permite imprimir la informaci�n de los totales 
   cout << "Promedio de notas de la secci�n : "
        << setiosflags(ios::fixed) << setprecision(2) << promedio << endl;
  
   cout << "Porcentaje de notas por encima del promedio : "
        << setiosflags(ios::fixed) << setprecision(2) << porcentaje << endl;
   cout << "Porcentaje de aprobados : "
           << setiosflags(ios::fixed) << setprecision(2) << porcA << endl;
   cout << "Porcentaje de aplazados : "
           << setiosflags(ios::fixed) << setprecision(2) << porcAp<< endl;
   cout <<"Cedula(s) de estudiante(s) con la mayor nota: " << endl;
   for(int i=0; i < cedulaM.size(); i++)
	   cout<<cedulaM[i] <<endl;
  Pausa();
    
}

