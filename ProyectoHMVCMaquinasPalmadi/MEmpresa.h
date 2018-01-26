/*
 * Controlador.cpp
 *
 *  Created on: 18/11/2013
 *      Author: Pedro Gabriel Leal
 */

#ifndef MEMPRESA_H_
#define MEMPRESA_H_
#include "MMartillo.h"
#include "MEsmeriladora.h"
#include "MLijadora.h"

class MEmpresa {
private:
	int contM;
	int contE;
	int contL;
public:
	MEmpresa();

    void SetContE(int ce);
    void SetContL(int cl);
    void SetContM(int cm);
    int GetContE() ;
    int GetContL();
    int GetContM();
    void ProcesarMartillo(MMartillo mm);
    void ProcesarEsmeriladora(MEsmeriladora me);
    void ProcesarLijadora(MLijadora ml);
    string DeterminarMayorTipo();
};

#endif /* MEMPRESA_H_ */
