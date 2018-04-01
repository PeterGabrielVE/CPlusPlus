/*  MNadador.h
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */
#ifndef MNADADOR_H_
#define MNADADOR_H_

#include <string>
#include "MCompetencia.h"
using namespace std;

class MNadador
{
      private:
        string cedula;
        string nombre;
        int equipo,ctmedallas;
      public:
        MNadador();
        void SetCedula(string c);
        void SetNombre(string n);
        void SetEquipo(int eq);
        void SetCtMedallas(int ct);
        string GetCedula();
        string GetNombre();
        int GetEquipo();
        int GetCtMedallas();
        void ProcesarCompetencia(MCompetencia compe); // Relacion Uso
};
#endif // MNADADOR_H_
