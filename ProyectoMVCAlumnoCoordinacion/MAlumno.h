/*
 * MAlumno.h
 *
 *  Created on: 29/06/2013
 *  Author: Pedro Gabriel Leal
 */

#ifndef MALUMNO_H_
#define MALUMNO_H
#include <string>

using namespace std;

class MAlumno
{
private:
	string cedu;
    string nom;
    float nota;
public:

    //nota, primero van los set, luego get y luego los metodos de calculos..ok
    MAlumno();
    void setCedu(string c);
    void setNom(string n);
    void setNota(float no);

    string getCedu();
    string getNom();
    float getNota();

    string detletra ();
};

#endif /* MALUMNO_H_ */
