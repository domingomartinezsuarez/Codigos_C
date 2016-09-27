/*
 * Programa completo de archivos
 * Creación, Lectura, escritura, búsqueda, inclusión, eliminación y
 * modificación

 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	/*Declaración variables y apuntadores...*/

    char ifilename[] = "entrada.txt";
    char ofilename[] = "salida.txt";
    char name[30];
    int idNum;
    float sueldo;
    char palabras[1000];
    FILE *ifp, *ofp;

	/*ifp = fopen(ifilename,"a");*/   /* Abrir archivo entrada     */
	ifp = fopen(ifilename,"r");   /* Abrir archivo entrada     */
    ofp = fopen(ofilename,"w");   /* Abrir archivo salida      */

	/* Rutina de validación...*/

	if (ifp==NULL) {
		printf( "Error (NO ABIERTO)\n" );
		return 1;
		}
	if (ofp==NULL) {
		printf( "Error (NO ABIERTO)\n" );
		return 1;
		}

	/* Lectura de los elementos de un archivo...*/

	while (fscanf(ifp,"%s %d %f",name,&idNum,&sueldo) != EOF) {/*Leer datos */
		   printf("%s %d %.2f\n",name, idNum, sueldo);
           fprintf(ofp,"%d %s %.2f\n",idNum, name, sueldo);   /* Escribir datos */
    }

	/* grabar en el archivo desde consola...*/

	printf ("Digite unas Palabras: ");
	fgets(palabras, 1000, stdin);
	fputs(palabras, ofp);

	/*busqueda secuencial un campo en el archivo...*/

	ifp = fopen(ifilename,"r");
	void rewind(FILE *ifp);	/*rebobinar situar al inicio*/
	while (fscanf(ifp,"%s %d %f",name,&idNum,&sueldo) != EOF) {/*Leer datos */
		if (idNum==2) printf("%d Codigo existe:", idNum);
    }


	/*remove("salida.txt");

	cierra el buffer o archivos...*/
	fclose(ifp); fclose(ofp);
	return 0;

}
