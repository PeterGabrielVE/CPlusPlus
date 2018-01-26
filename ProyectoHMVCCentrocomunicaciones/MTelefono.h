/*
 * MTelefono.h
 *
 *  Created on: 21/11/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef MTELEFONO_H_
#define MTELEFONO_H_

class MTelefono {
private:
	int numero;
	float rentabasica;
	int tipo;
public:
	MTelefono();
    void SetNumero(int numero);
    void SetRentabasica(float rentabasica);
    void SetTipo(int tipo);
    int GetNumero() ;
    float GetRentabasica() ;
    int GetTipo() ;

};

#endif /* MTELEFONO_H_ */
