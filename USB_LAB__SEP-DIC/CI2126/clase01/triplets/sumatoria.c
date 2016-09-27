/*
 * DESCRIPCION: El siguiente programa calcula la sumatoria de los numeros de 1 a N
 *              usando for
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "triplets.h"

int main()
{
  int suma = 0, cont = 1, N = 0; // Entradas para la sumatoria
  char c;
  printf("\nIntroduzca el valor de 'N' (entero): ");
  scanf ("%d", &N);   

  printf("\nSe leyo N = %d\n\n",N);

  _pre( N > 0 );     //precondicion modificada

  for (cont = 1; cont <= N; cont ++)
   {
     suma += cont;
     printf("Para cont %3d, la suma es %4d\n", cont, suma);
     _inv( suma == cont*(cont+1)/2 );     //invariante modificado
  }
  
  _post( suma == N*(N+1)/2 );     //postcondicion modificada
  
   printf("\nLa suma de los primeros %d enteros es %d\n\n", N, suma);
   
   //system("PAUSE");
   
  return 0;
  
}
