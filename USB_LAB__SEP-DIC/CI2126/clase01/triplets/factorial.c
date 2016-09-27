/*
 * DESCRIPCION: El siguiente programa calcula el factorial de N
 *              usando for
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triplets.h"

int main()
 {
  int factorial = 1, cont = 1, N = 0;
  char c;
  printf("\nIntroduzca el valor de 'N' (entero): ");
  scanf ("%d", &N);

  printf("\nSe leyó N = %d\n\n",N);

  _pre( N >= 0 );

  for (cont = 1; cont <= N; cont ++)
   {
     _bound( cont );
     factorial = cont*factorial;
     printf("Para cont %3d el producto es %6d\n", cont, factorial);
     _inv( factorial >= cont );
   }

  _post( factorial >= N );



   printf("\nEl factorial de %d es %d\n\n", N, factorial);

   return 0;

} /* end main */
