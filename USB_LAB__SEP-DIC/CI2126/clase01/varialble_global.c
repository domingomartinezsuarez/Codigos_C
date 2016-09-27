/*
 * Ejercicio 2 (Domingo Martinez)
 */

#include <stdio.h>
int w = 50;

void global(){
  printf("%d", w);
}
int main(){
	int w = 20;
	global();
	w=80;
	printf("%d", w);
	return 0;
}

