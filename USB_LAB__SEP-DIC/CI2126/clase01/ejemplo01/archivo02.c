/* Archivo 02*/

extern k;

int r2(int i){
    k=i+3;
    if (i<=10) {printf ("%d %d", i,k);}
    return (i+k);
 }

void r3(int a){
    int x,y;
    k=a+k;
    x=r2(a);
    y=r2(2*a);
    printf("%d %d", x, y);
}
