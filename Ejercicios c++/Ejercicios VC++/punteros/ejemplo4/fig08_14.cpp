// Fig. 8.14: fig08_14.cpp
// Intento de modificar un apuntador constante a datos constantes.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int x = 5, y;

   // ptr es un apuntador constante a un entero constante. 
   // ptr siempre apunta a la misma ubicaci�n; el entero
   // en esa ubicaci�n no se puede modificar.
   const int *const ptr = &x; 
 
   cout << *ptr << endl;

   *ptr = 7; // error: *ptr es const; no se puede asignar un nuevo valor
   ptr = &y; // error: ptr es const; no se puede asignar una nueva direcci�n
   return 0; // indica que termin� correctamente
} // fin de main

/**************************************************************************
 * (C) Copyright 1992-2007 por Deitel & Associates, Inc. y                *
 * Pearson Education, Inc. Todos los derechos reservados.                 *
 *                                                                        *
 * RENUNCIA: Los autores y el editor de este libro han realizado su mejor *
 * esfuerzo para preparar este libro. Esto incluye el desarrollo, la      *
 * investigaci�n y prueba de las teor�as y programas para determinar su   *
 * efectividad. Los autores y el editor no hacen ninguna garant�a de      *
 * ning�n tipo, expresa o impl�cita, en relaci�n con estos programas o    *
 * con la documentaci�n contenida en estos libros. Los autores y el       *
 * editor no ser�n responsables en ning�n caso por los da�os consecuentes *
 * en conexi�n con, o que surjan de, el suministro, desempe�o o uso de    *
 * estos programas.                                                       *
 *************************************************************************/
