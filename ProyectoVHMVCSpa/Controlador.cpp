/*
 * Controlador.cpp
 *
 *  Created on: 26/05/2014
 *      Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
	chequeo=false;

}

void Controlador::SetChequeo(bool cheq)
{
    chequeo = cheq;
}

bool Controlador::GetChequeo()
{
    return chequeo;
}

void Controlador::RegistrarTerapias()
{
	//variables de lectura
	string codt,desc;
	float prec;
	int tipo, resp,positerapia;
	//instanciar
	MArticulo mterap;

	do
	{
	 vs.Limpiar();
	 vs.ImprimirMensaje("\t\t\tInformacion de la Terapia\n\n");
	 codt=vs.LeerString("Codigo de la terapia: ");
	 positerapia= ms.BuscarTerapia(codt);
	 if(positerapia ==-1)
	  {
		//leer demas datos
		desc=vs.LeerString("Descripcion: ");
		prec=vs.LeerValidarNroDecimalValorInicial("Precio: ",0);
		tipo= vs.LeerValidarNro("Tipo de Tratamiento : ",1,6);

		//setear
		mterap.SetCodigo(codt);
		mterap.SetDesc(desc);
		mterap.SetPvp(prec);
		mterap.SetTipo(tipo);
		ms.IncluirTerapia(mterap);
	  }
	   else
	    vs.ImprimirMensaje("Codigo de laTerapia ya ha sido Incluido\n\n");

	 resp=vs.LeerValidarNro("\nDesea incluir otra terapia (1)Si/(2)No?: ",1,2);
	 }while(resp==1);
}


void Controlador::RegistrarTratamientos()
{
	vs.Limpiar();
	vs.ImprimirMensaje("\t\t\tREGISTRAR TRATAMIENTOS\n\n");

	if (ms.CantTratamientos()>0)
	{
		//si chequeo esta en false....
		vs.ImprimirMensaje("Ya se ha cargado la informacion de los tratamientos\n\n");
		vs.Pausa();
		return;//nos devolvemos al menu de opciones para procesar otra opcion
	}
	//variables de lectura
	string desc;
	//instanciar
	MTratamiento mt;
	int st;

	vs.ImprimirMensaje("\t\t\tCargar Informacion de Los Tratamientos\n\n");
    for (int i=0; i< 6; ++i)
    {
    	vs.ImprimirNro("Tratamiento #", i+1);
    	vs.ImprimirLineasBlanco(1);

        desc=vs.LeerString("Descripcion: ");
        vs.ImprimirLineasBlanco(1);
        st=vs.LeerValidarNro("Status -> (1) En Promocion  (0) Sin Promocion: ", 0,1);
        //setear
        mt.SetDescripcion(desc);
        mt.SetStatus(st);
        ms.IncluirTratamiento(mt);
    }

}

void Controlador::ProcesarTerapiasClientes()
{

	    vs.Limpiar();
		vs.ImprimirMensaje("\t\t\tProcesar Servicios\n\n");

		if (ms.CantTratamientos()== 0 or ms.CantTerapias()== 0)
		{
			vs.ImprimirMensaje("Debe ejecutar las Opciones 1 y 2\n\n");
			vs.Pausa();
			return;//nos devolvemos al menu de opciones para procesar otra opcion
		}

	//variables de lectura
		string codt, ced,nom;
		int resp, positerapia, posicliente, cantterap;

    //instancias
		MArticulo mt;
		MCliente mc;

		do
		{
		 vs.ImprimirMensaje("\t\t\tInformacion de lo servicios ofrecido a los clientes\n\n");
		 ced=vs.LeerString("Cedula del cliente: ");
		 posicliente=ms.BuscarCliente(ced);
		 if (posicliente==-1)
		 {

			 nom= vs.LeerString("Nombre del cliente: ");
			 cantterap=vs.LeerValidarNroValorInicial("Cantidad de terapias a relizarse: ",0);

			 mc.SetCedula(ced);
			 mc.SetNombre(nom);
			 mc.SetCantTerapias(cantterap);

			 ms.IncluirCliente(mc);

			 mc.SetAcummonto(0);

			 vs.ImprimirMensaje("\t\t\tInformacion de cada terapia a procesar al cliente\n\n");
			 for(int i=0;i<cantterap; ++i)
			 {
				 codt=vs.LeerString("Codigo de la terapia: ");
				 positerapia= ms.BuscarTerapia(codt);
				 if(positerapia >=0)
				 {
					 chequeo=true;
					 ms.Procesar(positerapia, ms.CantClientes()-1);

				 }
			     else
		            vs.ImprimirMensaje("Codigo no existe\n\n");
			 }//for
			}
			 else
			   vs.ImprimirMensaje("Cliente ya registrado \n\n");

		 resp=vs.LeerValidarNro("\nDesea procesar Terapias a otro cliente (1)Si/(2)No?: ",1,2);
		 }while(resp==1);
}



void Controlador:: Reporte()
{
	vs.Limpiar();
	vs.ImprimirMensaje("\t\t\tREPORTE ESTADISTICO POR LAS TERAPIAS APLICADAS A LOS CLIENTES\n\n");

	if (!chequeo)
	{
		//si chequeo esta en false....
		vs.ImprimirMensaje("No se han procesado servicios\n\n");
		vs.Pausa();
		return;//nos devolvemos al menu de opciones para procesar otra opcion
	}

	vector<string> vauxced;
	vector<float> vauxmtoc;
	for(int i=0;i<ms.CantClientes();++i)
	{
		vauxced.push_back(ms.GetCliente(i).GetCedula());
		vauxmtoc.push_back(ms.GetCliente(i).GetAcummonto());
	}

	vs.ImprimirReporte( vauxced,vauxmtoc,ms.CalcMontoTotalIngresado() );
  }
