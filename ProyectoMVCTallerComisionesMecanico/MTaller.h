/* MTaller.h
 *
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef MTaller_H
#define MTaller_H
#include "MMecanico.h"
class MTaller
{
   private:
      float mayor;

      float acumingresado;
      float acummtoelec;
      float acummtotrend;
      float acummtofrenos;


   public:
      MTaller();       

      //set y get
      void SetMayor(float m);
      float GetMayor();

	  void SetAcumingresado(float acumingresado);
	  float GetAcumingresado() ;

	  void SetAcummtoelec(float acummtoelec);
	  float GetAcummtoelec() ;

	  void SetAcummtofrenos(float acummtofrenos);
	  float GetAcummtofrenos() ;

	  void SetAcummtotrend(float acummtotrend);
	  float GetAcummtotrend() ;

      // Procesar
	  void ProcesarMecanico(MMecanico mm); // Relacion uso con MMecanico
	  void ProcesarReparacionTaller(MReparacion mr);

	  //metodos de calculos
	  string CalcMayorTipoReparac(); //calcular mayor de 3

};
#endif
