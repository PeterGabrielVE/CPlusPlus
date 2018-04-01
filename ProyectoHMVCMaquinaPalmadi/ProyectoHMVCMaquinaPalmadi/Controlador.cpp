/*
 * Controlador.cpp
 *
 *  Created on: 22/05/2012
 *      Author: Pedro Gabriel Leal
 */


#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
 chequeo=false;
}

void Controlador::SetChequeo(bool chk)
{
    chequeo = chk;
}

bool Controlador::GetChequeo()
{
    return chequeo;
}



void Controlador::ProcesarHerramientas()
{
  //Instancia
		   MEmpresa mempre;
		   MMartillo mm;
           MEsmeriladora me;
           MLijadora ml;
           VHerramienta vh;


  //variables de lectura
           string cod, desc;
           int tipo,diasalq,cantlijas;



  //Declaraciones de variables de archivo
           //aqui declaramos las variables logica y fisica del archivo de entrada
 	     	ifstream archherramientas; //variable que almacena el nombre logico del archivo de entrada
 	     	char NombFisArchivo[128]; //variable q almacena el nombre fisico del archivo de entrada

 	       //aqui declaramos las variables logica y fisica del archivo de salida(donde guardaremos los datos)
 	     	ofstream archsalida;//variable q almacena el nombre logico del archivo de salida
 	     	char nombfissalida[120];//variable q almacena el nombre fisico del archivo de salida

  //Declaracion de variables de salida


              float iva,
 	     	        montofinalalquiler;

           //lectura del nombre del artchivo de entrada
 	         vh.Limpiar();
             vh.LeerNombreArchivo("Nombre del archivo de entrada: ",NombFisArchivo);


 	         if (!vh.AbrirArchivoEntrada(archherramientas,NombFisArchivo))
 	         	{
 	         	 vh.ImprimirMensaje("Error..archivo no existe\n\n");
 	         	 vh.Pausa();
 	         	 return;
 	         	}

 	            vh.LeerNombreArchivo("Nombre del archivo de Salida: ",nombfissalida);
 	         	//validando archivo salida

 	         	if (!vh.AbrirArchivoSalida(archsalida,nombfissalida))
 	         	{
 	         		vh.ImprimirMensaje("Error al abrir archivo de salida\n\n");
 	         		vh.Pausa();
 	         		return;
 	         	}


                 //imprimir un mensaje q indica qu estamos cargando la informacion desde el archivo...
 	         	vh.ImprimirMensaje("...se estan cargando datos del archivo...\n\n");
 	            vh.Pausa();
                chequeo=true;/*aqui estamos seguro que se va a leer los datos del archivo..
                y se procesa la mercancia, se coloca el chequeo en true
                asi cuando en el principal el usuario desee ejecutar la opcion 2 -> estadisticas,
                entonces se pregunta si el chequeo est� en true,
                lo cual garantiza que se proceso la opcion 1 - Procesarmercancia
                y por lo tanto se permite ejecutar la opcion 2. ok  */


 	          /* al leer un archivo, lo 1ero que vamos a hacer
 	           * es leer el 1er dato QUE ESTA EN EL ARCHIVO, * ANTES DEL WHILE*/
 	        cod = vh.LeerLineaArchivo(archherramientas); /* ESTA SENTENCIA LEE LA LINEA DE TEXTO
 	             DONDE ESTA EL PUNTERO DE LECTURA, Q COMO EXPLICAMOS,
 	             CUANDO SE ABRE EL ARCHIVO SE UBICA EN LA 1ERA LINEA DEL MISMO.

 	             luego de leer el dato que esta alli, lo almacena en la variable cod,
 	             y el PUNTERO DE LECTURA AVANZA A LA SIGUIENTE LINEA*/

                /*Seguidamente hacemos un while que se ejecuta MIENTRAS EL PUNTERO DEL ARCHIVO
                 *NO HAYA LLEGADO AL FINAL DEL mismo,
                  cuando llegue a esa marca de fin de archivo significa que no hay mas datos,
                  y entonces se termina la ejecucion del while.
                  asi,AL HACER
                  while(!vh.FinArchivo(archherramientas))
                  INDICA que va a ejecutar las sentencias dentro del ciclo
                  MIENTRAS EL PUNTERO DEL ARCHIVO DE ENTRADA NO ESTE AL FINAL,
                  (porq significa que hay datos para accesar ) si esto no se cumple significa que
                  EL PUNTERO DEL ARCHIVO DE ENTRADA LLEGO AL FINAL(EOF= END OF FILE->FIN DE ARCHIVO)
                  Y POR LO TANTO SE ROMPE EL CICLO. OK */

 	        while(!vh.FinArchivo(archherramientas))
 	        {
             /*AQUI SE LEE el siguiente dato, se almacena en la variable
              y el PUNTERO DE LECTURA SE UBICA EN LA SIGUINTE LINEA...
              Y ASI SUCESIVAMNETE CON CDA DATO LEIDO....*/
 	          desc=vh.LeerLineaArchivo(archherramientas);
 	          tipo=vh.LeerDatoNroArchivo(archherramientas);
 	          diasalq=vh.LeerDatoNroArchivo(archherramientas);


	         switch(tipo)
	          {
	           case 1:{

	        	   /*LUEGO DE LEER TODOS LOS DATOS COMUNES de la herramienta:
	        	   	           * NECESITAMOS LEER LOS DEMAS DATOS si hay datos propios*/
	        	  /*SETEAMOS TODOS LOS DATOS EN LA CLaSE MMARTILLO*/

	        	  mm.SetCodigo(cod); //esta en MArticulo(Herencia)
	        	  mm.SetDesc(desc);  // esta en MArticulo (Herencia)
	        	  mm.SetTipo(tipo); //esta en MMArticulo (Herencia)
	        	  mm.SetDiasalguiler(diasalq); //est� en MHerramienta  (Herencia)

	        	  /*De la clase MMARTILLO, asignamos  LOS VALORES de calculos A IMPRIMIR POR la clase de la herencia*/
	        	  iva=mm.CalcIva();
	        	  montofinalalquiler=mm.CalcMontoFinalAlquiler();

	        	  /*INVOCAMOS EL METODO PROCESAR asociado con la Herencia ..SI ES NECESARIO.*/
                  mempre.ProcesarMartillo(mm);
	          }
	            break;

	           case 2:{

            	        	 /*LUEGO DE LEER TODOS LOS DATOS COMUNES de la herramienta:

	        	   	         * NECESITAMOS LEER LOS DEMAS DATOS si hay datos propios*/

            	        	 /*SETEAMOS TODOS LOS DATOS EN LA CLaSE MESMERILADORA*/
	           	        	  me.SetCodigo(cod); //esta en MArticulo(Herencia)
	           	        	  me.SetDesc(desc);  // esta en MArticulo (Herencia)
	           	        	  me.SetTipo(tipo); //esta en MArticulo (Herencia)
	           	        	  me.SetDiasalguiler(diasalq); //est� en MHerramianta  (Herencia)

	           	        	  /*De la clase Mesmeriladora,
	           	        	   * asignamos  LOS VALORES de calculos A IMPRIMIR POR la clase de la herencia*/
	           	        	  iva=me.CalcIva();
	           	        	  montofinalalquiler=me.CalcMontoFinalAlquiler();

	           	        	  /*INVOCAMOS EL METODO PROCESAR asociado con la Herencia ..SI ES NECESARIO..*/
	                          mempre.ProcesarEsmeriladora(me);
	           	          }
	           	            break;
	           case 3:{

	        	              //datos propios
	        	              cantlijas=vh.LeerDatoNroArchivo(archherramientas) ;

	           	        	  /*SETEAMOS TODOS LOS DATOS EN LA CLaSE MLijadora
	           	        	  TANTO LO DATOS COMUNES COMO LOS DATOS PROPIOS DE LA CLASE.*/

	           	        	  ml.SetCodigo(cod); //esta en Marticulo(Herencia)
	           	        	  ml.SetDesc(desc);  // esta en MArticulo (Herencia)
	           	        	  ml.SetTipo(tipo); //esta en MArticulo (Herencia)
	           	        	  ml.SetDiasalguiler(diasalq); //est� en MHerramienta(Herencia)

	           	        	  ml.SetCantlijas(cantlijas); //esta en MLijadora

	           	        	  /*De la clase MLijadora, asignamos  LOS VALORES de calculos A IMPRIMIR POR la clase de la herencia*/
	           	        	  iva=ml.CalcIva();
	           	        	  montofinalalquiler=ml.CalcMontoFinalAlquiler();

	           	        	  /*INVOCAMOS EL METODO PROCESAR asociado con la Herencia ..SI ES NECESARIO..
	           	        	  EN NUESTRO CASO, NO LO HAREMOS PORQUE POR EMPRESA NO NOS PIDEN NADA
	           	        	  RESPECTO A LA MERCANCIA DE BAJO VALOR..ok*/
	                             mempre.ProcesarLijadora(ml);
	           	          }
	           	            break;

	          } //switch
	         //imprimimos por pantalla la salida por herraminta
	         vh.ImprimirHerramienta(cod,desc,iva, montofinalalquiler);



	           /*  Como nos piden la salida por herrramienta en un archivo,
               * es lo que haremos aqui,
               * para ello, haremos uso de las funciones de VGeneral
               * que permiten GUARDAR DATOS EN UN ARCHIVO DE SALIDA
               */
	          vh.GrabarLineaArchivo(archsalida,"Codigo: ");//esta linea imprime el titulo
	          vh.GrabarLineaArchivo(archsalida,cod);//esta linea imprime la variable
	          vh.GrabarLineaArchivo(archsalida,"Descripcion ");//esta linea imprime el titulo
	          vh.GrabarLineaArchivo(archsalida,desc);//esta linea imprime la variable
	          vh.GrabarLineaArchivo(archsalida,"Monto Iva: ");//esta linea imprime el titulo
	          vh.GrabarDatoNroDecimalArchivo(archsalida,iva);//esta linea imprime la variable
	          vh.GrabarLineaArchivo(archsalida,"Monto Final Alquiler: "); //esta linea imprime el titulo
	          vh.GrabarDatoNroDecimalArchivo(archsalida,montofinalalquiler);//esta linea imprime la variable


	          //nos copiamos la 1era sentencia de lectura antes del while.
	          cod = vh.LeerLineaArchivo(archherramientas);

	          /* ESTA SENTENCIA LEE el 1er dato de cada mercancia en el archivo*/
 	        }//FIN DEL while

 	         /*luego que se accesan todos los datos del archivo de entrada,
 	         *  entonces se agota(se rompe) el while
 	         * esto es porque el PUNTERO lleg� AL FIN DEL ARCHIVO,
 	         y es aqui cuando realmente se  guarda los resultados en el archivo de salida,
 	         se envia un mensaje al usuario indicando que se ha generado un archivo,
 	         SI DESEAS VER EL ARCHIVO GENERADO, ABRE LA CARPERTA DEBUGGG DEL PROYECTO,
 	         ALLI APARECE, CON EL NOMBRE DEL ARCHIVO DE SALIDA
 	         QUE TU LE SUMINISTRASTE, yo le coloque ESTADISTICAS.TXT*/

 	        vh.ImprimirMensaje("\n\tSe ha generado el archivo ");
 	        cout<<nombfissalida;
 	        vh.ImprimirMensaje("\n\tque posee informacion de las herramientas ");
 	        vh.ImprimirMensaje("\n\tAbralo y visualice resultados!!\n\n\t");
 	        vh.Pausa();
 	        //AQUI CERRAMOS LOS ARCHIVOS...
 	        vh.CerrarArchivoEntrada(archherramientas);
            vh.CerrarArchivoSalida(archsalida);
}


void Controlador::Estadisticas()
{
    //INSTANCIA LA VISTA DE LA CLASE GRANDE
	 VEmpresa vempre;

	//INVOCAMOS EL METODO QUE IMPRIME POR LA CLASE GRANDE
	 vempre.ImprimirEmpresa(mempre.DeterminarMayorTipo());

}
