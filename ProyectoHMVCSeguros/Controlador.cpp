/*
 * Controlador.cpp
 * Author:Pedro Gabriel Leal
 *
 */

#include "Controlador.h"

Controlador::Controlador(){}

//metodos propios de la clase

void Controlador::ProcesarPolizas()
{
  //instancias
	MVida mv;
	MAuto ma;
	VAsegurado va;

  //variables de lectura
	 string c, n, d, pl,mod,marc, tlf,fech;
     int tp, ed, aa,annoencurso,resp;
     float ca, pa;

  //variables asigndas para imprimir
     string cedula,nombre,tipopoliza;
     float costopoliza;

         va.Limpiar();
    	 annoencurso=va.LeerNro("\n\tA�o en curso: ");
       do
       {     va.Limpiar();
             va.ImprimirMensaje("\n\t..Cargando Datos de la Poliza..\n");
             c=va.LeerString("Cedula: ");
             n=va.LeerString("Nombre: ");
             c=va.LeerString("Direccion: ");
             tlf=va.LeerString("Telefono: ");
             tp=va.LeerValidarNro("Tipo de Poliza (1)Vida  (2)Auto: ",1,2);

             ca=va.LeerValidarNroDecimalValorInicial("Cantidad Asegurada: ",0);
             pa=va.LeerValidarNroDecimalValorInicial("Porcentaje a Aplicar: ",0);
             fech=va.LeerString("Fecha del seguro(dd/mm/aaaa): ");
             switch (tp)
               {
                 case 1:
                      {
                       //aqui procedemos a leer los datos particulares de la clase MVida
                       //en este caso solo la edad
                         ed=va.LeerValidarNroDecimalValorInicial("Edad del Asegurado: ",0);

                       //seteamos TODOS LOS DATOS en MVida
                       mv.SetCedula(c);
                       mv.SetNombre(n);
                       mv.SetDir(d);
                       mv.SetTlf(tlf);
                       mv.SetTipoPoliza(tp);
                       mv.SetCantAseg(ca);
                       mv.SetPorcAplicar(pa);
                       mv.SetFechaseguro(fech);
                       mv.SetEdad(ed);

                       /* Aqui la clase Grande(MCompa�ia)
                          invoca el Procesar asociado con la herencia(Clase Hijo->MVida) */
                       mc.ProcesarVida(mv);
                       
                      //Imprimimos clase peque�a-> POR ASEGURADO
                      /* COMO EXPLICAMOS EN EL PRINCIPAL,
                         EXISTE UNA SOLA VISTA PARA IMPRIMIR LA INFORMACION DEL ASEGURADO,
                         (VASEGURADO; POR ELLO EXTRAEMOS AQUI LOS VALORES A IMPRIMIR de LA CLASE MVida,
                         PORQUE SE VA A INVOCAR DICHO METODO LUEGO DEL SWITCH,
                         PORQUE SI LO HACEMOS EN ESTA OPCION,
                         TENDRIAMOS Q HACERLO EN LA OPCION 2 tambien,
                         POR ELLO, ES MAS EFICIENTE IMPRIMIR LUEGO DEL SWITCH*/
                       cedula=mv.GetCedula();
                       nombre=mv.GetNombre();
                       tipopoliza=mv.DeterminarTipoPolizaLetras();
                       costopoliza= mv.CalcCostoPoliza();

                       }
                       break;
                 case 2:
                      {
                    	//aqui procedemos a leer los datos particulares de la clase MAuto
                    	//en este caso placa, modelo,marca, a�o del auto
                       pl= va.LeerString("Placa: ");
                       mod=va.LeerString("Modelo: ");
                       marc=va.LeerString("Marca: ");
                       aa=va.LeerValidarNroValorInicial("A�o del Auto: ",2012);

                       ////seteamos TODOS LOS DATOS en MVida
                       ma.SetCedula(c);
                       ma.SetNombre(n);
                       ma.SetDir(d);
                       ma.SetTlf(tlf);
                       ma.SetTipoPoliza(tp);
                       ma.SetCantAseg(ca);
                       ma.SetPorcAplicar(pa);
                       ma.SetFechaseguro(fech);
                       ma.SetPlaca(pl);
                       ma.SetModelo(mod);
                       ma.SetMarca(marc);
                       ma.SetAnno(aa);

                       /*Aqui la clase Grande(MCompa�ia)
                         invoca el Procesar asociado con la herencia(Clase Hijo->MAuto) */
                       mc.ProcesarAuto(ma);
                       
                       //Imprimimos clase peque�a-> POR ASEGURADO
                       /* COMO EXPLICAMOS EN EL PRINCIPAL,
                       EXISTE UNA SOLA VISTA PARA IMPRIMIR LA INFORMACION DEL ASEGURADO,
                       (VASEGURADO; POR ELLO EXTRAEMOS AQUI LO VALORES A IMPRIMIR de LA CLASE MAuto,
                       PORQUE SE VA A INVOCAR DICHO METODO LUEGO DEL SWITCH,
                       PORQUE SI LO HACEMOS EN ESTA OPCION, TENDRIAMOS Q HACERLO EN LA OPCION 2,
                       POR ELLO, ES MAS EFICIENTE IMPRIMIR LUEGO DEL SWITCH*/
                       cedula=ma.GetCedula();
                       nombre=ma.GetNombre();
                       tipopoliza=ma.DeterminarTipoPolizaLetras();
                       costopoliza=ma.CalcCostoPoliza(annoencurso);
                       }break;
           }//switch
             /*
              * Los valores de salida asignados en la opcion 1 o la 2,
              * se envian como par�metro a la vista asegurado
              * para que se encargue de mostrarlos en pantalla.*/

            va.ImprimirAsegurado(cedula,nombre,tipopoliza,costopoliza);
          resp=va.LeerValidarNro("Desea Procesar otro asegurdo(si=1/no=2)? ",1,2);
       }while(resp==1);

}

void Controlador::ReporteCompSeguros()
{
    //instanciamos la vista GRANDE
	 VCompania vc;
    //invocamos el metodo para imprimir por la clase GRANDE...
	 vc.ImprimirCompania( mc.GetAcumvida(),mc.GetAcumauto(),mc.CalcTipoPolizaMayor(),
    		              mc.CalcPorcVida50y70(),mc.CalcPorcRechazvida(),mc.CalcPorcRechazauto());
}
