
#include <stdio.h>

void prueba(int x, int *px){
	printf("valor de la variable: %d\n",x);
	printf("valor del  apuntador: %d\n",++*px);
}

int main()
{
	int x=4;
    prueba(x, &x);
	return 0;
}


