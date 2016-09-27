/*
 * variables locales estaticas
 *
 * */
#include <stdio.h>

int miSub(int y); /*/prototipo de la función*/

int main()
{
	int global = 0;
	int y = 0;
	global=miSub(y);
	printf("%d\n",global);
	miSub(y);
}
int miSub(int y)
{
  static int estatica = 4;
  int local = 5;
  printf("variable static %d\n", estatica);
  printf("variable local %d\n", local);
  estatica++;
  y++;
  return y;
}
