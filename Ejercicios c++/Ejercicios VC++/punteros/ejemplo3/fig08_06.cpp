// Fig. 8.6: fig08_06.cpp
// Uso del paso por valor para elevar al cubo el valor de una variable.
#include <iostream>
using std::cout;
using std::endl;

int cuboPorValor( int ); // prototipo

int main()
{
   int numero = 5;

   cout << "El valor original de numero es " << numero;

   numero = cuboPorValor( numero ); // pasa el numero por valor a cuboPorValor
   cout << "\nEl nuevo valor de numero es " << numero << endl;
   return 0; // indica que termin� correctamente
} // fin de main

// calcula y devuelve el cubo del argumento entero
int cuboPorValor( int n )
{
   return n * n * n; // eleva al cubo la variable local n y devuelve el resultado
} // fin de la funci�n cuboPorValor

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