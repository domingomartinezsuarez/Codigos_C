#include <stdio.h>
#define MAX 40


int main()
{

    FILE *fp;
    fp = fopen("archivo_html.html","w");

    if (fp == NULL){
       printf("\nNO SE PUDO ABRIR EL ARCHIVO");
       return 0;

    }

       fprintf(fp,"<HTML>\n");
       fprintf(fp,"<HEAD>\n");
       fprintf(fp,"</HEAD>\n");
       fprintf(fp,"<TITLE>");
       fprintf(fp," PRUEBA HTML ");
       fprintf(fp,"</TITLE>\n");
       fprintf(fp,"<BODY>\n");
       fprintf(fp,"Esta es mi primera página web\n");
       fprintf(fp,"</BODY>\n");
       fprintf(fp,"</HTML>\n");
	
	fprintf(fp, "dato01");
	fprintf(fp, " ");
	fprintf(fp, "dato02");
       fclose(fp);
       printf("Ya se creo el archivo en formato HTML");


    return 0;
}
