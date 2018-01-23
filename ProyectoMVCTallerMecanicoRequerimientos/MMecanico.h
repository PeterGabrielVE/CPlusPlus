/*
 * MMecanico.h
 *
 *  Created on: 26/10/2013
 *      Author: Gabriel
 */

#ifndef MMECANICO_H_
#define MMECANICO_H_
#include <string>
#include "MReparacion.h"
using namespace std;

class MMecanico
{
      private:
        long cedula;
        string nombre;
        int cant_repara;
        float ac_montocomision;
        float mayor;

      public:
        MMecanico();
        void SetCedula(long c);
        void SetNombre(string n);
        void SetCantRepara(int c);
        void SetAcMontoComision(float mc);
        void SetMayor(float may);

        long GetCedula();
        string GetNombre();
        int GetCantRepara();
        float GetAcMontoComision();
        float GetMayor();

        void ProcesarReparacion(MReparacion mr); // Relacion Uso

};

#endif
