#include <stdio.h>
main(){
    int i, b[]={10,20,30,40,50};
    int *bPtr = b;
    printf("Arreglo impreso con notación de subíndices");
    for (i=0; i<=4; i++)
        printf("b[%d] = %d \n",i,b[i]);
        printf("\n");
        printf("Arreglo como apuntador y desplazamiento");
    for (i=0; i<=4; i++)
        printf("*(b+%d) = %d \n",i,*(b+i));
        printf("\n");
        printf("Notación apuntador-subíndices");
    for (i=0; i<=4; i++)
        printf("bPtr[%d] = %d \n",i,bPtr[i]);
        printf("\n");
        printf("Notación apuntador y desplazamiento");
    for (i=0; i<=4; i++)
        printf("*(bPtr+%d) = %d \n",i,*(bPtr+i));
}
