/* 
 * AUTOR: Profesor Domingo Martínez
 * FECHA: 10/06/2015
 * FINALIDAD:
 * 
 * 1.- CREA ARCHIVO
 * 2.- INTRODUCIR DATOS POR CONSOLA EN EL ARCHIVO
 * 3.- IMPRIME LOS DATOS DEL ARCHIVO
 * 4.- BUSCA Y ELIMINA UN REGISTRO DEL ARCHIVO
 * 5.- UTILIZA FUNCIONES
 * 6.- PASO DE PARAMETROS POR VALOR Y REFERENCIA
 * 7.- CREA UNA ESTRUCTURA DE DATOS CON ARREGLO Y APUNTADOR DEL ARREGLO
 * 8.- PASA LOS DATOS DEL ARCHIVO A LA ESTRUCTURA
 * 9.- IMPRIME LOS DATOS GRABADOS EN LA ESTRUCTURA.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

struct persona{
	int cedula;
	char nombre[30];
	float sueldo;
	int dia;
    int mes;
    int anio;
	}lista[TAM], *ptr;

//CREA ARCHIVO...
void crear_archivo(){
	FILE *ifp = fopen ("archivo.txt", "w");
	if (ifp == NULL) {printf( "Error (NO CREADO)\n" );}
	fclose(ifp);
}

//INTRODUCE DATOS...
void introducir_datos(int cedula, char nombre[30], float sueldo,
					  int dia, int mes, int anio, FILE *fp){
	if (fp == NULL) {printf( "Error (NO ABIERTO)\n" );}
	for (int i=0; i<TAM; i++){
		printf ("Digite la Cedula: ");
		scanf("%d", &cedula);
		
		printf ("Digite el Nombre: ");
		scanf("%s", nombre);
		
		printf ("Digite el Sueldo: ");
		scanf("%f", &sueldo);
		
		printf ("Dia de Nacimiento: ");
		scanf("%d", &dia);	
		
		printf ("Mes de Nacimiento: ");
		scanf("%d", &mes);
		
		printf ("Anio de Nacimiento: ");
		scanf("%d", &anio);
		
		fprintf(fp,"%d %s %.2f %d %d %d\n",cedula, nombre, sueldo, dia, mes, anio);
		}fclose(fp);
}

//IMPRIME DATOS DEL ARCHIVO...
void imprime_datos(int cedula, char nombre[30], float sueldo,
				   int dia, int mes, int anio, FILE *fp){
	if (fp == NULL) {printf( "Error (NO ABIERTO)\n" );}
	printf("\nIMPRIME DATOS DEL ARCHIVO\n");
	while (fscanf(fp,"%d %s %f %d %d %d",&cedula,nombre,&sueldo, &dia, &mes, &anio) != EOF){
		printf("%d %s %.2f %d %d %d\n",cedula, nombre, sueldo, dia, mes, anio);
		}fclose(fp);
	return;
}

//BUSCA Y ELIMINA UN DATO...
void elimina_datos(int cedula, char nombre[30], float sueldo,
				   int dia, int mes, int anio, FILE *fp){
	FILE *ifpaux = fopen ("archivo_aux.txt", "w");
	if (fp == NULL) {printf( "Error (NO ABIERTO)\n" );}
	int cedula_buscar;
	printf ("\nDigite la Cedula a eliminar: ");
	scanf("%d", &cedula_buscar);
	while (fscanf(fp,"%d %s %f %d %d %d",&cedula, nombre, &sueldo, &dia, &mes, &anio) != EOF){
		if (cedula != cedula_buscar){
			fprintf(ifpaux,"%d %s %.2f %d %d %d\n",cedula, nombre, sueldo, dia, mes, anio);
		}
    }
    remove("archivo.txt");
    rename("archivo_aux.txt","archivo.txt");
}
//CARGA ESTRUCTURA...
void carga_estructura(int cedula, char nombre[30], float sueldo,
					  int dia, int mes, int anio, FILE *fp){
	if (fp == NULL) {printf( "Error (NO ABIERTO)\n" );}
	int i=0;
	while (fscanf(fp,"%d %s %f %d %d %d",&cedula,nombre,&sueldo, &dia, &mes, &anio) != EOF){
		ptr[i].cedula=cedula;
		strcpy(ptr[i].nombre, nombre);
		ptr[i].sueldo=sueldo;
		ptr[i].dia=dia;
		ptr[i].mes=mes;
		ptr[i].anio=anio;
		i++;
	}fclose(fp);	
}

//IMPRIME DATOS DE LA ESTRUCTURA...
void imprime_estructura(){
	int i=0;
	printf("\nIMPRIME DATOS DE LA ESTRUCTURA DE DATOS\n");
	for (i=0; i<TAM;i++){
		printf ("cedula: %d ",ptr[i].cedula);
		printf ("nombre: %s ",ptr[i].nombre);
		printf ("sueldo: %6.2f ",ptr[i].sueldo);
		printf ("dia: %d ",ptr[i].dia);
		printf ("mes: %d ",ptr[i].mes);
		printf ("anio: %d \n ",ptr[i].anio);
		}
}

int main(){
	ptr = lista;
	int cedula=0;
	char nombre[30];
	float sueldo=0;
	int dia=0; int mes=0; int anio=0;
    
    //CREA EL ARCHIVO...
    crear_archivo();
    
	//INTRODUCE DATOS AL ARCHIVO...
    FILE *ifpi = fopen ("archivo.txt", "a");
    introducir_datos(cedula, nombre, sueldo, dia, mes, anio, ifpi);
    
    //IMPRIME DATOS DEL ARCHIVO...
	FILE *ifpp = fopen ("archivo.txt", "r");
	imprime_datos(cedula, nombre, sueldo, dia, mes, anio, ifpp);
	
	// CARGA DE LA ESTRUCTURA...
	FILE *ifpc = fopen ("archivo.txt", "r");
	carga_estructura(cedula, nombre, sueldo, dia, mes, anio, ifpc);

	//IMPRIME DATOS DE LA ESTRUCTURA...
	imprime_estructura();
	
	//ELIMINA DATOS DEL ARCHIVO...
	FILE *ifpb = fopen ("archivo.txt", "r");
	elimina_datos(cedula, nombre, sueldo, dia, mes, anio, ifpb);

    return 0;
}
