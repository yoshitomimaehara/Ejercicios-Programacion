// Fig. 8.7: fig08_07.cpp
// Uso del paso por referencia con un argumento apuntador para elevar 
// al cubo el valor de una variable.
#include <iostream>
using std::cout;
using std::endl;

void cuboPorReferencia( int * ); // prototipo

int main()
{
   int numero = 5;

   cout << "El valor original de numero es " << numero;

   cuboPorReferencia( &numero ); // pasa la dirección de numero a cuboPorReferencia

   cout << "\nEl nuevo valor de numero es " << numero << endl;
   return 0; // indica que terminó correctamente
} // fin de main

// calcula el cubo de *nPtr; modifica la variable numero en main
void cuboPorReferencia( int *nPtr )
{
   *nPtr = *nPtr * *nPtr * *nPtr; // eleva *nPtr al cubo
} // fin de la función cuboPorReferencia

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