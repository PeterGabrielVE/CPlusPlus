/*
 * principal.cpp
 *
 *  Created on: 23/02/2013
 *      Author: Pedro Gabriel Leal
 */


#include<iostream>
#include<stdlib.h>
#include<string>
#include"Postres.h"
#include"ArreglosDulce.h"
using namespace std;

void IE(Postres &elpostre, int laposicion,ArreglosDulce &elarreglo);
int IB(string Nomb, ArreglosDulce &elarreglo);
void IS(ArreglosDulce &elarreglo);

int main()
{
	Postres elpostre;
	ArreglosDulce elarreglo;
	int i;
	elarreglo.Inicializar();
	for(i=0; i<elarreglo.getTamano();i=i+1)
	{
		IE(elpostre,i,elarreglo);
		elarreglo.DetAcumAzucar(i);
		elarreglo.DetMenor(elpostre);
		elarreglo.DetContCacaoyMant(elpostre);
		elarreglo.DetContNoCacao(elpostre);
		elarreglo.DetContRaciones(elpostre);
		elarreglo.DetMayorM(elpostre);
		elarreglo.DetMenorM(elpostre);

	}
	IS(elarreglo);
	return 0;
}

void IE(Postres &elpostre,int laposicion,ArreglosDulce &elarreglo)
{
	string Nom;
	int Cacao, Azucar,Mant,Raciones;

	cout<<" DATOS DEL POSTRE "<<endl;
	cout<<" ================ "<<endl;
	cout<<"Nombre del postre:"<<endl;
	cin>>Nom;
	elpostre.setNombre(Nom);
	cout<<"Diga la cantidad de azucar del postre:"<<endl;
	cin>>Azucar;
	elpostre.setCantAzucar(Azucar);
	cout<<"Diga la cantidad de cacao de postre:"<<endl;
	cin>>Cacao;
	elpostre.setCantCacao(Cacao);
	cout<<"Diga la cantidad de mantequilla del postre:"<<endl;
	cin>>Mant;
	elpostre.setCantMant(Mant);
	cout<<"Diga la cantidad de raciones del postre:"<<endl;
	cin>>Raciones;
	elpostre.setCantRaciones(Raciones);
	elarreglo.GuardarPostre(elpostre, laposicion);


}

int IB(string Nomb,ArreglosDulce &elarreglo)
{

	int Encontrado;
	Encontrado=-1;
	int i;
	i=0;
	while ((i<elarreglo.getTamano()) and (Encontrado==-1))
	{
		if (elarreglo.getelpostre(i).getNombre()==Nomb)
			Encontrado=i;
		i=i+1;

	}
	return Encontrado;
}

void IS(ArreglosDulce &elarreglo)
{
	Postres elpostre;
	int i;
	string Nom;
	cout<<"Diga el nombre del postre que quiere buscar:"<<endl;
	cin>>Nom;
	i = IB(Nom,elarreglo);
	if(i==-1)

		cout<<"No hay postres con ese nombre"<<endl;

	else
		cout<<" INFORMACION DEL POSTRE "<<endl;
	    cout<<" ================ "<<endl;
		cout<<"El postre: "<<Nom<<" si lo vende la dulceria"<<endl;
    cout<<"la cantidad promedio de azucar es:"<<elarreglo.CalcularProm()<<endl;
    cout<<"la cantidad de postres que utilizan azucar mas del promedio es:"<<elarreglo.ContarMayores()<<endl;
    elpostre=elarreglo.getMenorR();
    cout<<"el postre con menor racion es:"<<elpostre.getNombre()<<endl;
    cout<<"el porcentaje de los postres con racion menor a 10 es:"<<elarreglo.CalPorcMenorR()<<endl;
    elpostre=elarreglo.getMayorM();
    cout<<"la mayor cantidad de mantequilla utilizada es:"<<elpostre.getCantMant()<<endl;
    elpostre=elarreglo.getMenorM();
    cout<<"la menor cantidad de mantequilla utulizada es:"<<elpostre.getCantMant()<<endl;
    cout<<"la cantidad de postres que no llevan chocolate es: "<<elarreglo.getCotNoCacao()<<endl;
    cout<<"la cantidad de postre que llevan chocolate y mantequilla es:"<<elarreglo.getContCacaoyMant()<<endl;
    cout<<"el total de azucar requerido es:"<<elarreglo.CalTotalAR()<<"Gr"<<endl;
    elarreglo.DetFaltante();
    cout<<"el costo total de la azucar es:"<<elarreglo.CalcCostoTotal()<<endl;
    cout<<"Listado de postres de mayor a menor racion:"<<endl;
    cout<<"Nombre:          Raciones:"<<endl;
    elarreglo.OrdenarMayor();





}











