/*
 * Author: Pedro Gabriel Leal
 *
 */

#include "Controlador.h"

Controlador::Controlador(){}
      
void Controlador::ProcesarVendedores()
{
   string c,n;
   float sb,mvta;
   int resp;
   
   do // ciclo repetitivo para procesar varios vendedores
   {
      //Encabezado para leer los datos del vendedor
	  system("cls");
      cout << "\n\n\tDATOS DEL VENDEDOR" << endl;
      cout << "\t==================\n" << endl;

      //Leer los datos de entrada de la clase peque�a(Vendedor), se hace atrves de la vista vendedor
      c = vv.LeerCedula();
      n = vv.LeerNombre();
      sb = vv.LeerSueldobase();
      mvta = vv.LeerMontoventas();
      /* Como ven, la sintaxis corresponde a la invocacion de una FUNCION TIPO :
      -> varible =instancia.Metodo() para cad dato leido*/

      /*El controlador envia esos datos leidos, a la clase modelo peque�a(MVendedor),
        para que dicha clase realice los calculos correspondientes del vendedor,
        es decir; aqui debemos SETEAR los datos leidos en la clase MPeque�a(MVendedor)*/
      mv.SetCedula(c);
      mv.SetNombre(n);
      mv.SetSueldobase(sb);
      mv.SetMontoventas(mvta);

      /*Imprimir Salida de la clase peque�a(vendedor),
        como el metodo q imprime en la clase VVendedor (ImprimirVendedor)es un funcion void,
        la sintaxis sera instancia.metodo()

        PARAMETROS: se le envia los parametros a imprimir:
        Dado que cedula y nombre son atributos; estos salen con GET,
        mientras que la comision y el sueldo neto son dos funciones tipo,
        asi que les invocamos con el nombre de cada funcion. veamos: */
        vv.ImprimirVendedor( mv.GetCedula(),mv.GetNombre(),
                             mv.CalcComisionVentas(), mv.CalcSueldoNeto());

       /* La clase MCompannia incrementa contadores y acumuadores,
          a traves del metodo ProcesarClasepeque�a(), en nuestro caso ProcesarVendedor(),
          para ello necesitamos enviarle la INSTANCIA de clase peque�a "mv",
          para que obtenga de alli, lo necesario y asi incrementar los acumuladores y contadores..*/
        mc.ProcesarVendedor(mv);

        //LEER RESPUESTA: Le solicitAMOS al usuario si desea seguir procesando vendedores
      cout << "\n\n\t\t Desea procesar otro Vendedor (1) Si - (2) No? " ;
      cin >> resp;
   }
   while (resp == 1); /*SI DESEA SEGUIR PROCESANDO VENDEDORES, SE REPITE EL CICLO ,
                        LA SENTENCIA SIGUIENTE ES EJECUTAR EL "DO", Y PROCESA OTRO VENDEDOR*/
}

void Controlador::ReporteCompannia()
{
   
   /* Se encarga de imprimir la informacion solicitada por la compa�ia,
      Dado que el metodo ImprimirMontoNomina recibe com parametro el acumulador de MCompannia,
      entonces procedemos a enviarselo, en definitiva hacemo dos tareas:
       1) Invocamos el M�todo ImprimirMontoNomina de la clase VCompannia,
          dado que dicho metodo es una funcion VOID, la sintaxis a emplear ser�:INSTANCIA.METODO()
       2) Le enviamo como par�metro el acumulador, con GET, por ser ATRIBUTO
          y dado que el GET es una FUNCION TIPO, la sintaxis ser�: INSTANCIA.METODO()
    */
       vc.ImprimirMontoNomina (mc.GetMontoNomina());
}
