/*
 * Author: Gabriel Leal
 *
 *
 * 2. La Dirección Administrativa del Decanato de Ciencias y Tecnología de la Universidad
 * necesita determinar ciertas estadísticas relacionadas con el personal docente que allí labora.
 *  Es por esta razón, que la directora administrativa ha contratado un analista de sistemas,
 *  con el propósito de que efectúe el respectivo levantamiento de información,
 *  necesario para generar el porcentaje de docentes contratados,
 *   mayor sueldo de los docentes contratados y promedio de sueldos de los docentes ordinarios.
 *    Una vez levantada la información,
 *    se obtuvo que T0DO docente al ingresar a la universidad cuenta con unos datos básicos como son:
 *    cédula y nombre; así mismo se determina que el docente puede ser contratado u ordinario,
 *    dicha categoría (1􀃆Contratado, 2􀃆Ordinario) depende de si el docente ha concursado o no.
 *    Por otra parte, es importante resaltar que todo docente percibe un sueldo mensualmente.
 */



#include "Controlador.h"

int main()
{
   Controlador c;
   c.ProcesarDocentes();
   c.ReporteUniversidad();
   return 0;
}



