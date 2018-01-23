/*
 * Author: Pedro Gabriel Leal
 */

   #include "VEmpresa.h"

   VEmpresa::VEmpresa(){}
   
   void VEmpresa::ImprimirEmpresa(float PorcClie10,  /*requerimiento 1-> */float prommtos,
		                          string tipomatmayor)
   {
	system("cls");
    cout<<"\t\t\tInformacion de la Empresa\n" ;
    cout<<"\t\t\t=========== == == =======\n\n" ; 

    cout<<" Porcentaje de clientes con mas de 10 a�os comprando en la Empresa: "
        << setiosflags(ios::fixed) << setprecision(2)<< PorcClie10<<" %"<<endl; 


    /*requerimiento 1 */
    cout<<" Promedio del monto total vendido: "
           << setiosflags(ios::fixed) << setprecision(2)<< prommtos<<endl;

    cout<<" Tipo de material mas vendido en METROS: "<< tipomatmayor<<endl;
    cout<<"\n\n\n                ";
    system("pause");
   }                             
   
   
    
