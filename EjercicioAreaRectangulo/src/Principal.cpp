/*principal. cpp
 *
*	Ejercicio #5. Dada la altura y la base de un rectangulo, calcule y
*	muestre su area.
*	Elaborado por: Pedro Gabriel Leal
*
*/

#include <iostream>
#include "Rectangulo.h"
using namespace std;

void IERectangulo (Rectangulo & elRectangulo);
void ISRectangulo (Rectangulo elRectangulo);
void IControl (char & respuesta);

     int main()
{
    	 Rectangulo elRectangulo;
    	 char respuesta;
    	 respuesta = 's';
    	 while (respuesta == 's' || respuesta == 'S')
{
     Rectangulo elRectangulo;
     IERectangulo (elRectangulo);
     ISRectangulo (elRectangulo);
     IControl (respuesta);
    	 }
     return 0;
}



void IERectangulo (Rectangulo & elRectangulo)
{
     float laBase;
     float laAltura;
     cout<<" Indique la Base del Rectangulo: ";
     cin>> laBase;
     elRectangulo.setBase (laBase);
     cout<<" Indique la Altura del Rectangulo: ";
     cin>> laAltura;
     elRectangulo.setAltura (laAltura);
}


void ISRectangulo (Rectangulo elRectangulo)

{
     cout<< "El Area del rectangulo es : ";
     cout<< elRectangulo.calArea();
}
void IControl (char & respuesta)
{
     cout<< " ¿ Desea procesar otros datos s/n ?" <<endl;
     cin>> respuesta;
}

