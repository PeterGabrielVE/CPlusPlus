/*
 * Author: Pedro Gabriel Leal
 *
 */

#include "Controlador.h"

Controlador::Controlador() {}
void Controlador::ProcesarFederacion()
{

	//Declarar Instancias- > instanciacion
	MCompetencia mc;
	MNadador mn;

	VNadador vn;
	VCompetencia vc;

	// OBSERVE que esats 4 clases se declaran como local porque solo se usan en este m�todo (RELACION DE AGREGACION)


	//Declarar variables de lectura
	string ced, nom;
    int equi, est,lug, resp;
    float tiem;

    /* Recordemos que lo primero es identificar las 3 clases asociadas
     * clase GRANDE  -> FEDERACION
     * clase MEDIANA -> NADADOR
     * clase peque�a -> COMPETENCIA
     *
     * Lo cual se lee asi,
     * la federacion posee nadadores,
     * y cada nadador posee competencias
     *
     * */

    do{
    	   //Encabezado clase mediana
    	   system("cls");
           cout<<"\n\n\tDATOS DEL NADADOR\n";
           cout<<"\t=================\n\n";

           //Leer datos de la clase Mediana -> se invocan los metodos de lectura desde la vista Mediana
           ced = vn.LeerCedula();
           nom = vn.LeerNombre();
           equi = vn.LeerEquipo();

           //setear valores leidos en la Clase MMediana
           mn.SetCedula(ced);
           mn.SetNombre(nom);
           mn.SetEquipo(equi);

           /*se inicializa todos los acumuladores, contadores,
             mayor y menor de muchos, presentes en la clase Mediana */

           /*** NOTA IMPORTANTEEE..
            ***** OBSERVEN QUE EN EL CONSTRUCTOR DE MNADADOR, NO SE INICIALIZA EL CONTADOR DE LAS MEDALLAS GANADAS,
            ***** COMO USUIALMENTE VENIAMOS HACIENDOLO, ESTO ES PORQUE CUANDO HAY DOBLE CICLO,
            ***** LO QUE SE DESEA ES QUE LOS CONTADORES Y ACUMULADORES DE LA CLASE MEDIANA,
            ***** SE INICIALICEN CADA VEZ QUE SE REPITE DICHO CICLO. Y SI LO INICIALIZAMOS EN EL CONSTRUCTOR,
            ***** ESOS CONTADORES Y ACUMULADORES SE INICIALIZARIAN UNA SOLA VEZ, Y LO QUE QUEREMOS ES QUE SE INICIALICEN
            ***** CADA VEZ Q SE PROCESE UN NUEVO NADADOR. OK, ENTONCES
            ***** �DONDE INICILIZAREMOS LOS CONTADORES Y ACUMULADORES DE LA CLASE MEDIANA??? PUES, LA RESPUESTA ES:
            ***** CADA VEZ QUE SE VAYA A EJECUTAR UNA NUEVA ITERACION DE LA CLASE MEDIANA, ESTO ES: DENTRO DEL CICLO EXTERNO(CLASE MEDIANA),
            ***** EN NUSTRO CASO, CADA VEZ QUE SE PROCESE UN NUEVO NADADOR,
            ***** SE INICIALIZARIN SUS CONTADORES, ACUMULADORES, MAYORES Y MENORES.OK
            ***** EN RESUMEN:
            ***** LA INICIALIZAN DE LA CLASE GRANDE SE HACE EN EL CONSTRUCTOR
            ***** LA INCIALZIACION DE LA CLASE MEDIANA SE HACE EN EL CONTROALDOR, ATRAVES DE UN METODO SET,
            ***** COMO SE HACE A CONTINUACION...*/
             mn.SetContMedGan(0);/*ESTo HACE QUE EL METODO SET RECIBA ESE CERO COMO PARAMNETRO
                  Y LO ASIGNA AL ATRIBUTO: contmedgan( contador de medallas ganadas). */

             /* Encabezado GENERAL de la clase  peque�a sin borrar la pantalla,
               esto es para visualizar la informacion leida de la clase mediana(nadador),
               mientras se leen los datos de las competencias */
           cout<<"\n\tCOMPETENCIAS DEL NADADOR\n\n";
           cout<<"\t========================\n\n";

           /*ciclo que procesa la clase peque�a,
             si se conoce el nro de veces q se va a repetir,
             se us EL CICLO FOR, en caso contrario, usamos un DO-WHILE*/
           do{

        	   // Encabezado particular de la clase  peque�a
        	   cout<<"\n\tDATOS DE LA COMPETENCIA\n";
        	   cout<<"\t=======================\n";

        	   //Leer datos de la clase Peque�a -> se invocan los metodos de lectura desde la vista Peque�a
        	   est = vc.LeerEstilo();
        	   tiem = vc.LeerTiempo();
               lug = vc.LeerLugar();

               //setear valores leidos en la Clase Peque�a
               mc.SetEstilo(est);
               mc.SetTiempo (tiem);
               mc.SetLugar (lug);

              /*La clase MEDIANA procesa la clase PEQUE�A
                (solo si la clase MEDIANA necesita algun valor de la clase PEQUE�A,ok),
                y se invoca aqui en el ciclo peque�o, porque aqui es donde estan los datos de la clase MPeque�a*/
                mn.ProcesarCompetencia(mc);

                /*La clase GRANDE procesa la clase PEQUE�A
                 (Esto se hace si la clase GRANDE necesita SOLO atributos o calculos de la clase PEQUE�A,ok),
                  y se invoca aqui en el ciclo peque�o, porque aqui es donde esta la clase MPeque�a,

                  EN NUESTRO CASO NO SE REALIZA-> EXPLICADO EN EL SIGUIENTE ESCENARIO*/

                /*La clase GRANDE procesa la clase PEQUE�A y la clase MEDIANA
                  (Esto se hace si la clase GRANDE necesita atributos o calculos de la clase PEQUE�A y de la MEDIANA)
                   y se invoca aqui en el ciclo peque�o, porque aqui es donde esta la clase MPeque�a
                   Y ademas YA SE HAN LEIDO LOS DATOS DE LA CLASE MEDIANA. OK*

                   ***** NOTA IMPORTANTISIMA**********
                   SI SE INVOCA ESTE METODO, YA NO TIENE SENTIDO REALIZAR EL METODO DE La clase GRANDE que procesa la clase PEQUE�A,
                   porque lleva como parametro la clase peque�a,y por lo tanto puede hacer uso de su atributos y calculos,
                   ademas de la clase mediana,evidentemente... OK */
              mf.ProcesarCompetNadador(mn,mc);

              //preguntamos si hay mas datos por procesar de la clase peque�a
              cout<<"\n\n\tDesea procesar Otra competencia del nadador? (1)Si / (2)No: ";
              cin>>resp;
            }while(resp==1);

           /*Una vez q procesamos todas las iteraciones de la clase peque�a(Competencia),
            ya se han incrementado los contadores, acumuladores,de la clase MEDIANA; sentencias realizadas en:
            CLASE MEDIANA QUE PROCESA CLASE PEQUE�A (COMPETENCIA)
            por lo tanto, procedemos a Imprimir todas las salidas de la clase Mediana,
            considerando que si se desea extraer un atributo de dicha clase,
            se invoca el respectivo metodo Get, sino, se invoca la funcion tipo */
           vn.ImprimirNadador(mn.GetCedula(),mn.GetNombre(),mn.GetContMedGan());

           /*La clase Grande procesa la clase mediana,
            (solo si la clase Grande necesita algun valor de la clase mediana,ok),
            y se invoca aqui fuera del ciclo de la clase peque�a,
            porque significa que ya se procesaron todos los datos peque�os(competencia)
            que contenia la clase mediana(nadador). En nuestro ejercicio,
            observe que ya se han procesado todas las comepetencias del nadador */
           mf.ProcesarNadador(mn);

           //preguntamos si hay mas datos por procesar de la clase Mediana(nadador)
           cout<<"\n\n\tDesea procesar otro Nadador? (1)Si / (2)No :";
           cin>>resp;
      } while (resp == 1);


}


void Controlador::ReporteFederacion()

{
	//DECLARAMOS LA VISTA DE LA CLASE GRANDE como local porque solo se usa en este m�todo (RELACION DE AGREGACION)
	VFederacion vf;
  /* Invocamso el metodo de la vista que imprime las salida por la clase grande-> .ImprimirFederacion,
   * enviandole como parametro los resultados a imprimir. observe que se invocan LAS FUNCIONES TIPO
   * para los porcentajes deseados, mientras que se invoca con GET,LA SALIDA respecto al total de nadadores estilo mariposa,
   * esto sucede porque se calcula con UN CONTADOR Y LOS CONTADORES SON ATRIBUTOS, y todo atributo solo puede salir con GET de la clase!!!
   */
	vf.ImprimirFederacion(mf.CalcPorcMedOroEq2(),mf.CalcPorcNadEq1(),mf.GetContCompetMarip() );

}

