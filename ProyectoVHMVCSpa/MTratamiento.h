/*
 * MTratamiento.h
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#ifndef MTRATAMIENTO_H_
#define MTRATAMIENTO_H_
#include <string>
using namespace std;

class MTratamiento {
private:
	string descripcion;
	int status;
public:
	MTratamiento();
    string GetDescripcion();
    int GetStatus() ;
    void SetDescripcion(string desc);
    void SetStatus(int st);

};

#endif /* MTRATAMIENTO_H_ */
