/*
 * MPeluqueria.h
 *
 *  Created on: 20/01/2012
 *  Author: Pedro Gabriel Leal
 */

#ifndef MPeluqueria_H
#define MPeluqueria_H
#include <vector>
#include "MPeluquera.h"
class MPeluqueria
{ private:
    vector<MPeluquera> vpeluq;
    vector<MArticulo> vtiposerv; // MServicio es un MArticulo
  public:
	 MPeluqueria();
	// M�todos relacionados con el vector peluqueras vpeluq
	void SetPeluquera(MPeluquera mp, int pos);
	MPeluquera GetPeluquera(int pos);
    void IncluirUnaPeluquera(MPeluquera mp);
    int CantPeluqueras();
    int BuscarCedPeluquera(string ci);

    // M�todos relacionados con el vector de los servicios vtiposerv
    void SetServicio(MArticulo mserv, int pos);
    MArticulo GetServicio(int pos);
    void IncluirUnServicio(MArticulo mserv);
    int CantServicios();
    // M�todos de procesos y c�lculos directos
    float TotalIngresosSemanal();
    string NombreDia(int dia);
    vector<string> GenerarVectorNombresDias();
    void ProcesarServicioCliente(MServPrest msp, int pos_peluquera);
};
#endif

