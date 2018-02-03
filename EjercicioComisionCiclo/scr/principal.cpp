/*
 * principal.cpp
 *
 *  Created on: 29/05/2012
 *      Author: Pedro Gabriel Leal
 */
#include"articulo.h"
#include"vendedor.h"
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
void IEvendedor(vendedor & elvendedor);
void IEarticulo(articulo & elarticulo);
void ISvendedor(vendedor elvendedor);
void ISarticulo(articulo elarticulo);

int main()
{
	articulo elarticulo;
	vendedor elvendedor;
	elarticulo.inicializar();
	cout<<endl<<" Articulos vendidos "<<endl;
	cout<<" =================== "<<endl;
	for (int i=0; i<3; i++)
	{
		IEarticulo(elarticulo);
		elarticulo.acumularComision();
		elarticulo.acumularVenta();
		elarticulo.contarArtV5();
		elarticulo.contarArtV5y8();
		elarticulo.contarArtV8();
	}
	IEvendedor(elvendedor);
	ISvendedor(elvendedor);
	ISarticulo(elarticulo);
	system("pause");
	return 0;
}
void IEvendedor(vendedor & elvendedor)
{
	string CV, NV;
	cout<<endl<<" Datos del vendedor "<<endl;
		cout<<" =================== "<<endl;
	cout<<"Ingrese el codigo: "<<endl;
	cin>>CV;
	elvendedor.asignarCodigoV(CV);
	cout<<"Ingrese el nombre: "<<endl;
	cin>>NV;
	elvendedor.asignarNombreV(NV);
}
void IEarticulo(articulo & elarticulo)
{
	float PA;
	cout<<"Ingrese el precio: "<<endl;
	cin>>PA;
	elarticulo.asignarPrecioA(PA);
}
void ISvendedor(vendedor elvendedor)
{
	cout<<endl;
	cout<<"codigo del vendedor:"<<elvendedor.obtenerCodigoV()<<endl;
	cout<<"nombre del vendedor:"<<elvendedor.obtenerNombreV()<<endl;
}
void ISarticulo(articulo elarticulo)
{
	cout<<"comision total:"<<elarticulo.obteneracumComision()<<endl;
	cout<<"cantidad de articulos con precio menor de 5000:"<<elarticulo.obtenercontArtV5()<<endl;
	cout<<"cantidad de articulos con precio entre 5000 y 8000:"<<elarticulo.obtenercontArtV5y8()<<endl;
	cout<<"cantidad de articulos con precio mayor de 8000:"<<elarticulo.obtenercontArtV8()<<endl;
	cout<<"promedio de venta:"<<elarticulo.calpromV()<<endl;
}
