/*
 *  MFederacion.h
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */
#ifndef MFEDERACION_H_
#define MFEDERACION_H_
#include <string>
#include "MNadador.h"
// Autom�ticamente incluye a MCompetencia
using namespace std;
class MFederacion
{
   private:
      int ctnadador, cteq2oro, ctmariposa,c1,c2,c3,cp,
          cteq1, ctotalmedallas;
   public:
      MFederacion();
      void SetCtNadador(int c1);
      void SetCtEq2Oro(int c2);
      void SetCtMariposa(int c3);
      void SetCtEq1(int c4);
      void SetCtotalMedallas(int c5);
      int GetCtNadador();
      int GetCtEq2Oro();
      int GetCtMariposa();
      int GetCtEq1();
      int GetCtotalMedallas();
      void ProcesarJornadas(MNadador nada, MCompetencia compe); // Relacion uso con MNadador y MCompetencia
      void ProcesarNadador(MNadador nada); // Relaci�n uso con MNadador
      float PorcentajeOroEq2();
      float PorcentajeNadaEq1();
      void setc1(int c11);
      void setc2(int c22);
      void setc3(int c33);
      int getc1();
      int getc2();
      int getc3();
      void setcp(int cp1);
      int getcp();
      string mayor();
};
#endif // MFEDERACION_H_
