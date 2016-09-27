/* Archivo 01*/

#include <stdio.h>
#include <stdlib.h>
int k,x;
void r1(int a, int b){
    int i;
    i=a*b;
    r3(i);
    printf ("%d %d %d", i,x,k);
}

int main() {
    k=1; x=2;
    r1(x,x);
    printf ("%d",x);
    return 0;
}
