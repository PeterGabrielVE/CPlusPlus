/*
 *
 * Author:Pedro Gabriel Leal
 *
 */

   #include "VEmpresa.h"

   VEmpresa::VEmpresa(){}
   
   void VEmpresa::ImprimirEmpresa(float PorcClie10,
		                          /*REQUERIMIENTO 1-> */string tipomallamay,
		                          /*REQUERIMIENTO 2-> */ float mayordscto)
   {
	system("cls");
    cout<<"\t\t\tInformacion de la Empresa\n" ;
    cout<<"\t\t\t=========== == == =======\n\n" ; 

    cout<<" Porcentaje de clientes con mas de 10 a�os comprando en la Empresa: "
        << setiosflags(ios::fixed) << setprecision(2)<< PorcClie10<<" %"<<endl<<endl;

    //REQUERIMIENTO 1
    cout<<" Tipo de malla con mayor descuento: "<<tipomallamay<<endl<<endl;

   //REQUERIMIENTO 2
    cout<<" Mayor descuento otorgado: "<<mayordscto<<endl;

    cout<<"\n\n\n                ";
    system("pause");
   }                             
   
   
    
