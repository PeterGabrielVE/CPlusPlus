/*
 * Autor: Pedro Gabriel Leal
 */

#include "Controlador.h"
Controlador::Controlador()
{
	check = 0;
}

void Controlador::SetCheck(int c)
{
	check = c;
}
int Controlador::GetCheck()
{
	return check;
}


void Controlador::ProcesarProducto()
{
	MAlto mal;
	MBajo mba;
	VMercancia vme;
	VEmpresa vem;
	string nguia, descrip, desti;
    float pe, pdolar;
    int tipar, tipv;
    char nombarchivo[120];
    ifstream archmer;
    ofstream archsalida;


    vme.Limpiar();
    vme.LeerNombreArchivo("\n\n Nombre del archivo de datos (Ej: Datos.txt): ", nombarchivo);

    if  (!vme.AbrirArchivoEntrada(archmer, nombarchivo))
      { vme.ImprimirMensaje("\n ERROR: No existe el archivo\n");
    	 vme.Pausa ();
    	 return;
    	}

nguia = vme.LeerLineaArchivo(archmer);

if (vme.FinArchivo(archmer))
    {
       vme.ImprimirMensaje("\n ERROR: El archivo no tiene datos\n\n");
       vme.Pausa ();
       return;
    }
vme.ImprimirMensaje("\n .....CARGANDO DATOS DE MERCANCIA.....\n");

vme.LeerNombreArchivo(" \n\n  Nombre del archivo de Salida: ",nombarchivo);
if (!vme.AbrirArchivoSalida(archsalida, nombarchivo))
    {
        vme.ImprimirMensaje("\n ERROR: No se puede crear el archivo\n");
        vme.Pausa ();
        return;
    }
SetCheck(1);

while (!vme.FinArchivo(archmer))
{

     descrip = vme.LeerLineaArchivo(archmer);
     pe = vme.LeerDatoNroDecimalArchivo(archmer);
     pdolar = vme.LeerDatoNroDecimalArchivo(archmer);
     desti = vme.LeerLineaArchivo(archmer);
     tipv = vme.LeerDatoNroArchivo(archmer);



if( tipv == 1)
{

         mba.SetNroGuia(nguia);
         mba.SetDProducto(descrip);
         mba.SetPesoL(pe);
         mba.SetPreDolar(pdolar);
         mba.SetDestinat(desti);
         mba.SetTipoV(tipv);
         vme.ImprimirMercancia(nguia, descrip, desti, pe, mba.ivaB(), mba.MontoTotal());
         vme.GrabarLineaArchivo(archsalida,nguia);
         vme.GrabarLineaArchivo(archsalida,descrip);
         vme.GrabarLineaArchivo(archsalida,desti);
         vme.GrabarDatoNroDecimalArchivo(archsalida,pe);
         vme.GrabarDatoNroDecimalArchivo(archsalida, mal.iva());
         vme.GrabarDatoNroDecimalArchivo(archsalida, mal.MontoTotal());
}
else
{
            tipar = vme.LeerDatoNroArchivo(archmer);
	         mal.SetNroGuia(nguia);
	         mal.SetDProducto(descrip);
	         mal.SetPesoL(pe);
	         mal.SetPreDolar(pdolar);
	         mal.SetDestinat(desti);
	         mal.SetTipoV(tipv);
	         mal.SetTipoAr(tipar);
	         mem.ProcesarArticulo(mal);
	         vme.ImprimirMercancia(nguia, descrip, desti, pe, mal.iva(), mal.MontoTotal());
	         vme.GrabarLineaArchivo(archsalida,nguia);
	         vme.GrabarLineaArchivo(archsalida,descrip);
	         vme.GrabarLineaArchivo(archsalida,desti);
	         vme.GrabarDatoNroDecimalArchivo(archsalida,pe);
	         vme.GrabarDatoNroDecimalArchivo(archsalida, mal.iva());
	         vme.GrabarDatoNroDecimalArchivo(archsalida, mal.MontoTotal());
}

nguia = vme.LeerLineaArchivo(archmer);
}//fin del while

vme.CerrarArchivoEntrada(archmer);
vme.CerrarArchivoSalida(archsalida);
}

void Controlador::ImprimirEmpresa()
{
     VEmpresa vem;
     if (check == 0)
         {
    	 vem.Limpiar();
    	 		vem.ImprimirMensaje("\nERROR! Debe procesar los datos primero.\n\n");
    	 		vem.Pausa();
    	 	}
    	 	else
    	 	{
    	 		vem.ImprimirEmpresa(mem.Mayor());
    	 		return;
    	 	}
    	 }//fin
