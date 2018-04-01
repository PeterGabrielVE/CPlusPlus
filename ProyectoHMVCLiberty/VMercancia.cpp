/*
 * Autor: Pedro Gabriel Leal
 */

#include "VMercancia.h"
VMercancia::VMercancia(){}

void VMercancia::ImprimirMercancia (string NroGuia, string DProducto, string Destinat, float PesoL, float iva, float MontoTotal)
{
Limpiar();
ImprimirEncabezado("Informacion de Mercancia", "========================");
ImprimirString("\n\n Nro de Guia: ", NroGuia);
ImprimirString ("\n Descripcion del Producto: ", DProducto);
ImprimirString("\n Destinatario: ",Destinat);
ImprimirNroDecimal("\n Peso en Libras: ", PesoL);
ImprimirNroDecimal("\n IVA (BsF): ", iva);
ImprimirNroDecimal("\n Monto Total a Cancelar: ", MontoTotal);
ImprimirLineasBlanco(2);
Pausa();
}
