
#include <stdio.h>
int main()
{
	int x=4;
	int *px;
	px=&x;

	printf("Referencia de la variable %p\n",&x);
	printf("Donde se�ala el puntero %p\n",px);
	printf("Posici�n del puntero %p\n",&px);
	printf("Valor donde apunta %d\n",*px);
   return 0;
}
