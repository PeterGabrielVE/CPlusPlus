/*  MCompetencia.h
 *  Creado: 15/10/2011
 *  Autor: Pedro Leal
 */
#ifndef MCOMPETENCIA_H_
#define MCOMPETENCIA_H_
class MCompetencia
{
   private:
      int estilo,lugar;
      float tiempo;
   public:
      MCompetencia();
      void SetEstilo(int e);
      void SetTiempo(float t);
      void SetLugar(int l);
      int GetEstilo();
      float GetTiempo();
      float GetLugar();
};
#endif // MCOMPETENCIA_H_
