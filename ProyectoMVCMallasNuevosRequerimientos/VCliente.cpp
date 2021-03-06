/*
 * Author: Pedro Gabriel Leal
 */

   #include "VCliente.h"

   VCliente::VCliente(){}
   
   string VCliente::LeerCedula()
   {
    string ced;
    cout<<"\tCedula: " ;    
     cin>>ced;
    return ced; 
   }
  
   string VCliente::LeerNombre()
   {
    string nomb;
    cout<<"\tNombre: " ;    
     cin.sync();
     getline(cin,nomb);
    return nomb; 
   }
   

  float VCliente::LeerMetros( )
   {
    float mts;
    do
    {
      cout<<"\tMetros Comprados: " ;
      cin>>mts;
      if( mts <0)
    	cout<<"\nDato No Valido\n";
    }while(mts <0);
    return mts;    
       
   }
   
  int VCliente::LeerTipoMalla()
   
   {
    int tmalla;
    do
    {
      cout<<"\tTipo de Malla -> (1)Plana (2)Rollo: " ;
      cin>>tmalla;
      if (tmalla <1 or tmalla>2)
        cout<<"\nDato No Valido\n";
    }while (tmalla <1 or tmalla>2);
    return tmalla;    
       
   }
   
  int VCliente::LeerAntiguedad()
   
   {
    int ant;
   do
   {
     cout<<"\tAnnos que tiene comprando en la empresa: " ;
     cin>>ant;
     if( ant <0)
      cout<<"\nDato No Valido\n";
   }while(ant <0);
   return ant;
       
   } 
   

  int VCliente::LeerTipoMaterial()/*requerimiento 2-> */
  {

	  int tmaterial;
	      do
	      {
	        cout<<"\tTipo de Material -> (1)Liviano (2)Duplex (3)Robusto: " ;
	        cin>>tmaterial;
	        if (tmaterial <1 or tmaterial>3)
	          cout<<"\nDato No Valido\n";
	      }while (tmaterial <1 or tmaterial>3);
	      return tmaterial;
  }

   
   void VCliente::ImprimirCliente(string cedu, string nom, string MallaComprada, float Dscto)
   {
   system("cls");
   cout<<"\n\tInformacion del Cliente\n" ;
     cout<<"\t=========== === =======\n\n" ;
   cout<<"\tCedula : "<<cedu<<endl;
   cout<<"\tNombre : "<<nom<<endl;
   cout<<"\tTipo de Malla Comprada: "<<MallaComprada<<endl;
   cout<<"\tDescuento : "<<setiosflags(ios::fixed) << setprecision(2)<<Dscto<<endl;
   cout<<"\n\n\n                ";
   system("pause");
   }
   
   

