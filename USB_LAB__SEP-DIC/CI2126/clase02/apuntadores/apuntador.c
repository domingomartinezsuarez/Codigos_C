/*
 * NOMBRE DEL ARCHIVO:
 * DESCRIPCION: Este programa muestran los divisores de n y su cantidad, de
 *              los numeros dados por teclado hasta introducir 0
 * AUTORES: Lionel Rodriguez y Rosseline Rodriguez
 * FECHA DE ULTIMA MODIFICACION: 04/02/2015
 */

#include <stdio.h>

void sondivisores(int n, int *nd);

// Programa Principal

int main()
{
   int n;  // ENTRADA: Un numero MAYOR QUE 100
   int nd; // SALIDA: numero de divisores de n de los valores leidos

   printf("Escriba el numero que se usara para detectar sus divisores.\n");
   printf("Tiene que ser un numero mayor que 100: " );
   scanf("%d",&n);

   if (n < 100)
   {
      printf("\n\nERROR: el numero tiene que ser mayor que 100. Programa finalizado\n");
   }
   else
   {
      // PRECONDICION: n > 100

      sondivisores(n, &nd);

      // POSTCONDICION: nd tiene la cantidad de divisores de n dados.
      //                Esta cantidad puede ser cero en cuyo caso escribe
      //                 "No se dieron divisores de n

      if (nd==0)
        printf("\nNo se dieron divisores de %d\n",n);
      else
        printf("\nSe dieron %d divisores de %d \n",nd,n);
   }
   return 0;
}

void sondivisores(int n, int *nd)
// PRECONDICION: n>100
// POSTCONDICION: nd contiene el numero de divisores de n leidos
{
   int dado; //ENTRADA: numero leido (posible divisor)
   *nd = 0;
   do {
      printf ("\nEscriba el siguiente numero. Use 0 (cero) para terminar ");
      scanf("%d",&dado);
      if (dado != 0)
         if (n % dado == 0){
            (*nd)++;
            printf("\n   %d divide a %d\n",dado,n);
         }
   } while (dado != 0);
}
