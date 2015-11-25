// Fig. 8.4: fig08_04.cpp
// Los operadores & y * de los apuntadores.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int a; // a es un entero
   int *aPtr; // aPtr es un int * -- apuntador a un entero

   a = 7; // se asigna 7 a la variable a
   aPtr = &a; // se asigna la direcci�n de a a aPtr

   cout << "La direccion de a es " << &a
      << "\nEl valor de aPtr es " << aPtr;
   cout << "\n\nEl valor de a es " << a
      << "\nEl valor de *aPtr es " << *aPtr;
   cout << "\n\nDemostracion de que * y & son inversos "
      << "uno del otro.\n&*aPtr = " << &*aPtr
      << "\n*&aPtr = " << *&aPtr << endl;
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