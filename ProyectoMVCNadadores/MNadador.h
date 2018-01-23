/*
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef MNADADOR_H_
#define MNADADOR_H_
#include "MCompetencia.h"
#include <string>
using namespace std;

class MNadador
{
      private:
              string cedula;
              string nombre;
              int equipo;
              int contmedgan;//para contar cada medalla ganada por el nadador

      public:
             MNadador();
             //set

                void SetCedula(string c);
                void SetNombre(string n);
                void SetEquipo(int eq);
                void SetContMedGan (int cmg);
             //get

                int GetEquipo();
                int GetContMedGan();
                string GetCedula();
                string GetNombre();

             void ProcesarCompetencia (MCompetencia mc);


};

#endif
