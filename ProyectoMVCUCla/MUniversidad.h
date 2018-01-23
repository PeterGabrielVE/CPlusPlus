

#ifndef MUNIVERSIDAD_H_
#define MUNIVERSIDAD_H_
#include "MDocente.h"

class MUniversidad
{

private:
    int contdoccontrat;
    int contordinario;
    int conttotal;
    float acumsuelord;
    float mayors;

public:

    MUniversidad ();

    void ProcesarDocente(MDocente md);

    void SetContdoccontrat(int c1);
    void SetContordinario(int c2);
    void SetConttotal(int c3);
    void SetMayorS(float m);
    void SetAcumsuelord(float a);

    int GetContdoccontrat();
    int GetContordinario();
    int GetConttotal();
    float GetMayorS();
    float GetAcumsuelord();

    float CalcPorcDocContrat();
    float CalcPromDocOrd();
};
#endif /* MUNIVERSIDAD_H_ */
