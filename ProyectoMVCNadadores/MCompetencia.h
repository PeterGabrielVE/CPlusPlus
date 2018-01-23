/*
 * Author: Pedro Gabriel Leal
 *
 */

#ifndef MCOMPETENCIA_H
#define MCOMPETENCIA_H

using namespace std;

class MCompetencia
{
      private:
             int estilo;
             int lugar;
             float tiempo;
      public:
             MCompetencia();
             MCompetencia (int, int, float);
             void SetEstilo (int est);
             void SetLugar (int lug);
             void SetTiempo (float tiem);
             int GetEstilo ();
             float GetTiempo ();
             int GetLugar ();
};

#endif
