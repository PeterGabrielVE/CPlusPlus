/*
 * Author: Pedro Gabriel Leal
 */

#include "Controlador.h"

Controlador::Controlador(){}

void Controlador::ProcesarClientes()
 {
  //instanciar
	   MCliente mc;
	   MEmpresa me;

       VEmpresa ve;
       VCliente vc;



  //Declarar variables de lectura
    string c,n;
    int tm,a,resp ;
    float m;
      
    do
    {
     //Encabezado de la entrada
     system("cls");
     cout<<"\tDatos del Cliente\n" ;
     cout<<"\t===== === ========\n\n" ;  
     
     //Invocar los metodos de la vista pequ�a(VCliente) q leen los datos de la clase peque�a(MCliente)
     c=vc.LeerCedula();
     n=vc.LeerNombre();
     tm=vc.LeerTipoMalla();
     m=vc.LeerMetros();
     a=vc.LeerAntiguedad();


     //Setear los datos leidos en la clase Modelo peque�a(MCliente)
     mc.SetCedula(c);
     mc.SetNombre(n);
     mc.SetTipoMalla(tm);
     mc.SetAntiguedad(a);
     mc.SetMetros(m);

     
     //Imprimir Salida de la clase peque�a, invocando el metodo Imprimir de la vist peque�a(VCliente)
     vc.ImprimirCliente( mc.GetCedula(),mc.GetNombre(),
    		             mc.CalcTipoMallaComprada(),mc.CalcDescuento());
     /* De la Clase Madre (MEmpresa) se invoca el metodo ProcesarCliente,
        para que este incremente contadores y acumuladores */
      me.ProcesarCliente(mc);

     cout<<"\n\n\n                       Desea Seguir si(1)  No(2) ?";
     cin>> resp;

    }while(resp==1);


    //Imprimir Salida de la clase peque�a, invocando el metodo Imprimir de la vist peque�a(VCliente)
     ve.ImprimirEmpresa(me.CalcPorcClie10(),me.GetMenordscto() );

 }
