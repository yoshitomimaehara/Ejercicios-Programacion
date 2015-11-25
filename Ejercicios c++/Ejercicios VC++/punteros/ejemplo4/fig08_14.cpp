// Fig. 8.14: fig08_14.cpp
// Intento de modificar un apuntador constante a datos constantes.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int x = 5, y;

   // ptr es un apuntador constante a un entero constante. 
   // ptr siempre apunta a la misma ubicación; el entero
   // en esa ubicación no se puede modificar.
   const int *const ptr = &x; 
 
   cout << *ptr << endl;

   *ptr = 7; // error: *ptr es const; no se puede asignar un nuevo valor
   ptr = &y; // error: ptr es const; no se puede asignar una nueva dirección
   return 0; // indica que terminó correctamente
} // fin de main

/**************************************************************************
 * (C) Copyright 1992-2007 por Deitel & Associates, Inc. y                *
 * Pearson Education, Inc. Todos los derechos reservados.                 *
 *                                                                        *
 * RENUNCIA: Los autores y el editor de este libro han realizado su mejor *
 * esfuerzo para preparar este libro. Esto incluye el desarrollo, la      *
 * investigación y prueba de las teorías y programas para determinar su   *
 * efectividad. Los autores y el editor no hacen ninguna garantía de      *
 * ningún tipo, expresa o implícita, en relación con estos programas o    *
 * con la documentación contenida en estos libros. Los autores y el       *
 * editor no serán responsables en ningún caso por los daños consecuentes *
 * en conexión con, o que surjan de, el suministro, desempeño o uso de    *
 * estos programas.                                                       *
 *************************************************************************/
